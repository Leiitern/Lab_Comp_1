/*
    2) Hacer un programa que solicite por teclado que se ingresen dos números y luego
    guardarlos en dos variables distintas. A continuación se deben intercambiar mutuamente los
    valores en ambas variables y mostrarlos por pantalla.
    Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables usadas son A y B,
    entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.
*/
#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    int aux;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    aux = num2;
    num2 = num1;
    num1 = aux;

    cout << endl;

    cout << "El valor del primer numero: " << num1 << endl;
    cout << "El valor del segundo numero: " << num2 << endl;


    return 0;
}
