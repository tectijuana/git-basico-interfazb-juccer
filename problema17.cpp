#include <iostream>
#include <stdlib.h>
#include <time.h>
/*
Determina las probabilidades de que un numero entre 2 y 100 
sea primo
*/

using namespace std;


int main()
{

	int  c = 1;
	double prob ;
	double primos = 0, numerosT = 99;
	 system("title Problema 17 cap 5" ) ;

	for (int i = 2; i <= 100; i++)
	{
		c = c + 1;
		printf("%d\n", c);
		if (c % 2 == 0) {

		}
		else {

			primos++;
		}

	}
	cout << "Rango de numeros: " << numerosT<< endl;
	cout << "Total de numeros primos (2-100): " << primos << endl;
	prob = primos / numerosT;
	cout << "La Probabilidad de ser un numero primo entre 2 y 100  " << prob << endl;
return 0;
}