/*
    10) Hacer un programa para ingresar una lista de 10 números, luego informar el máximo y
        el mínimo.

        Ejemplo: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13. Se listará Máximo 42 Mínimo -15.
        Ejemplo: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listará Máximo 42 Mínimo 5.
        Ejemplo: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13. Se listará Máximo -5 Mínimo -42.
        Observe que los tres ejemplos dejan en claro que la idea de que el máximo
        “seguramente” es un positivo y el mínimo “seguramente” es un negativo, queda
        totalmente descartada.
*/
#include <iostream>
using namespace std;

int main()
{	
	int i; 
	int j = 0, l = 0;
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
		else if(num > max)
			{
				max = num;
				maxPos = i;
			}
			else if(!l)
				{
					min = num;
					minPos = i;
					l++;
				}
				else if(num < min)
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
