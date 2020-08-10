/*
    7) Hacer un programa para ingresar una lista de 10 números, luego informar cuántos son positivos,
       cuántos son negativos, y cuántos iguales a cero.
*/
#include <iostream>
using namespace std;

int main()
{
    int num;
    int i;
    int contPos = 0;
    int contNeg = 0;
    int contNeutro = 0;

    for(i = 0; i < 10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> num;

        if(num > 0)
        {
            contPos++;
        }
        else if(num < 0)
        {
            contNeg++;
        }
        else
        {
            contNeutro++;
        }
    }

    cout << endl << "Se contabilizaron " << contPos << " numeros positivos." << endl;
    cout << endl << "Se contabilizaron " << contNeg << " numeros negativos." << endl;
    cout << endl << "Se contabilizaron " << contNeutro << " numeros iguales a cero." << endl;


    return 0;
}
