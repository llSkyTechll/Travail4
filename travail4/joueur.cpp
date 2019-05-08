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
}

int Joueur::calculerValeurTotal()
{
	int total = 0;
	for (int cpt = 0; cpt < 10; cpt++)
	{
		total += lesCartesDuJoueur[cpt].getValeur();
	}
	return total;
}

void Joueur::trie()
{
		sort(lesCartesDuJoueur.begin(), lesCartesDuJoueur.end());
}

void Joueur::ajouterPoints(int inPoints)
{
	points += inPoints;
}

int Joueur::ajouterPointsDuplique()
{
	int pointBonus = 0;
	int cptDoublons = 0;
	int cptTriple = 0;
	int cptQuadruple = 0;
	int cpt = 0;
	return 0;
}

void Joueur::viderLesCartes()
{
	lesCartesDuJoueur.clear();
}

bool Joueur::verifierCarteChanceuse(Carte inCarte)
{
	int carteChanceuse = count(lesCartesDuJoueur.begin(), lesCartesDuJoueur.end(), inCarte);
	if (carteChanceuse > 0)
	{
		return true;
	}
	return false;
}

bool Joueur::verifierGrandeValeur()
{
	int grandeValeur = count(lesCartesDuJoueur.begin(), lesCartesDuJoueur.end(), grandeValeur);
	if (grandeValeur > 0)
	{
		return true;
	}
	return false;
}

Carte Joueur::getCarte(int inPosition) const
{
	return lesCartesDuJoueur[inPosition].getCarte();
}

bool grandeValeur(Carte inCarte)
{
	return (inCarte.getValeur() > 10);
}