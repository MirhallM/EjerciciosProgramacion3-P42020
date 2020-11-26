#include "Nodo.h"
#include <iostream>

Nodo::Nodo() : valor(nullptr), siguiente(nullptr), anterior(nullptr) //Todos los apuntadores son set a nulo (nullptr
{
}

Nodo::Nodo(const char* _valor, Nodo* _siguiente, Nodo* _anterior) : siguiente(_siguiente), anterior(_anterior)
{
	valor = new char[strlen(_valor)];             //Primero se reserva el espacio de memoria que vamos a usar
	strcpy_s(valor, strlen(_valor) + 1, _valor);  //Lo segundo es copiar todos los chars de _valor a nuestro espacio de memoria establecido anteriormente, +1 es para el character de terminacion ("/0")
}

void Nodo::setValor(const char* _valor)
{
	if (valor != nullptr) delete valor; //Liberando el espacio de memoria que vamos a cambiar, solamente si ya hay un valor establecido

	valor = new char[strlen(_valor)];
	strcpy_s(valor, strlen(_valor) + 1, _valor);
}

void Nodo::setSiguiente(Nodo* sig)
{
	this->siguiente = sig;
}

void Nodo::setAnterior(Nodo* ant)
{
	this->anterior = ant;
}

char* Nodo::getValor()
{
	return this->valor;
}

Nodo* Nodo::getSiguiente()
{
	return this->siguiente;
}

Nodo* Nodo::getAnterior()
{
	return this->anterior;
}