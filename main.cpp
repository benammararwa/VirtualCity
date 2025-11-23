#include <iostream>
#include "ville.h"
#include "Batiments.h"
#include "Usine.h"
#include "Maison.h"

using namespace std;

int main()
{
    Ville v("Ma Ville",3080);
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
    m1->afficherDetails();
}
