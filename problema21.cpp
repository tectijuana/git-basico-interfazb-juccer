#include <iostream>
#include <cstdlib>
#include <ctime>
/*
Sacar dos números al azar entre 1 y 20. ¿Cuál es la 
probabilidad de que su suma sea 12?
*/

using namespace std;

int main()
{
	
	int a=0; 
	int b=0;
	int sum=0;

    system("title Problema 22 cap 5" ) ;
	
	srand(time(0));

	a= 1+ (rand()%20);
	b= 1+ (rand()%20);
	sum= a+b;

	
	cout << a << endl;
	cout << b << endl;
	cout << "---" << endl;
	
	if (sum==12)
	{
		cout << "100 % probabilidd" << endl;
	}
	if(sum > 12)
	{
		cout << "0% de probabilidad" << endl;
	}
	else
	{
		
		cout << "Menos del 50% de probabilidad" << endl;
    }
    
	
	cout << sum << endl;
	return 0;
    
}