#include <iostream>
#include "ville.h"
#include "Batiments.h"
#include "Usine.h"
#include "Maison.h"

using namespace std;

int main()
{
    /*Ville v("Ma Ville",3080);
    Usine* u1 = new Usine(1, "Usine 1", "productive", &v,3.2,9,20, 30.2, 15.0);
    v.ajouterBatiment(u1);
    u1->afficherDetails();
    u1->calculerImpactRessources();
    cout<<v.eau<<" "<<v.electricite<<endl;;
    cout<<endl<<"AffichageMaison"<<endl;
    Maison* m1=new Maison(1,"Maison1", "Habitat",&v,10,10,20,5,0);
    m1->afficherDetails();
    cout<<endl<<"AffichageMaison après ajout"<<endl;
    m1->ajoutHabitant(2);
    m1->afficherDetails();*/


    /*Ville *v=new Ville("casablinca",12345);
    Batiments* batiments=new Batiments[4];
    batiments[0]=new Maison(1,"Maison 1","Habitat",v,20,26,20,8);
    batiments[1]=new Parc(2,"Parc 1","Service",&v,50,50,80,62,40);
    batiments[2]=new Usine(3,"Usine 1","Production",&v,14,26,-5,43,41);
    batiments[3]=new Batiments(,,,,,);
    batiments[4]=new Maison(,,,,,);
    cout<<"saisir le nombre d'habitants à ajouter pour chacun des maisons 0 et 4"<<endl;
    cin>>nb;
    batiments[4].ajouterHabitant(nb);
    batiments[0].retirerHabitant(nb);
    batiments[4].afficherDetails();
    batiments[0].afficherDetails();
    double effetbienetre=batiments[1].ameliorerbienEtre();
    cout<<"la satistisfaction liee de ce parc est egale à"<<effetbienetre;
    cout<<" le quantite de produit fabriquer par ce usine est "<<batiments[2].produireRessources();
    cout<<" la quantite de pollution degagé par ce usine est "<<batiments[2].calculateurPollution();
    v1.ajouterBatiment(batiments[]);
    v1.supprimerBatiment(int id);
    cout<<"la consommation totale de ce ville est"<<v1.calculerConsommationTotale();
    cout<<"la satisfaction des habitants de ce ville est"<<v1.calculerSatisfaction();
    Evenement evn1=new  Evenement(int i, string n, string ch, double eau, double elect, double satisf);
    evn1.impactEvenement(Ville &v1);
    Simulation s1=new simulation();
    s1.ajouterEvenement(const Evenement& evn1);
    s1.demarrerCycle(int nbEvenements);
    s1.afficherEtatVille() ;
    //ama nbevenement mafhimtouch ????*/
}
