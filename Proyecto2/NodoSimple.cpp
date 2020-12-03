#include "NodoSimple.h"

NodoSimple::NodoSimple() : valor(0), siguiente(nullptr)
{
}

NodoSimple::NodoSimple(int _valor, NodoSimple* _sig) : valor(_valor), siguiente(_sig)
{
}

void NodoSimple::setValor(int _valor)
{
	this->valor = _valor;
}

void NodoSimple::setSiguiente(NodoSimple* _sig)
{
	this->siguiente = _sig;
}

int NodoSimple::getValor()
{
	return valor;
}

NodoSimple* NodoSimple::getSiguiente()
{
	return siguiente;
}
