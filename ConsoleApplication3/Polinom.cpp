#include "pch.h"
#include "Polinom.h"



Polinom::Polinom(const Polinom & B)
{
	noMonoms = B.noMonoms;
	delete[] m;
	m = new Monom[noMonoms];
	for (int i = 0; i < noMonoms; i++)
		m[i] = B.m[i];
}

void Polinom::setNoMonoms(int x)
{
	noMonoms = x;
	m = new Monom[noMonoms];
}


void Polinom::addMonom(Monom X, int poz)
{
	m[poz] = X;
}

int Polinom::getNoMonoms()const
{
	return noMonoms;
}

Monom Polinom::getMonom(int poz)const
{
	if (poz >= noMonoms)
	{
		cout << "No such Monom\n";
		return m[0];
	}
	return m[poz];
}


const Polinom & Polinom::operator=(const Polinom & B)
{
	noMonoms = B.getNoMonoms();
	delete[] m;
	m = new Monom[noMonoms];
	for (int i = 0; i < noMonoms; i++)
		m[i] = B.m[i];
	return *this;
	return *this;
}

void Polinom::readPolinom()
{
	cout << "Introduceti gradul maxim +1, iar apoi, pe rand, coeficientii monoamelor si gradul fiecaruia in ordine descrescatpare.\n";
	cin >> (*this);
}

void Polinom::showPolinom()
{
	cout << (*this);
}



Polinom::~Polinom()
{	
	delete[] m;
}

istream & operator>>(istream & is, Polinom & P)
{
	int x;
	Monom aux;
	is >> x;
	P.setNoMonoms(x);
	for (int i = 0; i < x; i++)
	{
		is >> aux;
		P.addMonom(aux,i);
	}
	return is;
}

ostream & operator<<(ostream & os, Polinom & P)
{
	int n = P.getNoMonoms();
	for (int i = 0; i < n-1; i++)
	{	
		Monom aux;
		aux = P.getMonom(i);
		cout << aux;
		cout << "+";
	}
	Monom aux;
	aux = P.getMonom(n-1);
	cout << aux;
	cout << "\n";
	return os;
}
