#include<iostream>
#include "Parc.h"
#include "Batiments.h"

using namespace std;


Parc::Parc(int id,string nom, string type, Ville* v,double s, double e):Batiments(id, nom, type,v){
    surface=s;
    effetBienEtre=e;
}

double Parc::ameliorerBienEtre(){
    return effetBienEtre;
}
