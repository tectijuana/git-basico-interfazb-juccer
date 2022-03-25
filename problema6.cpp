#include <iostream>
#include <stdlib.h>
#include <time.h>
/*
Simular 1000 tiradas de dado, al final de la simulacion imprimir 
la cantidad de 4 resultantes.
*/

using namespace std;
int res();

int main()
{

	int i, f, suma = 0;
	srand((unsigned)time(NULL));
    system("title Problema 6 cap 5" ) ;

	for (int i = 0; i < 1000; i++)
	{
		f = res();
		printf("%d\n", f);
		if (f == 4) {
			suma++;
		}
	}
	printf("Total de veces que muestra el 4: ");
	printf("%d", suma);
}
    int res() {
	return(1 + rand() % 6);
}
