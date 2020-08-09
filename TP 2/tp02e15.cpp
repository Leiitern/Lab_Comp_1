/*
    15) Un a�o es bisiesto: 
        si es m�ltiplo de 4,exceptuando a los a�os que son m�ltiplos de 100 pero que no sean m�ltiplos de 400. 
        Esto �ltimo significa que el a�o 1900 no es bisiesto, pero el a�o 2000 si lo es.
        Hacer un programa para que ingresar un a�o y listar por pantalla si es bisiesto o no lo es.

        Ejemplo 1. Si se ingresa el a�o 2020 se indicar� como bisiesto.
        Ejemplo 2. Si se ingresa el a�o 2019 se indicar� como no bisiesto.
        Ejemplo 3. Si se ingresa el a�o 1800 o 1900 se indicar� como no bisiesto.
        Ejemplo 4. Si se ingresa el a�o 1600 o 2000 se indicar� como bisiesto.
*/
#include <iostream>
using namespace std;

int main()
{
    int agno;
    int resto4, resto100, resto400;

    cout << "Ingrese el anio: ";
    cin >> agno;

    resto4 = agno % 4;
    resto100 = agno % 100;
    resto400 = agno % 400;

    if(resto4 == 0 && resto100 != 0 || resto400 == 0)
    {
        cout << "El anio es biciesto" << endl;
    }
    else
    {
        cout << "No es bisiesto" << endl;
    }
    

    return 0;
}
