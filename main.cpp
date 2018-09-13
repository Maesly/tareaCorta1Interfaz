#include "interfaz/mainwindow.h"
#include <QApplication>
#include "DEFINITIONS.h"
#include "manejo_memoria/MemoriaPrincipal.h"
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;

    MemoriaPrincipal *mem = new MemoriaPrincipal();
    leerTXT *leerTXT1 = new leerTXT();

    std::cout<<leerTXT1->cantLineasTXT("JamonYQueso");

    w.show();

    return a.exec();
}
