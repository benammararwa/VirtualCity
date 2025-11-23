#include <iostream>
#include "ville.h"
#include "Batiments.h"
#include "Usine.h"

using namespace std;

int main()
{
    Ville v("Ma Ville",3080);
    Usine* u1 = new Usine(1, "Usine 1", "productive", &v, 30.2, 15.0);
    v.ajouterBatiment(u1);
}
