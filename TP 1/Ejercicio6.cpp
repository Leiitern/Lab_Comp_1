/*
    6) Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para
       cada una de las cuatros semanas del mes. El programa debe listar la recaudación promedio por
       semana y el porcentaje de recaudación por semana.

       Ejemplo. Si se ingresa $ 1600, $ 1200, $ 4800 y $ 400 se listara como recaudación promedio
       $ 2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.
*/
#include <iostream>

using namespace std;

int main()
{
    int sema1, sema2, sema3, sema4;
    float porcSema1, porcSema2, porcSema3, porcSema4;
    int recaudacion;
    float promRecaudacion;

    cout << "Ingrese la recaudacion de la semana 1: ";
    cin >> sema1;

    cout << "Ingrese la recaudacion de la semana 2: ";
    cin >> sema2;

    cout << "Ingrese la recaudacion de la semana 3: ";
    cin >> sema3;

    cout << "Ingrese la recaudacion de la semana 4: ";
    cin >> sema4;

    recaudacion = sema1 + sema2 + sema3 + sema4;
    promRecaudacion = (float)recaudacion / 4;

    porcSema1 = (float) sema1 * 100 / recaudacion;
    porcSema2 = (float) sema2 * 100 / recaudacion;
    porcSema3 = (float) sema3 * 100 / recaudacion;
    porcSema4 = (float) sema4 * 100 / recaudacion;

    cout << endl;
    cout << "El promedio de recaudacion por semana es: $"; cout << promRecaudacion; cout << endl << endl;
    cout << "El porcentaje por semana para la semana 1 es: "; cout << porcSema1; cout << "%"; cout << endl;
    cout << "El porcentaje por semana para la semana 2 es: "; cout << porcSema2; cout << "%"; cout << endl;
    cout << "El porcentaje por semana para la semana 3 es: "; cout << porcSema3; cout << "%"; cout << endl;
    cout << "El porcentaje por semana para la semana 4 es: "; cout << porcSema4; cout << "%"; cout << endl;

    return 0;
}
