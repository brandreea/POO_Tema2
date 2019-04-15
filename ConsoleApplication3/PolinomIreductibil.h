#pragma once
#include "PolinomReductibil.h"
class PolinomIreductibil: public Polinom
{
public:
	//constructorii
	PolinomIreductibil() :Polinom() {};
	PolinomIreductibil(const PolinomIreductibil&B) :Polinom(B) {};

	//functie care sa verifice daca polinomul este reductibil
	void EisensteinCriteria();
	~PolinomIreductibil();
};

