#include "mainwindow.h"
#include "qcustomplot.h"
#include "jogador.h"
#include <QApplication>
#include <QDebug>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");
    MainWindow w;
    w.setWindowFlags(w.windowFlags() | Qt::WindowMinimizeButtonHint);
    w.show();


    return a.exec();
}
