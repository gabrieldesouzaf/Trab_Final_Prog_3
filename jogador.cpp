#include "jogador.h"
#include <QFile>
#include <QTextStream>
#include <iostream>
#include <cmath>
#include <fstream>



Jogador::Jogador()
{

}

//-------------------------------------------------------------------------------------------

std::map<int, Jogador> Jogador::leitura_csv(std::string arquivo){ //Função para ler arquivo

    std::map<int, Jogador> m;

    QFile file(arquivo.c_str());
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return m;

    QTextStream xin(&file);
    std::vector<QStringList> v;
    while (!xin.atEnd()) {
        auto line = xin.readLine();
        v.push_back(line.split(","));
    }
    file.close();

    for(auto i=1; i<v.size(); i++){ //Inserindo dados dentro de struct "estado":
        estado e;

        e.utc_date = v[i][3].toStdString();
        e.utc_time = v[i][4].toStdString();
        e.local_date = v[i][5].toStdString();
        e.local_time = v[i][6].toStdString();
        e.ms = v[i][7].toInt();
        e.latitude = v[i][8].toDouble();
        e.ns = v[i][9].toStdString();
        e.longitude = v[i][10].toDouble();
        e.ew = v[i][11].toStdString();
        e.altitude = v[i][12].toDouble();
        e.velocidade = v[i][13].toDouble();
        e.heading = v[i][14].toDouble();
        e.gx = v[i][15].toDouble();
        e.gy = v[i][16].toDouble();
        e.gz = v[i][16].toDouble();

        m[stoi(v[i][1].toStdString())]._estados.push_back(e);


    }

    return m;
}

