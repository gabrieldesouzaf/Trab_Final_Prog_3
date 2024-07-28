#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "jogador.h"
#include "graficos.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class QStandardItemModel;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void makePlot();
    void makePlot3();


private slots:
    void on_actionAbrir_triggered();

    void on_dados_clicked();

private:
    Ui::MainWindow *ui;
    std::map<int, Jogador> _m;
    int numj;
    int tam;
    int cond=0;
    std::string hrin1;
    std::string hrfn1;
    std::string hrin2;
    std::string hrfn2;
    std::string tehin1;
    std::string tehfn1;
    std::string tehin2;
    std::string tehfn2;






};



#endif // MAINWINDOW_H
