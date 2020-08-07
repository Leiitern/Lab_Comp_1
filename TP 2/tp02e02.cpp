/*
    2) Hacer un programa para ingresar por teclado dos n�meros y luego informar por pantalla
       con un cartel aclaratorio si el primer n�mero es m�ltiplo del segundo.
*/
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    int resto;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    resto = num2 % num1;

    if(resto == 0)
    {
        cout << "El primer numero es multiplo del segundo.";
    }

    return 0;
}
