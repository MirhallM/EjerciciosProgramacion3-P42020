#include <iostream>
#include <conio.h>
#include <vector>

#include "Caja.h"

using namespace std;

int ParesDeCalcetines(vector<int> calcetines)
{
	int total = 0;
	vector<int> contados;
	for (int i = 0; i < calcetines.size(); i++)
	{
		int CalcetinActual = calcetines.at(i);
		int cuentaActual = 1;
		bool contado = false;

		for (int j = 0; j < contados.size(); j++)
		{
			if (CalcetinActual == contados.at(j))
				contado = true;
		}
		if (!contado)
		{
			contados.push_back(CalcetinActual);
			for (int j = i + 1; j < calcetines.size(); j++)
			{
				if (CalcetinActual == calcetines.at(j))
				{
					cuentaActual++;
				}
			}
		} 
		total += (cuentaActual / 2);
	}
	return total;
}

int main()
{
	vector<int> calcetines;

	while (true)
	{
		int calcetin;
		cout << "Ingrese un numero para añadir ese calcetin a la pila, o -1 para salir: ";
		cin >> calcetin;
		if (calcetin == -1)
			break;
		else
			calcetines.push_back(calcetin);
	}

	cout << "Pares de Calcetines: " << ParesDeCalcetines(calcetines) << endl << endl;

	cout << "Ejercicio de Cajas!" << endl;
	Caja caja1;
	
	cout << "Volumen de Caja con parametros vacios: " << caja1.obtenerVolumen() << endl;

	cout << "Ingrese ancho de caja 1: ";
	int ancho1;
	cin >> ancho1;
	caja1.setAncho(ancho1);
	cout << "Ingrese largo de caja 1: ";
	int largo1;
	cin >> largo1;
	caja1.setLargo(largo1);
	cout << "Ingrese alto de caja 1: ";
	int alto1;
	cin >> alto1;
	caja1.setAlto(alto1);

	cout << "Nuevo volumen de caja 1: " << caja1.obtenerVolumen() << endl;

	cout << "Caja 2, con parametros llenados antes de creacion!" << endl;

	cout << "Ingrese ancho de caja 2: ";
	int ancho;
	cin >> ancho;
	cout << "Ingrese largo de caja 2: ";
	int largo;
	cin >> largo;
	cout << "Ingrese alto de caja 2: ";
	int alto;
	cin >> alto;

	Caja caja2(ancho, largo, alto);
	cout << "Volumen de Caja 2: " << caja2.obtenerVolumen() << endl;

	Caja caja3 = caja1 + caja2;
	
	cout << "Volumen de Caja 3 (Suma de caja 1 y 2 con operador +): " << caja3.obtenerVolumen() << endl;
	_getch();
}