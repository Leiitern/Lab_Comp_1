/*
    10) Hacer un programa para ingresar una lista de 10 n�meros, luego informar el m�ximo y
        el m�nimo.

        Ejemplo: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13. Se listar� M�ximo 42 M�nimo -15.
        Ejemplo: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listar� M�ximo 42 M�nimo 5.
        Ejemplo: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13. Se listar� M�ximo -5 M�nimo -42.
        Observe que los tres ejemplos dejan en claro que la idea de que el m�ximo
        �seguramente� es un positivo y el m�nimo �seguramente� es un negativo, queda
        totalmente descartada.
*/
#include <iostream>
using namespace std;

int main()
{	
	int i; 
	int j = 0, l;
	int num;
	int max, maxPos;
	int min, minPos;

	for(i = 0; i < 10; i++)
	{
		cout << "Ingrese un numero: ";
		cin >> num;

		if(!j)
		{
			max = num;
			maxPos = i;
			j++;
		}
		else
		{
			if(num > max)
			{
				max = num;
				maxPos = i;
			}
			else
			{
				if(!l)
				{
					min = num;
					minPos = i;
					l++;
				}
				else
				{
					if(num < min)
					{
						min = num;
						minPos = i;
					}
				}
			}
		}
	}

	cout << "El maximo encontrado es " << max << " posicion " << maxPos + 1 << endl;
	
	cout << "El minimo encontrado es " << min << " posicion " << minPos + 1 << endl;

	return 0;
}
