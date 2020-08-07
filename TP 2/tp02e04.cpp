/*
    4) Hacer un programa para ingresar por teclado dos n�meros y luego informar por pantalla la
       diferencia absoluta entre ambos.

       Ejemplo 1: Si se ingresan 3 y 8, se emite 5. Si se ingresan 8 y 3, se emite 5.
       Ejemplo 2: Si se ingresan -3 y 9, se emite 12. Si se ingresan -12 y -1, se emite 11.
*/
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    int result;

    cout << "Ingrese un numero: ";
    cin >> num1;

    cout << "Ingrese otro numero: ";
    cin >> num2;

    result = num1 - num2;

    if(result < 0)
    {
        result = result * -1;
        cout << "La diferencia absoluta es: " << result << endl;
    }
    else
    {
        cout << "La diferencia absoluta es: " << result << endl;
    }



    return 0;
}
