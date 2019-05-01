#include "joueur.h"

Joueur::Joueur()
{
	nom = "";
	points = 0;
}

Joueur::Joueur(string inNom)
{
	nom = inNom;
	points = 0;
}

Joueur::Joueur(const Joueur& inJoueur)
{
	nom = inJoueur.nom;
	points = inJoueur.points;
	lesCartesDuJoueur = inJoueur.lesCartesDuJoueur; //operator= surchargé dans la STL
}

string Joueur::getNom() const
{
	return nom;
}
int Joueur::getPoints() const
{
	return points;
}
