#include <iostream>
#include <cmath>
/*
Pasar de grados a radianes usando multiplos de 10 desde 0
hasta 360 
*/

using namespace std;

int main()
{
    int grad=0;
	system("title Problema 1 cap 4" ) ;
    for (grad; grad<=360; grad++){

		if (grad % 10 == 0){
            
			cout <<  "Grados: " << grad << " a radianes (multiplos de 10)" << (grad*M_PI)/180 <<endl; 
        }
		
	}
}