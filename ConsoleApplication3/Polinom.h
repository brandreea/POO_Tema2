#include <iostream>
#include <fstream>
#include "Monom.h"
using namespace std;

class Polinom
{
protected:
	friend class Monom;
	int noMonoms;
	Monom *m;

public:
	//constructori
	Polinom() { noMonoms = 0; };
	//Polinom(int nm = 0, Monom *p = NULL) { noMonoms = nm, m = p; };
	Polinom(const Polinom &B);

	//set-functii
	void setNoMonoms(int x);
	void addMonom(Monom X,int poz);
	//functie get
	int getNoMonoms()const;
	Monom getMonom(int poz)const;

	//operatori de citire/afisare
	friend istream &operator>>(istream &is, Polinom &P);
	friend ostream &operator<<(ostream &os, Polinom &P);
	const Polinom &operator = (const Polinom &B);

	//functie de afisare
	virtual void readPolinom();
	virtual void showPolinom();

	//destructor
	virtual ~Polinom();
};
