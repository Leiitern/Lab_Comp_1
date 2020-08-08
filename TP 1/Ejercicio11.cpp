/*
    11) Hacer un programa para ingresar por teclado una cantidad de cantidad de minutos y
        mostrar por pantalla a cuantos d�as, horas y minutos equivalen.

        Ejemplo 1: si se ingresan 1520 minutos el programa mostrar� por pantalla que equivalen a 1
        d�a, 1 hora y 20 minutos.
        Ejemplo 2: si se ingresan 480 minutos el programa mostrar� por pantalla que equivalen a 0
        d�a, 8 horas y 0 minutos.
*/
#include <iostream>
using namespace std;

int main()
{
    int cantMin;
    int dias, horas, minutos;

    cout << "Ingrese la cantidad de minutos: ";
    cin >> cantMin;
    
    dias = (cantMin / 60) / 24;
    horas = (cantMin / 60) % 24;
    minutos = cantMin % 60;
    

    cout << "Dias " << dias << endl << "Horas "<< horas << endl << "Minutos " << minutos << endl;

    return 0;
}