#include <iostream>
#include <stdlib.h>
#include <time.h>
/*
Simular 1000 tiradas de dado, al final de la simulacion imprimir 
la cantidad de 3 resultantes.
*/

using namespace std;
int res();

int main()
{

	int i, f, suma = 0;
	srand((unsigned)time(NULL));
    system("title Problema 7 cap 5" ) ;

	for (int i = 0; i < 1000; i++)
	{
		f = res();
		printf("%d\n", f);
		if (f == 3) {
			suma++;
		}
	}
	printf("Total de veces que muestra el 3: ");
	printf("%d", suma);
}
    int res() {
	return(1 + rand() % 6);
}
