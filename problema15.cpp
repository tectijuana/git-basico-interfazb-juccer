#include <iostream>
#include <stdlib.h>
#include <time.h>
/*
El conjunto de números que aparece con frecuencia
e importancia en probabilidades N factorial 
*Genera una tabala de factoriales hasta un valor N*
*/

using namespace std;


int main()
{


	int f, facto = 1;
    system("title Problema 15 cap 5" ) ;
	cout << "Capture un numero para calcular su factorial :";
	cin >> f;
	for (int i = 1; i <= f; i++) {
		facto = facto * i;
		cout  << i ;
	}
	cout << "\nEl numero factorial de " << f << " es:  " << facto << endl;
	system("pause");
	
	return 0;
}