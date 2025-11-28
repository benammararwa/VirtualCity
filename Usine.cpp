#include<iostream>
#include "Usine.h"
#include "Batiments.h"
using namespace std;

Usine::Usine(int id,
             string nom,
             string type,
             Ville* v,
             double cEau,
             double cElectricite,
             double satisf,
             double ress,
             double p)
:Batiments(id, nom, type,v,cEau,cElectricite, satisf){
    productionRessources=ress;
    pollution=p;
}
double Usine::produireRessources(){
    return productionRessources;
}

double Usine::calculerPollution(){
    return pollution;
}

void Usine:: afficherDetails() const
{
    Batiments::afficherDetails();
    cout << "Production Ressources: " <<productionRessources<< endl;
    cout << "Pollution: " << pollution << endl;
}
