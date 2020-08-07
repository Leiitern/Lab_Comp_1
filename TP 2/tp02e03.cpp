/*
    3) Hacer un programa para ingresar por teclado un número y luego informar por pantalla con
       un cartel aclaratorio si el mismo es par o impar.
*/
#include <iostream>

using namespace std;

int main()
{
    int num;
    int remainder;

    cout << "Enter a number: ";
    cin >> num;

    remainder = num % 2;

    if (remainder == 0)
    {
        cout << endl << "The number is even" << endl;
    }
    else
    {
        cout << endl << "The number is odd" << endl;
    }


    return 0;
}
