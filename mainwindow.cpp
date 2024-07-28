#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "jogador.h"
#include "distancia.h"
#include "velocidade.h"
#include "tempo.h"
#include "qcustomplot.h"
#include <iostream>
#include <QStandardItemModel>
#include <QFileDialog>
#include <QTextStream>
#include <QFile>


MainWindow::MainWindow(QWidget *parent)
   : QMainWindow(parent)
   , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Estatistica Jogadores");  // Titulo janela


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAbrir_triggered()  //Função executada ao abrir o arqivo
{
    auto filename = QFileDialog::getOpenFileName(this,      //Atribui nome do arquivo a variavel "filename"
         "Abrir",QDir::rootPath(), "CSV File(*.csv)");
    if (filename.isEmpty()){
        return;
    }

    auto m = Jogador::leitura_csv(filename.toStdString());
    _m = m;



    int qntj = m.size();      //Varialvel armazena numero de jogadores
    for(int i=1; i<=qntj; i++){
        ui->comboBox_Jogador->addItem (QString::number(i));    //comboBox para selecionar jogador
    }

    cond = 1;

}


//------------------------------------------------------------------------------------------------------------------------

void MainWindow::on_dados_clicked()  //Função chamada pelo botão dados
{
    numj = ui->comboBox_Jogador->currentText().toInt(); // Armazena o valor do jogador selecionado
    tam = _m[numj]._estados.size();

    hrin1="00:00";
    hrfn1="00:00";
    hrin2="00:00";
    hrfn2="00:00";

    tehin1="00:00";
    tehfn1="00:00";
    tehin2="00:00";
    tehfn2="00:00";

    //Verificando se o editor de texto possui algo escrito:
    bool bin1 = ui->textEdit->toPlainText().isEmpty();
    bool bin2 = ui->textEdit_2->toPlainText().isEmpty();
    bool bin3 = ui->textEdit_3->toPlainText().isEmpty();
    bool bin4 = ui->textEdit_4->toPlainText().isEmpty();

    bool bin5 = ui->textEdit_5->toPlainText().isEmpty();
    bool bin6 = ui->textEdit_6->toPlainText().isEmpty();
    bool bin7 = ui->textEdit_7->toPlainText().isEmpty();
    bool bin8 = ui->textEdit_8->toPlainText().isEmpty();

    //Condição para executar apenas se o editor de texto, que recebe o inicio e final da partida, tiver algo escrito:
    if(bin1 == false && bin2 == false && bin3 == false && bin4 == false){
        hrin1 = ui->textEdit->toPlainText().toStdString();
        hrfn1 = ui->textEdit_2->toPlainText().toStdString();
        hrin2 = ui->textEdit_3->toPlainText().toStdString();
        hrfn2 = ui->textEdit_4->toPlainText().toStdString();
    }

    //Condição para executar apenas se o editor de texto, que recebe a entrada e saida do jogador, tiver algo escrito:
    if(bin5 == false && bin6 == false && bin7 == false && bin8 == false){
        tehin1 = ui->textEdit_5->toPlainText().toStdString();
        tehfn1 = ui->textEdit_6->toPlainText().toStdString();
        tehin2 = ui->textEdit_7->toPlainText().toStdString();
        tehfn2 = ui->textEdit_8->toPlainText().toStdString();
    }

    //Criando objeto da classe jogador:
    Distancia d( _m, numj);
    Tempo t(hrin1, hrfn1, hrin2, hrfn2, tehin1, tehfn1, tehin2, tehfn2);
    Velocidade v( _m, numj);

    //----------------------------------------------------------------

    //Chamando funções da classe Jogador:

    int thr1 = t.tempo_1_Hr();

    int thr2 = t.tempo_2_Hr();

    int tmin1 = t.tempo_1_Min();

    int tmin2 = t.tempo_2_Min();

    int tehr1 = t.tempo_Efetivo_1_Hr();

    int tehr2 = t.tempo_Efetivo_2_Hr();

    int temin1 = t.tempo_Efetivo_1_Min();

    int temin2 = t.tempo_Efetivo_2_Min();

    int vel18 = v.quantidade_Corrida_M_18();

    int vel20 = v.quantidade_Corrida_M_20();

    double dt = d.distancia_Total();

    double vm = v.velocidade_Maxima();


    //Funções para calcular o total de horas e minutos:
    int Th=0;
    int Tmin=0;
    int Teh=0;
    int Temin=0;

    if((tmin1 + tmin2) >= 60){
        Th = thr1 + thr2 + 1;
        Tmin = tmin1 + tmin2 - 60;
    }
    else{
        Th = thr1 + thr2;
        Tmin = tmin1 + tmin2;
    }

    if((temin1 + temin2) >= 60){
        Teh = tehr1 + tehr2 + 1;
        Temin = temin1 + temin2 - 60;
    }
    else{
        Teh = tehr1 + tehr2;
        Temin = temin1 + temin2;
    }


    //--------------------------------------------

    //Condição para chamar função apenas se botão "Dados" for apertado:
    if(cond == 1){
        MainWindow::makePlot3();
        MainWindow::makePlot();
    }

    //--------------------------------------------

    //Inserindo dados estatisticos em string:
    std::string str = "Velocidade maior que 18(k/h): " + std::to_string(vel18) + "\n\n"
                      "Velocidade maior que 20(k/h): " + std::to_string(vel20) + "\n\n"
                      "Distancia total percorrida: " + std::to_string(dt) + "m" "\n\n"
                      "Velocidade maxima atingida: " + std::to_string(vm) + "km/h || " + std::to_string(vm/3.6) + "m/s" "\n\n"
                      "Tempo 1ª parte(H:M): " + std::to_string(thr1) + ":" + std::to_string(tmin1) + "\n\n"
                      "Tempo 2ª parte(H:M): " + std::to_string(thr2) + ":" + std::to_string(tmin2) + "\n\n"
                      "Tempo total de jogo(H:M): " + std::to_string(Th) + ":" + std::to_string(Tmin) + "\n\n"
                      "Tempo efetivo 1ª parte(H:M): " + std::to_string(tehr1) + ":" + std::to_string(temin1) + "\n\n"
                      "Tempo efetivo 2ª parte(H:M): " + std::to_string(tehr2) + ":" + std::to_string(temin2) + "\n\n"
                      "Tempo efetivo jogo(H:M): " + std::to_string(Teh) + ":" + std::to_string(Temin);



    //Imprimindo string com dados no "textBrowser":
    ui->textBrowser->setText(QString::fromStdString(str));
}

