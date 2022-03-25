#include <iostream>
#include <ctime>
#include <iomanip>
/*
Simular los tiros de seis monedas 1000 veces e imprimir la 
distribucion resultante.
*/
using namespace std;

int moneda(void){
    
    int aleatorio;
    aleatorio= 1+rand()%2;
    
    return aleatorio;
}

int main()
{
    int n,aleatorio;
    int aguila=0,sol=0;
    system("title Problema 3 cap 5" ) ;
       
    srand(time(0));

    cout << "Teclea [1] para arrojar 6 monedas : ";
    cin >> n;
    
    
    for (int j=1;j<=1000;j++){

        for (int i=1;i<=6;i++){

            aleatorio=moneda();

            if (aleatorio==1){
                sol++;
            }
            else{
                aguila++;
            }        
        }  
    }  
    cout <<"Sol:  " << sol << " Aguila:  " << aguila << endl;
 return 0;
}