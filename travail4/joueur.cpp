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
vector<Carte> Joueur::getLesCartesDuJoueur() const
{
	return lesCartesDuJoueur;
}

void Joueur::assignerCarte(Carte inCarte)
{
	lesCartesDuJoueur.push_back(inCarte);

void Joueur::assignerCarte()
{


}
//bool Joueur::operator==(const Joueur &inJoueur)
//{
//
//}
//bool Joueur ::operator<(const Joueur &inJoueur)
//{
//
//}
//Joueur& Joueur::operator=(const Joueur &inJoueur)
//{
//	int cpt = 0;
//	while (cpt<lesCartesDuJoueur.end)
//	{
//		if (lesCartesDuJoueur[cpt] != inJoueur.lesCartesDuJoueur[cpt])
//		{
//
//		}
//	}
//	/*if (!equal(lesCartesDuJoueur.begin, lesCartesDuJoueur.end,
//		inJoueur.lesCartesDuJoueur.begin, inJoueur.lesCartesDuJoueur.end))
//	{
//		for_each(lesCartesDuJoueur.begin, lesCartesDuJoueur.end)
//	}*/
//}
