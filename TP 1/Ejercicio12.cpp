/*
    12) Una granja vende la caja de 12 unidades a $ 100 y cada huevo suelto a $ 12.
        Hacer un programa para ingresar la cantidad de huevos que compra un cliente y mostrar por
        pantalla el importe total a pagar.
        Recordatorio. Por cada 12 huevos se debe calcular una caja y el excedente se calcula como suelto.

        Ejemplo 1. Si la cantidad ingresada son 15 huevos, el programa calcular� 1 caja y 3 sueltos, es
        decir $ 100 + $ 12 x 3 = $ 136.
        Ejemplo 2. Si la cantidad ingresada son 28 huevos el programa calcular� 2 cajas y 4 sueltos,
        es decir $ 100 x 2 + $12 x 4 = $ 248.
        Ejemplo 3.Si la cantidad ingresada son 8 huevos, el programa calcular�: 0 cajas y 8 sueltos, es
        decir $ 12 x 8 = $ 96.
*/
#include <iostream>
using namespace std;

int main()
{
    int cantHuevo;
    int cajas;
    int sueltos;
    int importe;

    cout << "Ingrese la cantidad de huevos: ";
    cin >> cantHuevo;

    cajas = cantHuevo / 12;
    sueltos = cantHuevo % 12;

    importe = (cajas * 100) + (sueltos *12);

    cout << "El importe a pagar es de $" << importe << endl;

    
    return 0;
}