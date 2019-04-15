#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Monom
{
protected:
	int degree;
	int coef;
public:
	//constructor
	Monom(int x = 0, int y = 0) { degree = x; coef= y; };

	//constructor de copiere
	Monom(const Monom &B);
	
	//functii care atribuie
	void setDegree(int x);
	void setCoef(int x);

	//functii de preluare a datelor
	int getDegree()const;
	int getCoef()const;

	//supraincarcarea ">>"

	friend istream & operator>>(istream & is, Monom & B);
	friend ostream & operator<<(ostream &os, Monom &B);
	const Monom &operator=(const Monom &B);
	~Monom();
};

