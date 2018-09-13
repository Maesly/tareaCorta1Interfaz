#include "UnidadManejoMemoria.h"
#include "iostream"
UnidadManejoMemoria::UnidadManejoMemoria(QTableWidget *tabla, std::vector<QString> colaDePizzas){

    tabla->item(0,0)->setText("hola");
    std::cout << "tamano es " << colaDePizzas.size();

    for(int i = 0; i < colaDePizzas.size(); i++){

        tabla->item(i,0)->setText(colaDePizzas[i]);
    }

}
