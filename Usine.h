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
    Usine(int id,string nom, string type, Ville* v,double cEau, double cElectricite, double satisf,double ress, double p);
    double produireRessources();
    double calculerPollution();
    void afficherDetails() const override;
};

#endif // USINE_H


