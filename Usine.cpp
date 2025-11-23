#include<iostream>
#include "Usine.h"
#include "Batiments.h"
using namespace std;

Usine::Usine(int id,string nom, string type, Ville* v,double ress, double p):Batiments(id, nom, type,v){
    productionRessources=ress;
    pollution=p;
}
double Usine::produireRessources(){
    return productionRessources;
}

double Usine::calculerPollution(){
    return pollution;
}
