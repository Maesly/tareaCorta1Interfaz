#include "ventanaprincipal.h"
#include "ui_ventanaprincipal.h"

ventanaprincipal::ventanaprincipal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventanaprincipal)
{
    ui->setupUi(this);
}

ventanaprincipal::~ventanaprincipal()
{
    delete ui;
}
