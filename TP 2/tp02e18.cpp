/*
    18) Una empresa de electricidad cobra el servicio a sus clientes de acuerdo a la siguiente escala:

        $ 10 por kilovatio por el consumo hasta los primeros 100 kilovatios de consumo.
        $ 12 por kilovatio por el consumo excedente de 101 a 200 kilovatios.
        $ 15 por kilovatio por el consumo excedente de 201 kilovatios en adelante.

        Hacer un programa para que, dado el consumo en kilovatios de un determinado cliente, el
        programa calcule e informe el total a pagar por el mismo.

        Ejemplo 1: Un consumo de 55 kilovatios, se calcular�: $ 10 x 55= $ 550
        Ejemplo 2: Un consumo de 125 kilovatios, se calcular�: $ 10 x 100 + $ 12 x 25=$ 1300
        Ejemplo 3: Un consumo de 250 kilovatios, se calcular�: $ 10 x 100 + $ 12 x 100 + $ 15 x 50 = $ 2950
*/
#include <iostream>
using namespace std;

int main()
{
    int kVatios;
    int tarifa1, tarifa2, tarifa3;
    int totalPagar;

    cout << "Ingrese los kilovatios de consumo: ";
    cin >> kVatios;

    if(kVatios <= 100)
    {
        totalPagar = kVatios * 10;
    }
    else if(kVatios >= 101 && kVatios <= 200)
    {
        tarifa2 = kVatios - 100;
        tarifa1 = kVatios - tarifa2;
        totalPagar = tarifa2 * 12 + tarifa1 * 10;
    }
    else
    {
        tarifa2 = kVatios - 100;
        tarifa1 = kVatios - tarifa2 ;
        tarifa3 = tarifa2 - 100;

        totalPagar = (tarifa1 * 10) + (tarifa2 * 12) + (tarifa3 * 15);
    }

    cout << "Este es el total a pagar: $" << totalPagar <<endl;

    return 0;
}