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

