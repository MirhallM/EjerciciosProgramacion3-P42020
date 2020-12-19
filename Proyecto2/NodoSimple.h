#pragma once
#ifndef NODOSIMPLE_H
#define NODOSIMPLE_H

#include "NodoBase.h"

class NodoSimple : public NodoBase
{
private:
	int valor;
	NodoSimple* siguiente;
public:
	NodoSimple();
	NodoSimple(int _valor, NodoSimple* _sig);

	void setValor(int _valor);
	void setSiguiente(NodoSimple* _sig);

	int getValor();
	NodoSimple* getSiguiente();
};

#endif // !NODOSIMPLE_H



