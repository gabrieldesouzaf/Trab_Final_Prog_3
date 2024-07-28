#ifndef VELOCIDADE_H
#define VELOCIDADE_H
#include "jogador.h"


class Velocidade
{

    std::map<int, Jogador> mj;
    int jog, tam;

public:
    Velocidade(std::map<int, Jogador> mi, int num);

    double velocidade_Maxima();

    int quantidade_Corrida_M_18();

    int quantidade_Corrida_M_20();
};

#endif // VELOCIDADE_H
