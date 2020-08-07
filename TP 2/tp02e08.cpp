/*
    8) Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado la
       longitud de los tres lados de un triángulo y luego listar que tipo de triángulo es:
        - Equilátero: si los tres lados son iguales
        - Isósceles: si dos de los tres lados son iguales
        - Escaleno: si los tres lados son distintos entre sí
*/
#include <iostream>

using namespace std;

int main()
{
    int lado1, lado2, lado3;

    cout << "Ingrese el primer lado del triangulo: ";
    cin >> lado1;

    cout << "Ingrese el primer lado del triangulo: ";
    cin >> lado2;

    cout << "Ingrese el primer lado del triangulo: ";
    cin >> lado3;

    if(lado1 == lado2 && lado2 == lado3)
    {
        cout << endl << "El triangulo es equilatero." << endl;
    }
    else if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
    {
        cout << endl << "El triangulo es isosceles." << endl;
    }
    else
    {
        cout << endl << "El triangulo es escaleno." << endl;
    }


    return 0;
}
