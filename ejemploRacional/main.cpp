#include <iostream>
#include <conio.h>

#include "Racional.h"

int main()
{
	/*Este ejercicio simula operaciones matematicas con numeros Racionales*/

	Racional r1(3, 2);
	Racional r2(4, 3);

	Racional resultado = r1.suma(r2);
	Racional result = suma(r1, r2);


	_getch();
}