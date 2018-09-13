//
// Created by Josue Chaves on 12/9/18.
//

#include "leerTXT.h"
#include <stdlib.h>
#include <stdio.h>
leerTXT::leerTXT() {}
void leerTXT::imprimirLineaTXT(int proceso, int tamanoProceso) {

    std::cout << "Proceso: " << proceso << "\tTamano del proceso: " << tamanoProceso<< std::endl;

}

int leerTXT::leerlineaTXT(int lineaLeer, std::string path) {

    archivoALeer.open(RUTAPIZZATXT + path + ".txt");
    if(!archivoALeer.is_open()){
        std::cout<< "No se pudo abrir el archivo"<<std::endl;
        std::cout<< "en leerlinea"<<std::endl;

        exit(EXIT_FAILURE);
    }else {
        while (archivoALeer >> proceso >> tamanoProceso) {
            if (proceso == lineaLeer) {
                archivoALeer.close();
                return tamanoProceso;
            }
        }
    }

}

int leerTXT::cantLineasTXT(std::string path) {
    int cont;
    int cont2;
    archivoALeer.open(RUTAPIZZATXT + path + ".txt");
    if(!archivoALeer.is_open()){
        std::cout<< "No se pudo abrir el archivo"<<std::endl;
        std::cout<< "en cantidad lineas"<<std::endl;

        exit(EXIT_FAILURE);
    }else{
        int numLineas = 0;
         while(archivoALeer>> cont>>cont2){
             numLineas++;
        }
        archivoALeer.close();
        return numLineas;
    }
}
