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
        mainwindow.cpp \
    ventanaprincipal.cpp \
    ../CLionProjects/tareaCorta1/manejo_memoria/UnidadManejoMemoria.cpp \
    ../CLionProjects/tareaCorta1/manejo_memoria/Pagina.cpp \
    ../CLionProjects/tareaCorta1/manejo_memoria/MemoriaPrincipal.cpp

HEADERS += \
        mainwindow.h \
    ventanaprincipal.h \
    ../CLionProjects/tareaCorta1/manejo_memoria/UnidadManejoMemoria.h \
    ../CLionProjects/tareaCorta1/manejo_memoria/Pagina.h \
    ../CLionProjects/tareaCorta1/manejo_memoria/MemoriaPrincipal.h

FORMS += \
        mainwindow.ui \
    ventanaprincipal.ui

DISTFILES += \
    ../CLionProjects/tareaCorta1/pizzas/Suprema.txt \
    ../CLionProjects/tareaCorta1/pizzas/SoloQueso.txt \
    ../CLionProjects/tareaCorta1/pizzas/SoloCarne.txt \
    ../CLionProjects/tareaCorta1/pizzas/Pizzas \
    ../CLionProjects/tareaCorta1/pizzas/JamonYQueso.txt \
    ../CLionProjects/tareaCorta1/pizzas/Hawaiana.txt
