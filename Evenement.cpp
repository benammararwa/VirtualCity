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

void Evenement::impactEvenement(Ville v){
    v.eau+=impactEau;
    v.electricite+=impactElectricite;
    v.satisfaction+=impactSatisfaction;
}

