#include "pch.h"
#include "PolinomIreductibil.h"





void PolinomIreductibil::EisensteinCriteria()
{
	int maxim = m[0].getCoef();
	cout << "Vom aplica criteriul lui Eisenstein pentru a demonstra ca polinomul este ireductibil.\n";
	for (int i = 1; i < noMonoms; i++)
		if (m[i].getCoef() > maxim)
			maxim = m[i].getCoef();
	for (int i = 2; i <= maxim; i++)
	{	
		
		bool isprime= 1;
		for (int k = 2; k < i / 2 && isprime; k++)
			if (i%k == 0)
				isprime = 0;
		if(isprime)
		{	
			int ok = 1;
			for (int j = 1; j < noMonoms && ok == 1; j++)
				if (m[j].getCoef() % i != 0)
				{	
					cout << "Nu divide" << m[j].getCoef() << "-lea coeficient\n";
					ok = 0;
				}
			int p = i * i;
			if (m[0].getCoef() % i == 0 || m[noMonoms - 1].getCoef() % p == 0)
			{
				"Nu se respecta conditia 2\n\n";
				ok = 0;
			}
			if (ok)
			{
				cout << "Numarul care verifica criteriulmlui Eisenstein este " << i << " deoarece:\n-" << i << "este prim;\n-" << i << "divide toti coeficientii mai putin coeficientul dominant\n-" << i << "^2 nu divide termenul liber.\n";
				break;
			}
		}
	}

}

PolinomIreductibil::~PolinomIreductibil()
{
}
