
#include "pch.h"
#include "Monom.h"
#include "PolinomReductibil.h"
#include "PolinomIreductibil.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	Polinom D;
	cout << "Citim un polinom oarecare:\n";
	cin >> D;
	cout << D;
	Polinom E;
	E = D;
	cout << E;
	E.showPolinom();
	PolinomReductibil A;
	A.readPolinom();
	A.showPolinom();
	PolinomIreductibil B,C;
	cout << "Citim un polinom ireductibil:\n";
	cin >> B;
	cout << B;
	B.EisensteinCriteria();
	return 0;
}