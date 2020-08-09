/*
    11) Hacer un programa para ingresar cinco n�meros y listar cu�ntos de esos cinco n�meros
        son positivos.
*/
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4, num5;
    int contPos;

    contPos = 0;

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

    if(num1 > 0)
    {
        contPos++;
    }
    if(num2 > 0)
    {
        contPos++;
    }
    if(num3 > 0)
    {
        contPos++;
    }
    if(num4 > 0)
    {
        contPos++;
    }
    if(num5 > 0)
    {
        contPos++;
    }

    cout << endl << "Esta es la cantidad de numeros positivos: " << contPos << endl;


    return 0;
}
