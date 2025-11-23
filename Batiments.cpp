#include<iostream>
#include "ville.h"
#include "Batiments.h"
using namespace std;


Batiments::Batiments(int id,string nom, string type, Ville* v){
    this->id=id;
    this->nom=nom;
    this->type=type;
    this->v=v;
}

void Batiments::calculerImpactRessources(){//double ou void??????????
    v->eau-=consommationEau;
    v->electricite-=consommationElectricite;
}
