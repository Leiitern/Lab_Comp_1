/*
    9) Hacer un programa para ingresar una lista de 10 números, luego informar el máximo y la posición del máximo en la lista.
       En caso de “empates” considerar la primera aparición.

       Ejemplo: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20. Se listará Máximo 35 Posición 7.
       Ejemplo: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20. Se listará Máximo 55 Posición 7.
*/
#include <iostream>
using namespace std;

int main()
{
    int num;
    int maximo=0;
    int pos=0;
    int i;

    cout << "A continuacion se le solicitara ingresar 10 numeros:" << endl << endl;

    for(i = 1; i <= 10; i++)
    {
        cout << i <<"- Ingrese un numero: ";
        cin >> num;

        if(i == 0)
        {
            maximo = num;
            pos = i;
        }
        else if(num > maximo)
        {
            maximo = num;
            pos = i;
        }
    }

    cout << endl << "El maximo numero encontrado fue el " << maximo << " en la posicion " << pos << endl;

    return 0;
}
