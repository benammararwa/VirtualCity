#ifndef PARC_H
#define PARC_H

#include"Batiments.h"
#include<iostream>

using namespace std;

class Parc: public Batiments{
public:
    double surface;
    double effetBienEtre;
public:
    Parc(int id,string nom, string type, Ville* v,double cEau, double cElectricite, double satisf ,double s, double e);
    double ameliorerBienEtre();
    void afficherDetails() const override;
};

#endif // PARC_H
