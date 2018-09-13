#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_BotonHawaiana_pressed()
{
    QString cola;
    cola = ui->textoCola->toPlainText();
    cola+="Hawaiana, ";
    ui->textoCola->setText(cola);
    colaDePizzas.push_back("Hawaiana");

}

void MainWindow::on_Botonqueso_pressed()
{
    QString cola;
    cola = ui->textoCola->toPlainText();
    cola+="Queso, ";
    ui->textoCola->setText(cola);
    colaDePizzas.push_back("SoloQueso");

}

void MainWindow::on_Botonjamonyqueso_pressed()
{
    QString cola;
    cola = ui->textoCola->toPlainText();
    cola+="Jamon y Queso, ";
    ui->textoCola->setText(cola);
    colaDePizzas.push_back("JamonYQueso");

}

void MainWindow::on_Botonsuprema_pressed()
{
    QString cola;
    cola = ui->textoCola->toPlainText();
    cola+="Suprema, ";
    ui->textoCola->setText(cola);
    colaDePizzas.push_back("Suprema");
}


void MainWindow::on_Botoncarne_pressed()
{
    QString cola;
    cola = ui->textoCola->toPlainText();
    cola+="Carne, ";
    ui->textoCola->setText(cola);
    colaDePizzas.push_back("Solocarne");
}


void MainWindow::on_Botonejecutar_pressed()
{
    ManejoMemoria = new UnidadManejoMemoria(ui->memoria, colaDePizzas);
    imprimirListaCola();

}

void MainWindow::imprimirListaCola(){
    std::cout << "Imprimiendo Cola de Pizzas Seleccionadas : "<< std::endl;
    QString mensaje = " ";
    for(int i = 0; i < colaDePizzas.size() ; i++){
        mensaje += colaDePizzas[i];
        mensaje += ", ";
    }
    ui->textEditmiConsola->setText(mensaje);
}


