#ifndef MAISON_H
#define MAISON_H
#include<iostream>
#include"Batiments.h"


class Maison : public Batiments {
    public:
        int capaciteHabitant;
        int habitantActuel;

    public :
        Maison(int id,string nom,string  type, Ville* v,double consEau, double conElect,double effesatisf,int capacH);
        void ajoutHabitant(int x);
        void retireHabitant(int x);
        void afficherDetails() const override;
        int getsc() const;
        int getsH() const;
};

#endif // MAISON_H
