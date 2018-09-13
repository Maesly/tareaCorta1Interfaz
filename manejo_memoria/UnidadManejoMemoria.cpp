#include "UnidadManejoMemoria.h"
#include "iostream"
UnidadManejoMemoria::UnidadManejoMemoria(QTableWidget *tabla, std::vector<QString> pcolaDePizzas){
    bloqueMemoria = tabla;
    colaDePizzas = pcolaDePizzas;
    ingresarPizzasCola(colaDePizzas);
    //tabla->item(0,0)->setText("hola");
    //std::cout << "tamano es " << colaDePizzas.size();


//    for(int i = 0; i < colaDePizzas.size(); i++){
//        tabla->item(i,0)->setText(colaDePizzas[i]);
//    }

}

void UnidadManejoMemoria::ingresarPizzasCola(std::vector<QString> pcolaDePizzas){
    if(pcolaDePizzas.size() != 0) {
        for (int var = 0; var < pcolaDePizzas.size(); var++) {
            paginaPizza = new Pagina(pcolaDePizzas[var].toStdString());
            pizzas.push_back(*paginaPizza);

        }
        ejecutar();
    }else {
        std::cout << "No se pudo ejecutar el programa pizza";
    }
}

void UnidadManejoMemoria::ejecutar(){

    int indice = 0;

    while( indice < pizzas.size() ){
        while( pizzas[indice].getProcesoEjecucion() < pizzas[indice].getCantidadProcesos() ){
            memoriaPrincipal->cargarBloque(pizzas[indice].getProcesoEjecucion(),pizzas[indice].nombrePizza);
            pizzas[indice].setProcesoEjecucion();
            //memoriaPrincipal->leer(0);
            memoriaPrincipal->liberarBloque(0);
            QString s = QString::number(pizzas[indice].getProcesoEjecucion());
            QString w = QString::fromStdString(pizzas[indice].nombrePizza);
            bloqueMemoria->item(0,0)->setText(w + s);
            std::cout <<"Entro al proceso :" << pizzas[indice].getProcesoEjecucion() ;
            //system(pause);
            sleep(1);
        }
            indice++;
    }
}
