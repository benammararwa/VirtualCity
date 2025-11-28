#include"Simulation.h"
#include<iostream>
#include<random>
#include<chrono>
#include"ville.h"

Simulation::Simulation():cycleActuel(0),ville("MaVille",1) //inistialise el ville b nom maVille w id 1 w ya3ti lel cycleactuelle 0
{ //y3abbi des evenements par defaut(id,nom,descr,impacteau,impactelec w impactsatis
    evnt.emplace_back(1,"Pigeons géants","Satisfaction chute",-0.0,-0.0,-15.0);
    evnt.emplace_back(2, "Panne électrique", "Consommation électrique augmente", 0.0, -50.0, 0.0);
    evnt.emplace_back(3, "Inondation", "Eau et satisfaction impactées", -30.0, 0.0, -10.0);
}


void Simulation::ajouterEvenement(const Evenement& e)
{
    evnt.push_back(e);
}

void Simulation::demarrerCycle(int nbEvenements)
{
    ++cycleActuel;
    cout<<"----Cycle "<<cycleActuel<<"------\n";
    if(evnt.empty())
    {
        cout<<"Aucun évenement jusqu'a maintenant"<<endl;
        return;
    }

    cout<<"Evenements déclenchés : "<<endl;
    for(int i=0;i<nbEvenements;i++)
    {
        int idx=rand()%evnt.size();
        Evenement& e=evnt[idx];
        cout<<"-"<<e.nom<<" : "<<e.description<<endl;
        e.impactEvenement(ville);
    }
    afficherEtatVille();
    cout<<"-----------------"<<endl;
}

void Simulation::afficherEtatVille()const {/*afficher les ressources*/};
