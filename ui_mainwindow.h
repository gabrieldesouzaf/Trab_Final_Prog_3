/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbrir;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QCustomPlot *customPlot;
    QPushButton *dados;
    QComboBox *comboBox_Jogador;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QLabel *label_6;
    QCustomPlot *customPlot3;
    QTextBrowser *textBrowser;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_6;
    QTextEdit *textEdit_7;
    QTextEdit *textEdit_8;
    QLabel *label;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1340, 757);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName(QStringLiteral("actionAbrir"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setAutoFillBackground(true);
        widget->setStyleSheet(QStringLiteral(""));
        customPlot = new QCustomPlot(widget);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(0, 0, 691, 681));
        dados = new QPushButton(widget);
        dados->setObjectName(QStringLiteral("dados"));
        dados->setGeometry(QRect(1160, 620, 101, 31));
        comboBox_Jogador = new QComboBox(widget);
        comboBox_Jogador->setObjectName(QStringLiteral("comboBox_Jogador"));
        comboBox_Jogador->setGeometry(QRect(1230, 570, 41, 27));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(920, 560, 101, 17));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(920, 580, 101, 17));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(930, 630, 101, 17));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(930, 650, 101, 17));
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(1030, 560, 91, 21));
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_2 = new QTextEdit(widget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(1030, 580, 91, 21));
        textEdit_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_3 = new QTextEdit(widget);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(1030, 630, 91, 21));
        textEdit_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_4 = new QTextEdit(widget);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setGeometry(QRect(1030, 650, 91, 21));
        textEdit_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(1160, 570, 67, 17));
        customPlot3 = new QCustomPlot(widget);
        customPlot3->setObjectName(QStringLiteral("customPlot3"));
        customPlot3->setGeometry(QRect(690, 0, 581, 361));
        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(690, 360, 581, 171));
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        textEdit_5 = new QTextEdit(widget);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));
        textEdit_5->setGeometry(QRect(780, 560, 91, 21));
        textEdit_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_6 = new QTextEdit(widget);
        textEdit_6->setObjectName(QStringLiteral("textEdit_6"));
        textEdit_6->setGeometry(QRect(780, 580, 91, 21));
        textEdit_6->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_7 = new QTextEdit(widget);
        textEdit_7->setObjectName(QStringLiteral("textEdit_7"));
        textEdit_7->setGeometry(QRect(780, 630, 91, 21));
        textEdit_7->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_8 = new QTextEdit(widget);
        textEdit_8->setObjectName(QStringLiteral("textEdit_8"));
        textEdit_8->setGeometry(QRect(780, 650, 91, 21));
        textEdit_8->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1060, 540, 31, 17));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(810, 540, 31, 16));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(810, 610, 31, 17));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(1060, 610, 31, 17));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(710, 560, 67, 17));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(710, 630, 67, 17));
        label_12 = new QLabel(widget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(730, 580, 41, 17));
        label_13 = new QLabel(widget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(730, 650, 41, 17));

        gridLayout->addWidget(widget, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1340, 25));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QStringLiteral("menuArquivo"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuArquivo->addAction(actionAbrir);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionAbrir->setText(QApplication::translate("MainWindow", "Abrir", Q_NULLPTR));
        dados->setText(QApplication::translate("MainWindow", "Dados", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Horario Inicio:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Horario Final:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Horario Inicio:", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Horario Final:", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Jogador:", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "1\302\272 T", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "1\302\272 T", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "2\302\272 T", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "2\302\272 T", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Entrada:", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Entrada:", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Saida:", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Saida:", Q_NULLPTR));
        menuArquivo->setTitle(QApplication::translate("MainWindow", "Arquivo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
