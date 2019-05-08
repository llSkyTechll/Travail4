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
	lesCartesDuJoueur = inJoueur.lesCartesDuJoueur; //operator= surcharg� dans la STL
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

int Joueur::trouvePointDuplique()
{
	int cptDoublons = 0;
	for (int cpt = 1; cpt <= 13; cpt++)
	{
		if (cptDoublons < count(lesCartesDuJoueur.begin(), lesCartesDuJoueur.end(), cpt))
		{
			cptDoublons = count(lesCartesDuJoueur.begin(), lesCartesDuJoueur.end(), cpt);
		}
	}
	return cptDoublons;
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
bool Joueur::verifierAtoutChanceux(string inAtout)
{
	int atoutchanceux = count(lesCartesDuJoueur.begin(), lesCartesDuJoueur.end(), inAtout);

	if (atoutchanceux > 0)
	{
		return true;
	}
	return false;
}

bool Joueur::verifierGrandeValeur()
{
	int grandeValeur = 0;
	grandeValeur = count_if(lesCartesDuJoueur.begin(), lesCartesDuJoueur.end(), comparerValeur);
	if (grandeValeur > 4)
	{
		return true;
	}
	return false;
}

bool Joueur::verifierValeurChanceuse(int inValeur)
{

	int valeurChanceuse = count(lesCartesDuJoueur.begin(), lesCartesDuJoueur.end(), inValeur);
	if (valeurChanceuse > 0)
	{
		return true;
	}
	return false;
}

Carte Joueur::getCarte(int inPosition) const
{
	return lesCartesDuJoueur[inPosition].getCarte();
}

bool comparerValeur(Carte inCarte)
{
	return (inCarte.getValeur() > 10);
}