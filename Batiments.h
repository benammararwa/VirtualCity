#ifndef BATIMENTS_H
#define BATIMENTS_H
#include<string>
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
    double consommationEau;
    double consommationElectricite;
    double effetSatisfaction;
    Ville* v;
public:
    Batiments(int id,string nom, string type, Ville* v, double cEau, double cElectricite, double satisf);
    virtual void afficherDetails () const;
    void calculerImpactRessources();
};
#endif // BATIMENTS_H
