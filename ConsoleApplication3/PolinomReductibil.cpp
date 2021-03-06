#include "pch.h"
#include "PolinomReductibil.h"



void PolinomReductibil::setNoRoots(int x)
{
	noRoots = x;
	delete[] roots;
	roots = new int[x];
}

void PolinomReductibil::setRoot(int x, int poz)
{
	if(poz<noRoots)
		roots[poz] = x;
	else cout << "Imposibil\n\n";
}

int PolinomReductibil::getNoRoots()const
{
	return noRoots;
}

const PolinomReductibil & PolinomReductibil::operator=(const PolinomReductibil & B)
{
	if (&B != this)
	{
		noMonoms = B.getNoMonoms();
		delete[] m;
		m = new Monom[noMonoms];
		for (int i = 0; i < noMonoms; i++)
			m[i] = B.m[i];
		noRoots = B.getNoRoots();
		delete[] roots;
		roots = new int[noRoots];
		for (int i = 0; i < noRoots; i++)
			roots[i] = B.roots[i];
	}
	return *this;
}

void PolinomReductibil::readPolinom()
{	
	cout << "Introduceti gradul maxim +1, iar apoi, pe rand, coeficientii monoamelor si gradul fiecaruia in ordine descrescatpare.\n";
	cin >> (*this);
	cout << "introduceti numarul de radacini (cel putin un):\n";
	cin >> noRoots;
	roots = new int[noRoots];
	cout << "introduceti radacinile:\n";
	for (int i = 0; i < noRoots; i++)
		cin >> roots[i];
}

void PolinomReductibil::showPolinom()
{

	if (roots[0] == 0)
		cout << "X";
	else cout << "(X-" << roots[0] << ") ";
	float y=m[0].getCoef();
	cout << "(" << m[0].getCoef() << "X^" << m[0].getDegree() - 1 << " ";
	for (int i = 1; i < noMonoms-1; i++)
	{
		y = y * roots[0] + m[i].getCoef();
		if (y != 0)
		{	if(y>0)
			cout << "+";
			if (y != 1) cout << y;
			cout << "X";
			if (m[i].getDegree() - 1 > 1)
				cout << "^" << m[i].getDegree() - 1;
		}

	}
	cout << ")"<<endl;
}

PolinomReductibil::~PolinomReductibil()
{
	//delete[] m;
	delete[] roots;
}
