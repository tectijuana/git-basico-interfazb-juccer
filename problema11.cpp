#include<iostream>
#include <stdlib.h>
#include <time.h>
/*
Se lanzan 5 dados, cualquiera que muestre 4 se retira y se 
vuelven a lanzar los demas. los 4 que se muestre ahora se 
retiran y los restantes vuelven a lanzarse, hasta que todos los
dados muestren 4, ¿Cuántas veces hay que arrojarlos?
*/

using namespace std;
int main()
{
int dado=0,respuesta=0,dados=5;
system("title Problema 11 cap 5" ) ;
for(int i=0;;i++)
{
system("cls" ) ;
cout<<"Dado Virtual!" << "Dados:" << srand(time(NULL)) << endl;
dado=1+(rand()%6);
cout<<"Hola Tira los Dados" << respuesta;
while(respuesta!=4)
{
cout<<"Error! " << "Tira El Dado" << respuesta;
}
if(respuesta==dado)
{
cout<<"Los dados se terminaron";
}
else if(respuesta!=dado)
{
cout<<"Se ha sacado un dado" << dados=dados-1 << endl;
if(dados==0)
{
cout<<"Fin!"<< system("pause" ) ;
exit(0);
}
}
return 0;
}