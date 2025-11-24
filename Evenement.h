#ifndef EVENEMENT_H
#define EVENEMENT_H
#include<iostream>
#include<string>
#include "ville.h"

class Simulation{};

class Evenement {
public:
    int id;
    string nom;
    string description;
    double impactEau;
    double impactElectricite;
    double impactSatisfaction;
public:
    Evenement(int i, string n, string ch, double eau, double elect, double satisf);
    void impactEvenement(Ville v);
};


#endif // EVENEMENT_H



/* simulation.declencherevent(randomId);
{recherche de randomId fl vecteur mtaa les events,
if mawjoud, nekhdhou l'event w n'affichiw message fih description de l'event w nfa3lou l'impact mte3ou (appel lel methode impactEvent()
else, n'affichiw pas d'event  */

