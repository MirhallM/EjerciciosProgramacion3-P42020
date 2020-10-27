#include <iostream>

#include "Racional.h"

using namespace std;

Racional::Racional() : numerador(1), denominador(1) 
{}


Racional::Racional(int _num, int _den) : numerador(_num), denominador(_den)
{}

void Racional::ImprimirRacional() //3/4
{
	cout << numerador << "/" << denominador << endl;
}

void Racional::ImprimirDecimal()
{
	if (denominador == 0 && numerador == 0) {
		cout << "Numero indefinido" << endl;
		return;
	}
	else if (denominador == 0) {
		cout << "No se puede dividir entre zero" << endl;
		return;
	}


	cout << ((float)(numerador) / (float)(denominador)) << endl;
}

Racional Racional::suma(Racional r2)
{

	//Cuando ambos denomiandores sean iguales
	if (this->denominador == r2.denominador)
		return Racional(this->numerador + r2.numerador, this->denominador);

}
