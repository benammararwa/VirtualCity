#include<iostream>
#include "Maison.h"

Maison::Maison(int id,string nom,string  type, Ville* v,double consEau, double conElect,double effesatisf,int capacH,int habitA)
:Batiments(id,nom,type,v,consEau,conElect,effesatisf)
{
    capaciteHabitant=capacH;
    habitantActuel=habitA;
}
void  Maison::ajoutHabitant(int nb)
{
    if(habitantActuel+nb<=capaciteHabitant)
    {
        habitantActuel+=nb;
    }
    else
    {
        cout<<"le nombre totale des habitants depasse la capacite des etudiant ";
    }
}
void Maison :: retireHabitant(int nb)
{
    if (habitantActuel-nb>=0)
    {
        habitantActuel-=nb;
    }
    else
    {
        cout<<"nombre des habitants actuel insuffisant";
    }

}
void Maison :: afficherDetails() const
{
    Batiments::afficherDetails();
    cout << "Capacite Habitants : " << capaciteHabitant<< endl;
    cout << "Habitants Actuels : " << habitantActuel << endl;
}
int  Maison::getsc() const
{
    return capaciteHabitant;
}


int Maison::getsH() const
{
    return habitantActuel;
}
