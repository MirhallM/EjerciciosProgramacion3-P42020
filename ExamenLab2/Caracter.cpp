#include "Caracter.h"
#include <iostream>

using namespace std;

Caracter::Caracter(char car) : valor(car)
{
	this->setSiguiente(nullptr);
	this->setAnterior(nullptr);
	this->setType(CHAR);
}

void Caracter::printNodo()
{
	cout << "Caracter: " << this->valor << endl;
}