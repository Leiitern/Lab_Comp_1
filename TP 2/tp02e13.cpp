/*
    13) Hacer un programa para leer tres números diferentes y determinar e informar el número
        del medio. Ejemplo: si se ingresan 6, 10, 8, se emitirá 8.
*/
#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    if(num1 > num2 && num2 < num3)
    {
        if(num3 > num1)
        {
            cout << endl  << "El del medio es: " << num1 << endl << endl;
        }
        else
        {
            cout << endl << "El del medio es: " << num3 << endl << endl;
        }
    }
    else if(num1 < num2 && num2 > num3)
    {
        if(num3 < num1)
        {
            cout << endl  << "El del medio es: " << num1 << endl << endl;
        }
        else
        {
            cout << endl << "El del medio es: " << num3 << endl << endl;
        }
    }
    else if(num1 < num2 && num2 < num3)
    {
        if(num3 > num1)
        {
            cout << endl  << "El del medio es: " << num2 << endl << endl;
        }
    }
    else
    {
        cout << endl << "El del medio es: " << num2 << endl << endl;
    }

    return 0;
}
