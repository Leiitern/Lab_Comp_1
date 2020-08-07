/*
    11) Hacer un programa para ingresar cinco números y listar cuántos de esos cinco números
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

    if(num1 > 5)
    {
        contPos++;
    }
    if(num2 > 5)
    {
        contPos++;
    }
    if(num3 > 5)
    {
        contPos++;
    }
    if(num4 > 5)
    {
        contPos++;
    }
    if(num5 > 5)
    {
        contPos++;
    }

    cout << endl << "Esta es la cantidad de numeros mayores a 5: " << contPos << endl;


    return 0;
}
