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
	bool operator==(const Carte&);
	bool operator==(string);
	bool operator==(int);
	bool operator<(const Carte&);
	Carte& operator=(const Carte&);
};

#endif