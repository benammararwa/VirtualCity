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
    v.push_back(b);
}

void Ville::supprimerBatiment(int id){
    for (int i = 0; i < v.size(); i++) {
    if (v[i]->id == id) {
        v.erase(v.begin()+i);
        break;
    }
}
}

double Ville::calculerConsommationTotale(){
    double x=0;
    for(int i=0;i<v.size();i++){
        x+=v[i]->consommationEau+v[i]->consommationElectricite; //peut être on sépare l'eau et l'electricite plus tard
    }
    return x;
}

double Ville::calculerSatisfaction(){
    double x=0;
    for(int i=0;i<v.size();i++){
        x+=v[i]->effetSatisfaction;
    }
    return satisfaction+x;
}
