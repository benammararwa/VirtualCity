#ifndef BATIMENTS_H
#define BATIMENTS_H

#include <iostream>

using namespace std;
class Ville;
class Batiments {
public:
    int id;
    string nom;
    string type;
    //nom= (ex)"maison" +id
    //on ajoute un attribut ou il y'a proprietes du batiment, dont la connsommation et le satisfaction en dépend
    double consommationEau=3.2;
    double consommationElectricite=9;
    double effetSatisfaction=4;
    Ville* v;
public:
    Batiments(int id,string nom, string type, Ville* v);
    void afficherDetails();
    void calculerImpactRessources();
};
#endif // BATIMENTS_H
