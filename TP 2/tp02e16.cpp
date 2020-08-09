/*
    16) Hacer un programa para ingresar por teclado las cuatro notas de los ex�menes obtenidas
        por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones:
        - �Promociona�, si obtuvo en los cuatro ex�menes nota 7 o m�s.
        - �Rinde examen final�, si obtuvo nota 4 o m�s en por lo menos tres ex�menes.
        - �Recupera Parciales�, si obtuvo nota 4 o m�s en por lo menos uno de los ex�menes.
        - �Recursa la materia�, si no aprob� ning�n examen parcial.
*/
#include <iostream>
using namespace std;

int main()
{
    int nota1, nota2, nota3, nota4;
    int menosCuatro;

    cout << "Ingrese la primera nota: ";
    cin >> nota1;

    cout << "Ingrese la segunda nota: ";
    cin >> nota2;

    cout << "Ingrese la tercera nota: ";
    cin >> nota2;

    cout << "Ingrese la cuarta nota: ";
    cin >> nota3;

    if (nota1 >= 7 && nota2 >= 7 && nota3 >= 7 && nota4 >= 7)
    {
        cout << "Promociona" << endl;
    }
    else if(nota1 >= 4)
    {
        menosCuatro++;
    }
    else if(nota2 >= 4)
    {
        menosCuatro++;
    }
    else if(nota3 >= 4)
    {
        menosCuatro++;
    }
        else if(nota4 >= 4)
    {
        menosCuatro++;
    }
    else if(menosCuatro >= 3)
    {
        cout << "Rinde examen final" << endl;
    }
    else if(menosCuatro == 1)
    {
        cout << "Recupera parciales" << endl;
    }
    else if(menosCuatro == 4)
    {
        cout << "Recrusa la materia" << endl;
    }    
    


    return 0;
}

