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
	void assignerCarte(Carte);
	Carte getCarte(int) const;
	
	/*bool operator==(const Joueur&);
	bool operator<(const Joueur&);
	Joueur& operator=(const Joueur&);*/
};

#endif