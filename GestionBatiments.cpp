#include"ville.h"
#include "GestionBatiments.h"
#include"Maison.h"
#include"Usine.h"
#include"Parc.h"
#include"Batiments.h"

int GestionBatiments::rechercheId(int id, Ville& v){
    for(int i=0;i<v.bat.size();i++){
        if (v.bat[i]->id==id){
            return i;
        }
    }
    return -1;
}

void GestionBatiments::afficherListeBatiments(int i,Ville& v){
    switch (i){
    case 2:
        //Si c'est une maison
        for(int i=0;i<v.bat.size();i++){
            Batiments* b=v.bat[i]; //b est un pointeur qui pointe sur le batiment
            Maison *m=dynamic_cast<Maison*>(b); //Conversion du pointeur b en pointeur vers Maisonn
            //Si c'est possible (b est une maison) --> m!=nullptr, sinon (b n'est pas une maison) --> m==nullptr
            if(m!=nullptr){
                cout<<"id: "<<m->id<<" nom: "<<m->nom;
            }

        }
        break;
    case 3:
        //Si c'est une usine
        for(int i=0;i<v.bat.size();i++){
            Batiments* b=v.bat[i];
            Usine *u=dynamic_cast<Usine*>(b);
            if(u!=nullptr){
                cout<<"id: "<<u->id<<" nom: "<<u->nom;
            }
        }
        break;
    case 4:
        //Si c'est un parc
        for(int i=0;i<v.bat.size();i++){
            Batiments* b=v.bat[i];
            Parc *p=dynamic_cast<Parc*>(b);
            if(p!=nullptr){
                cout<<"id: "<<p->id<<" nom: "<<p->nom;
            }
        }
        break;
    }
}

void GestionBatiments::ajoutBat(int i,Ville& v){}

void GestionBatiments::suppressionBat(Ville& v){}

void GestionBatiments::afficheDetailsBat(Ville& v){}

void GestionBatiments::modifBat(int i,Ville& v){}
