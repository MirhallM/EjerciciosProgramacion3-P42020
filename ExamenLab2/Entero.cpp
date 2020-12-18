#include "Entero2.h"

#include <iostream>

using namespace std;

Entero2::Entero2(int numero) : entero(numero)
{
	this->setSiguiente(nullptr);
	this->setAnterior(nullptr);
	this->setType(ENTERO);
}

void Entero2::printNodo()
{
	cout << "Entero: " << entero << endl;
}
