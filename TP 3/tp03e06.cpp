/*
    6) Hacer un programa para ingresar un N valor que indica la cantidad de números que componen una lista
       y luego solicitar se ingresen esos N números. Se pide informar cuantos son positivos.

       Ejemplo: Se ingresa como valor N un 5, y luego se ingresa: 10, -3, 2, 5, 4. Se listará Cantidad de Positivos: 4
       Ejemplo: Se ingresa como valor N un 6, y luego se ingresa: -10, -3, -2, 0, -5, -4. Se listará Cantidad de Positivos: 0
*/
#include <iostream>
using namespace std;

int main()
{
    int num, num2;
    int i;
    int contPos = 0;

    cout << "Ingrese la cantidad de numeros a evaluar: ";
    cin >> num;

    cout << endl << "A continuacion se le pedira ingresar los " << num << " numeros." << endl << endl;

    for(i = num; i > 0; i--)
    {
        cout << "Ingrese un numero: ";
        cin >> num2;

        if(num2 > 0)
        {
            contPos++;
        }
    }

    cout << endl << "Se contabilizaron " << contPos << " numeros positivos." << endl;


    return 0;
}
