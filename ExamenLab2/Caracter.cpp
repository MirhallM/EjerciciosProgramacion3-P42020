#include "Caracter.h"
#include <iostream>

using namespace std;

Caracter::Caracter(char car) : valor(car)
{
	this->setSiguiente(nullptr);
}

void Caracter::printNodo()
{
	cout << "Caracter: " << this->valor << endl;
}