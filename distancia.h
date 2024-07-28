#ifndef DISTANCIA_H
#define DISTANCIA_H
#include "jogador.h"


class Distancia
{
    std::map<int, Jogador> mj;
    int jog;

public:
    Distancia(std::map<int, Jogador> mi, int num);

    double distancia_Total();
};

#endif // DISTANCIA_H
