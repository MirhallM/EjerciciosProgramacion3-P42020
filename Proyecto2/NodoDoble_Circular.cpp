#include "NodoDoble_Circular.h"

NodoDoble_Circular::NodoDoble_Circular() : valor(0), siguiente(nullptr), anterior(nullptr)
{
}

NodoDoble_Circular::NodoDoble_Circular(int _valor, NodoDoble_Circular* _sig, NodoDoble_Circular* _ant) : valor(_valor), siguiente(_sig), anterior(_ant)
{
}

void NodoDoble_Circular::setValor(int _valor)
{
	this->valor = _valor;
}

void NodoDoble_Circular::setAnterior(NodoDoble_Circular* _ant)
{
	this->anterior = _ant;
}

void NodoDoble_Circular::setSiguiente(NodoDoble_Circular* _sig)
{
	this->siguiente = _sig;
}

int NodoDoble_Circular::getValor()
{
	return valor;
}

NodoDoble_Circular* NodoDoble_Circular::getSiguiente()
{
	return siguiente;
}

NodoDoble_Circular* NodoDoble_Circular::getAnterior()
{
	return anterior;
}
