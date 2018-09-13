#ifndef UNIDADMANEJOMEMORIA_H
#define UNIDADMANEJOMEMORIA_H
#include <QTableWidget>
#include <vector>

class UnidadManejoMemoria{
private:
    QTableWidget *bloqueMemoria;

public:
    UnidadManejoMemoria(QTableWidget *tabla, std::vector<QString> colaDePizzas);
};

#endif // UNIDADMANEJOMEMORIA_H
