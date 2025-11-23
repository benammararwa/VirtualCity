#ifndef USINE_H
#define USINE_H
#include "Batiments.h"
#include<iostream>
using namespace std;
class Usine: public Batiments {
private:
    double productionRessources;
    double pollution;
public:
    Usine(int id,string nom, string type, Ville* v,double ress, double p);
    double produireRessources();
    double calculerPollution();
};

#endif // USINE_H


