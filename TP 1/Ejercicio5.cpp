/*
    5) Un comercio vende tres marcas de alfajores distintas A, B y C.
       Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de
       las tres marcas y luego se informe el porcentaje de ventas para cada una de ellas.

       Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará
       e informará A: 50%, B: 12,50% y C: 37,50%.
*/
#include <iostream>

using namespace std;

int main()
{
    int alfA, alfB, alfC;
    float porcA, porcB, porcC;

    int totalVentas;

    cout << "Ingrese la cantidad vendida de la marca de alfajores A: ";
    cin >> alfA;
    cout << "Ingrese la cantidad vendida de la marca de alfajores B: ";
    cin >> alfB;
    cout << "Ingrese la cantidad vendida de la marca de alfajores C: ";
    cin >> alfC;

    totalVentas = alfA + alfB + alfC;

    porcA = (float) alfA * 100 / totalVentas;
    porcB = (float) alfB * 100 / totalVentas;
    porcC = (float) alfC * 100 / totalVentas;

    cout << endl;
    cout << "Este es el porcentaje ventas de cada una de las marcas:" << endl << endl;
    cout << "Porcentaje de ventas de la marca A: " << porcA << "%" << endl;
    cout << "Porcentaje de ventas de la marca B: " << porcB << "%" << endl;
    cout << "Porcentaje de ventas de la marca C: " << porcC << "%" << endl;


    return 0;
}
