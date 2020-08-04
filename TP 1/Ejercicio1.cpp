/*
    1) Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un
    operario y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le
    corresponda.
*/
#include <iostream>

using namespace std;

int main()
{
    int horasTrab;
    int valorHora;
    int sueldo;

    cout << "Ingrese la cantidad de horas trabajadas por el operario: ";
    cin >> horasTrab;

    cout << "Ingrese el valor de la hora trabajada: ";
    cin >> valorHora;

    sueldo = horasTrab * valorHora;

    cout << "Este es el sueldo a cobrar: $"; cout << sueldo;


    return 0;
}
