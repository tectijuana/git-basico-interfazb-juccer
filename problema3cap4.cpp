#include <iostream>
#include <cmath>
/*
Introducir la medida en radianes de un angulo y calcular la medida
en grados.
*/

using namespace std;
int main()
{
    double grad=0,rad=0;
    float res;
    system("title Problema 3 cap 4" ) ;

    cout <<"Ingrese los radianes: ";
    cin>>rad;
    
    res= (rad*180)/M_PI;

    cout <<"El valor de " << rad << " , en grados son: " <<res <<endl;

}