#include <iostream>
#include "ville.h"
#include "Batiments.h"
#include "Usine.h"
#include "Maison.h"
#include"Simulation.h"
#include "GestionBatiments.h"
#include"Parc.h"
#include<cstdlib> //pour rand()
#include <ctime> //pour ne pas répéter la même valeur aléatoire à chaque foie on lan ce le programme

using namespace std;

//---------------------------------------FONCTIONS DE MENU

//********MENU PRINCIPAL********
void afficherMenuPrincipal(Simulation s){
        cout<<"Cycle Actuel est: "<<s.cycleActuel<<endl
        <<"1111: Démarrer cycle suivant"<<endl
        <<"1000: Terminer le cycle"<<endl
        <<endl
        <<"0: Retour au Menu Principal"<<endl
        <<"1: Afficher état de la vile"<<endl
        <<"2: Gérer les maisons"<<endl
        <<"3: Gérer les usines"<<endl
        <<"4: Gérer les parcs"<<endl
        <<"-1: Eteindre le programme"<<endl;
}

//********MENUS DES BATIMENTS********
void menuBatim(char* i){
    switch (*i){
    case '2':
        cout<<"27: Modifier la capacite des habitants"<<endl
        <<"28: Ajouter habitant"<<endl
        <<"29: Retirer habitant"<<endl;
        break;
    case '3':
        cout<<"37: Modifier production ressources"<<endl
        <<"38: Modifier pollution"<<endl;
        break;
    case '4':
        cout<<"47: Modifier surface"<<endl
        <<"48: Modifier effet bien être"<<endl;
        break;
    }
}
void afficherMenuBatiments(string batiment, char* i){
        cout<<"0: Retour au Menu Principal"<<endl
        <<i<<"0: Afficher la liste des "<<batiment<<"s"<<endl
        <<i<<"1: Ajouter "<<batiment<<endl
        <<i<<"2: Supprimer "<<batiment<<endl
        <<i<<"3: Afficher details"<<endl
        <<i<<"4: Modifier nom"<<endl
        <<i<<"5: Modifier consommation eau"<<endl
        <<i<<"6: Modifier consommation electricite"<<endl;
        menuBatim(i);
        cout<<"-1: Eteindre le programme"<<endl;
}



//---------------------------------------PROGRAMME PRINCIPALE
int main()
{
    //PARTIE DECLARATION
    int choixMenuPrincipal;
    int etatProgramme=1; //pour arreter le boucle et le programme
    Simulation s;
    Ville& v = s.ville;

    srand(time(nullptr)); //initialisation du générateur aléatoire

    //AJOUT DES BATIMENTS
    Maison* m=new Maison(1,"MAISON 1","Habitat",&v,10,10,10,10);
    v.ajouterBatiment(m);

    cout<<"Taille du bat: "<<v.bat.size()<<endl;







    afficherMenuPrincipal(s);



    while(etatProgramme==1){
        cin>>choixMenuPrincipal;
        switch (choixMenuPrincipal){
        case 1111:
            {
                int x=rand()%3;
                s.demarrerCycle(x);
            }
            break;
        case 1000:
            s.TerminerCycle();
            break;

        //--------Afficher Menu Principal
        case 0:
            afficherMenuPrincipal(s);
            break;

        //--------Afficher l'état de la ville
        case 1:
            s.afficherEtatVille();
            break;

        //--------Afficher Menu Maisons
        case 2:
            afficherMenuBatiments("maison","2");
            break;

        //--------Afficher Menu Usines
        case 3:
            afficherMenuBatiments("usine","3");
            break;

        //--------Afficher Menu Parcs
        case 4:
            afficherMenuBatiments("parc","4");
            break;

        //--------Afficher Liste de Maisons/Usines/Parcs
        case 20:
        case 30:
        case 40:
            GestionBatiments::afficherListeBatiments(choixMenuPrincipal/10,v);
            break;

        //--------Ajouter Maison/Usine/Parc
        case 21:
        case 31:
        case 41:
            GestionBatiments::ajoutBat(choixMenuPrincipal/10,v);
            break;

        //--------Supprimer Maison/Usine/Parc
        case 22:
        case 32:
        case 42:
            GestionBatiments::suppressionBat(v);
            break;

        //--------Afficher les détails de Maison/Usine/Parc
        case 23:
        case 33:
        case 43:
            GestionBatiments::afficheDetailsBat(v); //POLYMORPHISME
            break;

        //
        case 24:
        case 25:
        case 26:
        case 34:
        case 35:
        case 36:
        case 44:
        case 45:
        case 46:
            GestionBatiments::modifBat(choixMenuPrincipal%10,v); //POLYMPORPHISME
            break;
        //
        case -1:
            etatProgramme=0;
            break;
        default:
            cout<<"Saisir un entier du Menu!!"<<endl;
        }
    }




}




/*
Modifications obligatoires:
1- ***
2- Mettre les attributs de chaque classe en privés et ajouter des getters et setters, puis modifier le programme comme il faut
3- Terminer la méthode afficherEtatVille()
4- Modifier la méthode demarrerCycle pour ajouter la méthode declencherEvenement comme il est demandé dans l'énnoncé
5- Ajouter BienEtre totale et Pollution totale dans l'affichage de l'état de la ville
6- Séparer entre les usines qui produisent l'eau et les usines qui produisent de l'électricité
7-  ✓✓✓
8- Ajouter des ressources pour le budget


Ajouter des commentaires


Modifications secondaires:
1- Ajouter des services / batiments
2- Utiliser tous ce qu'on a appris dans le cours


Bonus:
1- Ajouter des aides (la version avec qt)


*/
