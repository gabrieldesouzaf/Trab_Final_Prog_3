#include "tempo.h"

Tempo::Tempo(std::string hi1, std::string hf1, std::string hi2, std::string hf2, std::string ei1, std::string ef1, std::string ei2, std::string ef2)
{

    //Separando horas e minutos das string do primeiro e segundo tempo:
    hri1 = stoi(hi1.substr(0,2));
    mini1 = stoi(hi1.substr(3,2));


    hrf1 = stoi(hf1.substr(0,2));
    minf1 = stoi(hf1.substr(3,2));


    hri2 = stoi(hi2.substr(0,2));
    mini2 = stoi(hi2.substr(3,2));


    hrf2 = stoi(hf2.substr(0,2));
    minf2 = stoi(hf2.substr(3,2));

    //------------------------------

    //Separando horas e minutos das string do primeiro e segundo tempo efetivo do jogador:
    ehi1 = stoi(ei1.substr(0,2));
    emi1 = stoi(ei1.substr(3,2));


    ehf1 = stoi(ef1.substr(0,2));
    emf1 = stoi(ef1.substr(3,2));


    ehi2 = stoi(ei2.substr(0,2));
    emi2 = stoi(ei2.substr(3,2));


    ehf2 = stoi(ef2.substr(0,2));
    emf2 = stoi(ef2.substr(3,2));
}



double Tempo::tempo_1_Hr(){

    int hrt = 0;
    int H = 0;

    if(hrf1 < hri1){                    //Total de horas primeiro tempo
        hrt = ((hrf1 - hri1) + 24.0);
    }
    else{
        hrt = (hrf1 - hri1);
    }

    if(mini1 > minf2){
        H = hrt -1;
    }
    else{
        H = hrt;
    }

    return H;

}


double Tempo::tempo_2_Hr(){

    int hrt = 0;
    int H = 0;

    if(hrf2 < hri2){                    //Total de horas segundo tempo
        hrt = ((hrf2 - hri2) + 24.0);
    }
    else{
        hrt = (hrf2 - hri2);
    }

    if(mini2 > minf2){
        H = hrt - 1;
    }
    else{
        H = hrt;
    }

    return H;

}

double Tempo::tempo_1_Min(){

    int tmin=0;

    if(minf1 < mini1){                  //Total de minutos primeiro tempo
        tmin = ((minf1 - mini1) + 60);
    }
    else{
        tmin = (minf1 - mini1);
    }

    return tmin;
}

double Tempo::tempo_2_Min(){

    int tmin=0;

    if(minf2 < mini2){                  //Total de minutos segundo tempo
        tmin = ((minf2 - mini2) + 60);
    }
    else{
        tmin = (minf2 - mini2);
    }

    return tmin;

}

double Tempo::tempo_Efetivo_1_Hr(){

    int hrt = 0;
    int H = 0;

    if(ehf1 < ehi1){                    //Total de horas efetivas do jogador no primeiro tempo
        hrt = ((ehf1 - ehi1) + 24.0);
    }
    else{
        hrt = (ehf1 - ehi1);
    }

    if(emi1 > emf1){
        H = hrt - 1;
    }
    else{
        H = hrt;
    }

    return H;

}

double Tempo::tempo_Efetivo_2_Hr(){

    int hrt = 0;
    int H = 0;

    if(ehf2 < ehi2){                    //Total de horas efetivas do jogador no segundo tempo
        hrt = ((ehf2 - ehi2) + 24.0);
    }
    else{
        hrt = (ehf2 - ehi2);
    }

    if(emi2 > emf2){
        H = hrt - 1;
    }
    else{
        H = hrt;
    }

    return H;

}

double Tempo::tempo_Efetivo_1_Min(){

    int tmin=0;

    if(emf1 < emi1){                  //Total de minutos efetivos do jogador primeiro tempo
        tmin = ((emf1 - emi1) + 60);
    }
    else{
        tmin = (emf1 - emi1);
    }

    return tmin;
}

double Tempo::tempo_Efetivo_2_Min(){

    int tmin=0;

    if(emf2 < emi2){                  //Total de minutos efetivos do jogador segundo tempo
        tmin = ((emf2 - emi2) + 60);
    }
    else{
        tmin = (emf2 - emi2);
    }

    return tmin;


}

