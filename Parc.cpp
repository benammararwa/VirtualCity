#include<iostream>
#include "Parc.h"
#include "Batiments.h"

using namespace std;


Parc::Parc(int id,
            string nom,
            string type,
            Ville* v,
            double cEau,
            double cElectricite,
            double satisf,
            double s,
            double e)
:Batiments(id, nom, type, v, cEau,cElectricite, satisf){
    surface=s;
    effetBienEtre=e;
}

double Parc::ameliorerBienEtre(){
    return effetBienEtre;//là la satisfaction change
}

void Parc:: afficherDetails() const
{
    Batiments::afficherDetails();
    cout << "Surface de parc: " <<surface<< endl;
    cout << "Effet bien être: " <<effetBienEtre<< endl;
}
