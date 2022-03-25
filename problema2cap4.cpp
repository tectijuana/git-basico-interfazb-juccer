#include <iostream>
#include <cmath>
/*
Introducir la medida en grados de un angulo y calcular la medida
en radianes.
*/

using namespace std;
int main()
{
    double grad=0,rad=0;
    float res;
    system("title Problema 2 cap 4" ) ;
    cout <<"Ingrese los grados: ";
    cin>>grad;
    
    res= (grad*M_PI)/180;

    cout <<"El valor de " << grad << " , en radianes son: " <<res <<endl;

}