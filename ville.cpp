#include<iostream>
#include<vector>
#include "Batiments.h"
#include "ville.h"

using namespace std;

Ville::Ville(string n, int id){
    nom=n;
    idVille=id;
}

void Ville::ajouterBatiment(Batiments* b){
    bat.push_back(b);
}

void Ville::supprimerBatiment(int id){
    for (int i = 0; i < bat.size(); i++) {
    if (bat[i]->id == id) {
        bat.erase(bat.begin()+i);
        break;
    }
}
}

double Ville::calculerConsommationTotale(){
    double x=0;
    for(int i=0;i<bat.size();i++){
        x+=bat[i]->consommationEau+bat[i]->consommationElectricite; //peut être on sépare l'eau et l'electricite plus tard
    }
    return x;
}

double Ville::calculerSatisfaction(){
    double x=0;
    for(int i=0;i<bat.size();i++){
        x+=bat[i]->effetSatisfaction;
    }
    return satisfaction+x;
}
