#ifndef TEMPO_H
#define TEMPO_H
#include <string>


class Tempo
{

    int hri1, mini1;
    int hrf1, minf1;
    int hri2, mini2;
    int hrf2, minf2;

    int ehi1, emi1;
    int ehf1, emf1;
    int ehi2, emi2;
    int ehf2, emf2;


public:

    Tempo(std::string hi1, std::string hf1, std::string hi2, std::string hf2, std::string ei1, std::string ef1, std::string ei2, std::string ef2);

    double tempo_1_Hr();

    double tempo_2_Hr();

    double tempo_1_Min();

    double tempo_2_Min();

    double tempo_Efetivo_1_Hr();

    double tempo_Efetivo_2_Hr();

    double tempo_Efetivo_1_Min();

    double tempo_Efetivo_2_Min();

};

#endif // TEMPO_H
