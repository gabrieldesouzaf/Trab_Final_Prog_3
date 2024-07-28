#include "distancia.h"
#include "cmath"

Distancia::Distancia(std::map<int, Jogador> mi, int num)
{
    // Passando parametros para membros de dados da classe Jogador:
    jog = num;
    mj = mi;
}

double Distancia::distancia_Total(){

    int tam = mj[jog]._estados.size();
    double distancia_T = 0;
    double d2r = 0.017453292519943295769236;
    double r = 6371.0;

    for(int i=1; i<tam; i++){
        double dlat = (mj[jog]._estados[i].latitude - mj[jog]._estados[i-1].latitude) * d2r;
        double dlon = (mj[jog]._estados[i].longitude - mj[jog]._estados[i-1].longitude) * d2r;
        double a = sin(dlat / 2.0) * sin(dlat / 2.0)
                    + cos(d2r * (mj[jog]._estados[i-1].latitude))
                    * cos(d2r * (mj[jog]._estados[i-1].latitude))
                    * sin(dlon / 2.0) * sin(dlon / 2.0);
        double c = 2.0 * atan2(sqrt(a), sqrt(1.0 - a));
        distancia_T += (r * c * 1000.0);

    }

    return distancia_T;
}
