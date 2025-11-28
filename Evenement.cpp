#include <iostream>
#include <string>
#include "Evenement.h"
#include "ville.h"

Evenement::Evenement(int i, string n, string ch, double eau, double elect, double satisf){
    id=i;
    nom=n;
    description=n+": "+ch;
    impactEau=eau;
    impactElectricite=elect;
    impactSatisfaction=satisf;
}

void Evenement::impactEvenement(Ville& v){
    v.eau+=impactEau;
    v.electricite+=impactElectricite;
    if(v.eau<0) v.eau=0;
    if(v.electricite<0) v.electricite=0;
    v.satisfaction+=impactSatisfaction;
}


