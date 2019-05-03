#ifndef carteH
#define carteH
#include <string>
using namespace std;

class Carte
{
private:
	int valeur;
	string atout;
public:
	Carte();
	Carte(int, string);
	Carte(const Carte&);
	int getValeur() const;
	string getAtout() const;
	string ToString();
	Carte getCarte() const;


};

#endif