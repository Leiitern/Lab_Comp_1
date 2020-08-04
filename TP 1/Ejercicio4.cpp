/*
   4) Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un
      avión y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de
      ocupación y el porcentaje de no ocupación del mismo.

      Ejemplo si el avión tiene 200 asientos disponibles y se vendieron 80 pasajes, el porcentaje de
      ocupación que se informará será de un 40% y el porcentaje de no ocupación será de un 60%.
*/
#include <iostream>

using namespace std;

int main()
{
    int asientosDisp;
    int pasajeOcup;

    int total;

    float porcOcup;
    float porcDisp;

    cout << "Ingrese la cantidad de asientos disponibles: ";
    cin >> asientosDisp;

    cout << "Ingrese la cantidad de pasajes ocupados: ";
    cin >> pasajeOcup;

    total = asientosDisp + pasajeOcup;

    porcDisp = (float) asientosDisp * 100 / total;
    porcOcup = (float) pasajeOcup * 100 / total;

    cout << endl;
    cout << "Este es el porcentaje de ocupacion: "; cout << porcOcup; cout << "%"; cout << endl;
    cout << "Este es el porcentaje de no ocupacion: "; cout << porcDisp; cout << "%"; cout << endl;


    return 0;
}