//Graficos:

void MainWindow::makePlot()
{

    numj = ui->comboBox_Jogador->currentText().toInt(); // Armazena o valor do jogador selecionado

    ui->customPlot->clearPlottables();
    ui->customPlot->clearItems();
    ui->customPlot->clearGraphs();
    ui->customPlot->clearFocus();
    ui->customPlot->clearMask();

    // create empty curve objects:
    QCPCurve *fermatSpiral1 = new QCPCurve(ui->customPlot->xAxis, ui->customPlot->yAxis);

    // generate the curve data points:
    QVector<QCPCurveData> dataSpiral1(tam);

        for(int i=0; i<tam; i++){

            dataSpiral1[i] = QCPCurveData(i, _m[numj]._estados[i].latitude, _m[numj]._estados[i].longitude);
        }



    // pass the data to the curves; we know t (i in loop above) is ascending, so set alreadySorted=true (saves an extra internal sort):
    fermatSpiral1->data()->set(dataSpiral1, true);

    // color the curves:
    fermatSpiral1->setPen(QPen(Qt::blue));
    // set some basic ui->customPlot config:
    ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
    ui->customPlot->axisRect()->setupFullAxesBox();
    ui->customPlot->rescaleAxes();

    ui->customPlot->replot();

}

//----------------------------------------------------------------------------------------------------------------------------------------------------



void MainWindow::makePlot3()
{
    ui->customPlot3->clearPlottables();
    ui->customPlot3->clearItems();
    ui->customPlot3->clearGraphs();
    ui->customPlot3->clearFocus();
    ui->customPlot3->clearMask();

    // add two new graphs and set their look:
    ui->customPlot3->addGraph();
    ui->customPlot3->graph(0)->setPen(QPen(Qt::blue)); // line color blue for first graph
    ui->customPlot3->graph(0)->setBrush(QBrush(QColor(0, 0, 255, 20))); // first graph will be filled with translucent blue
    ui->customPlot3->addGraph();
    ui->customPlot3->graph(1)->setPen(QPen(Qt::red)); // line color red for second graph
    // generate some points of data (y0 for first, y1 for second graph):
    QVector<double> x(251), y(251);
    for (int i=0; i<251; ++i)
    {
      x[i] = i;
      y[i] = _m[numj]._estados[i].velocidade;
    }
    // configure right and top axis to show ticks but no labels:
    // (see QCPAxisRect::setupFullAxesBox for a quicker method to do this)
    ui->customPlot3->xAxis2->setVisible(true);
    ui->customPlot3->xAxis2->setTickLabels(false);
    ui->customPlot3->yAxis2->setVisible(true);
    ui->customPlot3->yAxis2->setTickLabels(false);
    // make left and bottom axes always transfer their ranges to right and top axes:
    connect(ui->customPlot3->xAxis, SIGNAL(rangeChanged(QCPRange)), ui->customPlot3->xAxis2, SLOT(setRange(QCPRange)));
    connect(ui->customPlot3->yAxis, SIGNAL(rangeChanged(QCPRange)), ui->customPlot3->yAxis2, SLOT(setRange(QCPRange)));
    // pass data points to graphs:
    ui->customPlot3->graph(0)->setData(x, y);
    // let the ranges scale themselves so graph 0 fits perfectly in the visible area:
    ui->customPlot3->graph(0)->rescaleAxes();
    // same thing for graph 1, but only enlarge ranges (in case graph 1 is smaller than graph 0):
    ui->customPlot3->graph(1)->rescaleAxes(true);
    // Note: we could have also just called ui->customPlot3->rescaleAxes(); instead
    // Allow user to drag axis ranges with mouse, zoom with mouse wheel and select graphs by clicking:
    ui->customPlot3->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);

    ui->customPlot3->replot();
}

