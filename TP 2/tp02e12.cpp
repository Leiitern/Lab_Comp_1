/*
    12) Hacer un programa para ingresar tres n�meros distintos y listarlos ordenados de menor a
        mayor. Ejemplo: si se ingresa 4,-3,7, se debe mostrar -3, 4,7.
*/
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    int orden;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero distinto al anterior: ";
    cin >> num2;

    cout << "Ingrese el tercer numero distinto a los otros dos: ";
    cin >> num3;

    if(num1 < num2 && num1 < num3)
    {
        if(num2 < num3)
        {
            orden = 1;
        }
        else
        {
            orden = 2;
        }
    }
    else if(num2 < num1 && num2 < num3)
    {
        if(num1 < num3)
        {
            orden = 3;
        }
        else
        {
            orden = 4;
        }
    }
    else if(num3 < num1 && num3 < num2)
    {
        if(num1 < num2)
        {
            orden = 5;
        }
        else
        {
            orden = 6;
        }
    }

    cout << endl << "Los numeros ordenado de menor a mayor: " << endl << endl;

    switch(orden)
    {
        case 1:
            cout << num1 << num2 << num3 << endl;
            break;
        case 2:
            cout << num1 << num3 << num2 << endl;
            break;
        case 3:
            cout << num2 << num1 << num3 << endl;
            break;
        case 4:
            cout << num2 << num3 << num1 << endl;
            break;
        case 5:
            cout  << num3 << num1 << num2 << endl;
            break;
        case 6:
            cout  << num3 << num2 << num1 << endl;
            break;
    }


    return 0;
}
