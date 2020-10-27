#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Numero
{
private:
	int valor;

public: 
	Numero(void) : valor(0)
	{
		//Valor = 0
	}

	Numero(int _valor) : valor(_valor)
	{
		//valor = _valor;
	}

	void setValor(int _valor)
	{
		valor = _valor;
	}

	int getValor(void)
	{
		return valor;
	}

	bool esPar(void)
	{
		return valor % 2 == 0 ? true : false;
	}

	bool esMultiplo(Numero valor2)
	{
		int mayor = valor > valor2.getValor() ? valor : valor2.getValor();
		int menor = valor < valor2.getValor() ? valor : valor2.getValor();

		int residuo = mayor % menor;

		return residuo == 0;
	}

	bool esPrimo(void) {

		int cantidadDivisible = 0;

		for (int i = 1; i <= valor; i++)
		{
			if (valor % i == 0)
				cantidadDivisible++;
		}

		if (cantidadDivisible == 2)
			return true;
		else
			return false;

	}

	bool esCapicua(int num) {
		int temp = num;
		int lenght = to_string(temp).length();
		for (int i = 1; i < lenght / 2; i++)
		{
			
		}
	}
};