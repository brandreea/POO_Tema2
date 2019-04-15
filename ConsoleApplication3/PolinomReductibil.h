#pragma once
#include "Polinom.h"
class PolinomReductibil:public Polinom
{
protected:
	int *roots, noRoots;

public:
	PolinomReductibil() :Polinom() {};
	PolinomReductibil(const PolinomReductibil &B) : Polinom(B) { noRoots = B.noRoots; delete roots;  roots = new int[noRoots]; };
	
	//functii set
	void setNoRoots(int x);
	void setRoot(int x, int poz);

	//functie de citire,afisare
	void readPolinom();
	void showPolinom();

	~PolinomReductibil();
};

