#ifndef JOGADOR_H
#define JOGADOR_H
#include <map>
#include <vector>
#include <QFile>
#include <iostream>



class QStandardItemModel;

class Jogador
{


public:

    struct estado{
        std::string utc_date, utc_time, local_date, local_time, ns, ew, valid;
        int ms;
        double latitude,longitude, altitude, velocidade, heading, gx, gy, gz;
    };

    std::vector<estado> _estados;

    std::map<int, Jogador> mj;


    Jogador();


    static std::map<int, Jogador> leitura_csv(std::string);



};

#endif // JOGADOR_H
