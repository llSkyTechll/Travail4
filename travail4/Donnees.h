#pragma once
#include <vector>
#include <algorithm>
using namespace std;

#include "joueur.h"

class Donnees
{
public:
	vector<Joueur> lesJoueurs;
	void InitialiserJoueurs();
public:
	Donnees();
};

