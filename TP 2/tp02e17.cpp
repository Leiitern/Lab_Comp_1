/*
    17) Hacer un programa para ingresar por teclado cuatro n�meros. Si los valores que se
        ingresaran est�n ordenados en forma creciente, emitir el mensaje �Conjunto Ordenado�, caso
        contrario emitir el mensaje: �Conjunto Desordenado�.

        Ejemplo 1: si los n�meros que se ingresan son 8,10, 12 y 14, entonces est�n ordenados.
        Ejemplo 2: si los n�meros que se ingresan son 8,12, 12 y 14, entonces est�n ordenados.
        Ejemplo 3: si los n�meros que se ingresan son 10, 8,12 y 14, entonces est�n desordenados.
*/
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4;

    cout << "Ingres el primer numero: ";
    cin >> num1;

    cout << "Ingres el segundo numero: ";
    cin >> num2;

    cout << "Ingres el tercer numero: ";
    cin >> num3;

    cout << "Ingres el cuarto numero: ";
    cin >> num4;

    if(num1 <= num2 && num2 <= num3 && num3 <= num4)
    {
        cout << "Esta ordenados." << endl;
    }
    else
    {
        cout << "No estan ordenados." << endl;
    }
    

    return 0;
}
    
