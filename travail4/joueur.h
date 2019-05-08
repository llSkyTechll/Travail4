#ifndef joueurH
#define joueurtH
#include <string>
#include "carte.h"
#include <vector>
#include <algorithm>
using namespace std;

class Joueur
{
private:
	string nom;
	int points;
	vector<Carte> lesCartesDuJoueur;
public:
	Joueur();
	Joueur(string);
	Joueur(const Joueur&);
	string getNom() const;
	int getPoints() const;
	vector<Carte>getLesCartesDuJoueur() const;
	Carte getCarte(int) const;
	void assignerCarte(Carte);
	int calculerValeurTotal();
	void trie();
	void ajouterPoints(int inPoints);
	int ajouterPointsDuplique();
	void viderLesCartes();
	bool verifierCarteChanceuse(Carte);
	bool verifierGrandeValeur();
};
bool grandeValeur(Carte inCarte);

#endif