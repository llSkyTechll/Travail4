#include "Donnees.h"

Donnees::Donnees()
{
	InitialiserJoueurs();
}

void Donnees::InitialiserJoueurs()
{
	Joueur joueur1("Arthur");
	lesJoueurs.push_back(joueur1);
	Joueur joueur2("Fred");
	lesJoueurs.push_back(joueur2);
	Joueur joueur3("Délima");
	lesJoueurs.push_back(joueur3);
	Joueur joueur4("Bertha");
	lesJoueurs.push_back(joueur4);
}
