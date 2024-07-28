#include "velocidade.h"

Velocidade::Velocidade(std::map<int, Jogador> mi, int num)
{
    // Passando parametros para membros de dados da classe Jogador:
    jog = num;
    mj = mi;
    tam = mj[jog]._estados.size();
}

double Velocidade::velocidade_Maxima(){

    double anterior = 0;

    for(int i=0; i<mj[jog]._estados.size(); i++){
        if(mj[jog]._estados[i].velocidade > anterior){
            anterior = mj[jog]._estados[i].velocidade;
        }
    }

    return anterior;

}

int Velocidade::quantidade_Corrida_M_18(){

    int quantidade=0;
    double anterior = 0;

    for(int i=0; i<mj[jog]._estados.size(); i++){
        if(anterior > 18.0 && mj[jog]._estados[i].velocidade <= 18){
            quantidade++;
        }
        anterior = mj[jog]._estados[i].velocidade;
    }

    return quantidade;

}

int Velocidade::quantidade_Corrida_M_20(){

    int quantidade=0;
    double anterior = 0;

    for(int i=0; i<mj[jog]._estados.size(); i++){
        if(anterior > 20.0 && mj[jog]._estados[i].velocidade <= 20){
            quantidade++;
        }
        anterior = mj[jog]._estados[i].velocidade;
    }

    return quantidade;

}
