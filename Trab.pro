#-------------------------------------------------
#
# Project created by QtCreator 2018-06-12T22:07:31
#
#-------------------------------------------------

QT       += core gui

#greaterThan(QT_MAJOR_VERSION, 4):

QT += widgets printsupport

TARGET = Trab
TEMPLATE = app

QMAKE_CXXFLAGS += -Wall -Wextra

SOURCES += main.cpp\
        mainwindow.cpp \
    jogador.cpp \
    qcustomplot.cpp \
    tempo.cpp \
    velocidade.cpp \
    distancia.cpp

HEADERS  += mainwindow.h \
    jogador.h \
    qcustomplot.h \
    tempo.h \
    velocidade.h \
    distancia.h

FORMS    += mainwindow.ui

QMAKE_CXXFLAGS  += --std=gnu++14
