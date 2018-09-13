#ifndef UNIDADMANEJOMEMORIA_H
#define UNIDADMANEJOMEMORIA_H
#include <QTableWidget>
#include <vector>
#include "../manejo_memoria/Pagina.h"
#include "../manejo_memoria/MemoriaPrincipal.h"
#include "unistd.h"

class UnidadManejoMemoria{
private:
    QTableWidget *bloqueMemoria;
    std::vector<QString> colaDePizzas;
    std::vector<Pagina> pizzas;
    Pagina *paginaPizza;
    MemoriaPrincipal *memoriaPrincipal = new MemoriaPrincipal();


public:
    UnidadManejoMemoria(QTableWidget *tabla, std::vector<QString> pcolaDePizzas);
    void ingresarPizzasCola(std::vector<QString> pcolaDePizzas);
    void ejecutar();

};

#endif // UNIDADMANEJOMEMORIA_H
