/*
    14) Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona,
        ingresando día, mes y año como 3 datos individuales. Luego ingresar la fecha actual
        ingresando día, mes y año como 3 datos individuales. Calcular luego la edad en años de esa
        persona y listarlo por pantalla.

        Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual es 26/2/2019
        la edad de esa persona es 18 ya que los 19 recién los cumple en diciembre.
        Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual es 26/2/2019 la
        edad de esa persona es 19.
        Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual es 26/2/2019
        la edad de esa persona es 18 ya que le faltan 2 días para cumplir los 19 años.
*/
#include <iostream>

using namespace std;

int main()
{
    int nacDia, nacMes, nacAgno;
    int actualDia, actualMes, actualAgno;
    int edad;
    char n = 164;

    cout << "Ingrese el dia de nacimiento: ";
    cin >> nacDia;

    cout << "Ingrese el mes de nacimiento: ";
    cin >> nacMes;

    cout << "Ingrese el a"<<n<<"o de nacimiento: ";
    cin >> nacAgno;

    cout << endl << "Ingrese el dia actual: ";
    cin >> actualDia;

    cout << "Ingrese el mes actual: ";
    cin >> actualMes;

    cout << "Ingrese el a"<<n<<"o actual: ";
    cin >> actualAgno;

    edad = actualAgno - nacAgno;

    if(nacMes >= actualMes && nacDia >= actualDia)
    {
        edad -= 1;
    }

    cout << endl<< "Usted tiene " << edad << " a"<<n<<"os de edad" << endl;


    return 0;
}
