/*
    10) Hacer un programa para ingresar cinco números y listar el máximo de ellos.
*/
#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, num4, num5;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    cout << "Ingrese el cuarto numero: ";
    cin >> num4;

    cout << "Ingrese el quinto numero: ";
    cin >> num5;

    if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5)
    {
        cout << endl << "El maximo numero es: " << num1 << endl;
    }
    else if(num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5)
    {
        cout << endl << "El maximo numero es: " << num2 << endl;
    }
    else if(num3 > num1 && num3 > num4 && num3 > num4 && num3 > num5)
    {
        cout << endl << "El maximo numero es: " << num2 << endl;
    }
    else if(num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5)
    {
        cout << endl << "El maximo numero es: " << num4 << endl;
    }
    else
    {
        cout << endl << "El maximo numero es: " << num5 << endl;
    }
    return 0;
}
