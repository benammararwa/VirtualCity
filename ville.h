#ifndef VILLE_H
#define VILLE_H
#include "Batiments.h"
#include <iostream>
#include<vector>

using namespace std;

class Ville {
public:
    //fixer l'initialisation des ressouces plus tard + les constructeurs
    int idVille;
    string nom;
    double budget=100;
    long population=30; //population grande et capacité des maisons faible= habitants insatisfaits
    double satisfaction=0.2;
    double eau=15;
    double electricite=23;
    vector<Batiments*> v;
public:
    Ville(string n, int id);
    void ajouterBatiment(Batiments* b);
    void supprimerBatiment(int id);
    double calculerConsommationTotale();
    double calculerSatisfaction();
};
#endif // VILLE_H
