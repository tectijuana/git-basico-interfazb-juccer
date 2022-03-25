#include <iostream>
#include <time.h>
#include <string>
/*
Simular barajar manos de 5 cartas de una baraja de 52.
cerciorarse de no bajar la misma carta.
*/

using namespace std;
class Carta
{
public:
    int val;
    string palo, nomVal;
    bool ocupada = false;

    Carta(int val, string palo)
    {
        this->val = val;
        this->palo = palo;
        switch (val)
        {
        case 1:
            nomVal = "As";
            break;
        case 2:
            nomVal = "dos";
            break;
        case 3:
            nomVal = "tres";
            break;
        case 4:
            nomVal = "cuatro";
            break;
             case 5:
            nomVal = "cinco";
            break;
        case 6:
            nomVal = "seis";
            break;
        case 7:
            nomVal = "siete";
            break;
        case 8:
            nomVal = "ocho";
            break;
         case 9:
            nomVal = "nueve";
            break;
        case 10:
            nomVal = "diez";
            break;
        case 11:
            nomVal = "once";
            break;
        case 12:
            nomVal = "doce";
            break;
         case 13:
            nomVal = "trece";
            break;
        default:
            nomVal = to_string(val);
            break;
        }
    }
    Carta() {}
};

int main()
{
    Carta cartas[52];
    srand(time(0));

     system("title Problema 12 cap 5" ) ;

    string palos[4] = {"corazones", "diamantes", "treboles", "picas"};
    int valores[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 13; j++)
            cartas[i * 13 + j] = Carta(valores[j], palos[i]);

    int manos = 4;
    int numCartas = 5;

    for (int i = 0; i < manos; i++)
    {
        cout << "Mano " << i + 1 << ":\n";
        for (int j = 0; j <  numCartas; j++)
        {
            int carta = rand() % 52;
            if (cartas[carta].ocupada)
            {
                j--;
                continue;
            }
            cartas[carta].ocupada = true;
            cout << cartas[carta].nomVal << " de " << cartas[carta].palo << endl;
        }
        cout << endl;
    }

    return 0;
}