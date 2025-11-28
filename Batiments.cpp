#include<iostream>
#include "ville.h"
#include "Batiments.h"
using namespace std;

Batiments::Batiments(){}


Batiments::Batiments(int id,string nom, string type, Ville* v, double cEau, double cElectricite, double satisf){
    this->id=id;
    this->nom=nom;
    this->type=type;
    this->v=v;
    consommationEau=cEau;
    consommationElectricite=cElectricite;
    effetSatisfaction=satisf;
}

void Batiments::afficherDetails() const
{
       cout<<"l'identifiant  de batiment est "<<id<<endl;
       cout<<"le nom   de batiment est "<<nom<<endl;
       cout<<"le type de batiment est "<<type<<endl;
       cout<<"le consommation de l'eau  "<<consommationEau<<endl;
       cout<<"le consommation de l'electricite  "<<consommationElectricite<<endl;
       cout<<"la satisfaction des habitants  "<<effetSatisfaction<<endl;
}

void Batiments::calculerImpactRessources(){
    v->eau-=consommationEau;
    v->electricite-=consommationElectricite;
}
