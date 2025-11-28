#ifndef SIMULATION_H
#define SIMULATION_H

#include <vector>
#include <string>
#include "Ville.h"
#include "Evenement.h"

using namespace std;

class Simulation {
public:
    int cycleActuel;
    Ville ville;
    vector<Evenement> evnt;
public:
    Simulation();
    void ajouterEvenement(const Evenement& e);
    void demarrerCycle(int nbEvenements);
    void TerminerCycle();
    void afficherEtatVille() const;
};

#endif // SIMULATION_H
