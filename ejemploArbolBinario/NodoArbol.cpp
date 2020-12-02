#include "NodoArbol.h"

NodoArbol::NodoArbol(int _valor, NodoArbol* _derecho, NodoArbol* _izquierdo) :valor(_valor), hijoDerecho(_derecho), hijoIzquierdo(_izquierdo)
{
}

void NodoArbol::setValor(int _valor)
{
	this->valor = _valor;
}

void NodoArbol::setHijoDerecho(NodoArbol* _derecho)
{
	this->hijoDerecho = _derecho;
}

void NodoArbol::setHijoIzquierdo(NodoArbol* _izquierdo)
{
	this->hijoIzquierdo = _izquierdo;
}

int NodoArbol::getValor()
{
	return valor;
}

NodoArbol* NodoArbol::getHijoDerecho()
{
	return hijoDerecho;
}

NodoArbol* NodoArbol::getHijoIzquierdo()
{
	return hijoIzquierdo;
}
