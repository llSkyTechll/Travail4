#include "carte.h"

Carte::Carte()
{
	valeur = 0;
	atout = "";
}

Carte::Carte(int inValeur, string inAtout)
{
	valeur = inValeur;
	atout = inAtout;
}
Carte::Carte(const Carte& inCarte)
{
	valeur = inCarte.valeur;
	atout = inCarte.atout;
}

int Carte::getValeur() const
{
	return valeur;
}
string Carte::getAtout() const
{
	return atout;
}
string Carte::ToString()
{
	return to_string(valeur) +" "+ atout;
}
Carte Carte::getCarte() const
{
	Carte carteTempo(valeur,atout);

	return carteTempo;
}
bool Carte::operator==(const Carte& inCarte)
{
	bool valide = false;
	if (valeur == inCarte.valeur && atout == inCarte.atout)
	{
		valide = true;
	}
	return valide;
}
bool Carte::operator<(const Carte& inCarte)
{
	bool valide = false;
	if (valeur < inCarte.valeur)
	{
		valide = true;
	}
	return valide;
}
Carte& Carte::operator=(const Carte& inCarte)
{
	if (this != &inCarte)
	{
		valeur = inCarte.valeur;
		atout = inCarte.atout;
	}
	return *this;
}
