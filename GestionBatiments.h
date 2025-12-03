#ifndef GESTIONBATIMENTS_H
#define GESTIONBATIMENTS_H
#include<iostream>
#include"ville.h"

using namespace std;
class GestionBatiments {
public:
    int rechercheId(int id, Ville& v);

    static void afficherListeBatiments(int i, Ville& v);
    static void ajoutBat(int i,Ville& v);
    static void suppressionBat(Ville& v);
    static void afficheDetailsBat(Ville& v);
    static void modifBat(int i,Ville& v); //i est choix%10 (nom/eau/electr)
    static void modifMaison(int i,Ville &v);
    static void modifUsine(int i,Ville &v);
    static void modifParc(int i,Ville &v);
};

#endif // GESTIONBATIMENTS_H
