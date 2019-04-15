#include "pch.h"
#include "Monom.h"
#include <fstream>
#include <iostream>
using namespace std;


void Monom::setDegree(int x)
{
	degree = x;
}

void Monom::setCoef(int x)
{
	coef = x;
}

int Monom::getDegree() const
{
	return degree;
}

int Monom::getCoef() const
{
	return coef;
}

istream & operator>>(istream & is, Monom & B)
{
	int x;
	int y;
	is >> y;
	is >> x;
	B.setDegree(x);
	B.setCoef(y);
	return is;

}

ostream & operator<<(ostream & os, Monom & B)
{	
	/*if (B.getDegree() > 0)
	{
		if (B.getCoef() > 1)
		{
			os << B.getCoef() << "X";
			if (B.getDegree() > 1)
				os <<"^"<< B.getDegree();
		}
		if (B.getCoef() == 1)
		{
			os << "X";
			if (B.getDegree() > 1)
				os <<"^"<< B.getDegree();
		}

	}
	else {
		if (B.getCoef() != 0)
			cout << B.getCoef();
	}*/
	int c = B.getCoef();
	if (c < 0)
		cout << "(";
	cout << B.getCoef();
	if (c < 0)
		cout << ")";
	cout<< "X^" << B.getDegree();
		return os;
}

const Monom & Monom::operator=(const Monom & B)
{
	
	coef=B.getCoef();
	degree=B.getDegree();
	return *this;
}

Monom::~Monom()
{
}

Monom::Monom(const Monom &B)
{	
	degree = B.degree;
	coef = B.coef;
}
