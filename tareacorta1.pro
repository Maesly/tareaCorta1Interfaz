#-------------------------------------------------
#
# Project created by QtCreator 2018-09-12T06:41:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tareacorta1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        interfaz/mainwindow.cpp \
    manejo_memoria/MemoriaPrincipal.cpp \
    manejo_memoria/Pagina.cpp \
    manejo_memoria/UnidadManejoMemoria.cpp \
    manejo_memoria/leerTXT.cpp

HEADERS += \
        interfaz/mainwindow.h \
    manejo_memoria/MemoriaPrincipal.h \
    manejo_memoria/Pagina.h \
    manejo_memoria/UnidadManejoMemoria.h \
    DEFINITIONS.h \
    manejo_memoria/leerTXT.h

FORMS += \
        mainwindow.ui

DISTFILES += \
    Pizzas/Hawaiana.txt \
    Pizzas/JamonYQueso.txt \
    Pizzas/Pizzas \
    Pizzas/SoloCarne.txt \
    Pizzas/SoloQueso.txt \
    Pizzas/Suprema.txt
