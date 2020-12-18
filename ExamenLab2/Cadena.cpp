#include "Cadena2.h"
#include <iostream>

using namespace std;

Cadena2::Cadena2(const char* str)
{
	valor = new char[strlen(str)];
	strcpy_s(valor, strlen(str) + 1, str);
	this->setSiguiente(nullptr);
	this->setAnterior(nullptr);
}

void Cadena2::printNodo()
{
	cout << "Cadena: " << valor << endl;
}
