#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "iostream"
#include "../manejo_memoria/UnidadManejoMemoria.h"
#include <QTableWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


    void imprimirListaCola();

private slots:
    void on_BotonHawaiana_pressed();

    void on_Botonqueso_pressed();

    void on_Botonjamonyqueso_pressed();

    void on_Botonsuprema_pressed();

    void on_Botoncarne_pressed();

    void on_Botonejecutar_pressed();


private:
    Ui::MainWindow *ui;
    std::vector<QString> colaDePizzas;
    UnidadManejoMemoria *ManejoMemoria;

};

#endif // MAINWINDOW_H
