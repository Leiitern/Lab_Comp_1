/*
    8) Hacer un programa para ingresar una lista de 10 n�meros, luego informar el m�ximo.

       Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20. Se listar� M�ximo 35.
       Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20. Se listar� M�ximo 55.
*/
#include <iostream>
using namespace std;

int main()
{
    int num;
    int maximo;
    int i;

    cout << "A continuacion se le solicitara ingresar 10 numeros:" << endl << endl;

    for(i = 0; i < 10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> num;

        if(i == 0)
        {
            maximo = num;
        }
        else if(num > maximo)
        {
            maximo = num;
        }
    }

    cout << endl << "El maximo numero encontrado fue: " << maximo << endl;

    return 0;
}
