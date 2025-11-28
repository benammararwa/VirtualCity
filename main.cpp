#include <iostream>
#include "ville.h"
#include "Batiments.h"
#include "Usine.h"
#include "Maison.h"
#include"Simulation.h"
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
        case 0: //afficher Menu Principal
            afficherMenuPrincipal(s);
            break;
        case 1: //Afficher l'état de la ville
            s.afficherEtatVille();
            break;
        case 2: //
            afficherMenuBatiments("maison","2");
            break;
        case 3:
            afficherMenuBatiments("usine","3");
            break;
        case 4:
            afficherMenuBatiments("parc","4");
            break;
        case 20:
        case 30:
        case 40:
            //AfficherListeBatiments(choixMenuPrincipal/10);
            /*{
                for(int i;i<v.bat.size();i++){
                    if(v.bat[i].type=="")
                }
            }*/
            break;
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
9- Ajouter batiment et supprimer batiment


Ajouter des commentaires


Modifications secondaires:
1- Ajouter des services / batiments
2- Utiliser tous ce qu'on a appris dans le cours


Bonus:
1- Ajouter des aides (la version avec qt)


*/
