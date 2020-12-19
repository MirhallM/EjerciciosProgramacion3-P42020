#pragma once
#ifndef NODODOBLE_CIRCULAR_H
#define NODODOBLE_CIRCULAR_H

#include "NodoBase.h"

class NodoDoble_Circular : public NodoBase
{
private:
	int valor;
	NodoDoble_Circular* siguiente;
	NodoDoble_Circular* anterior;
public:
	NodoDoble_Circular();
	NodoDoble_Circular(int _valor, NodoDoble_Circular* _sig, NodoDoble_Circular* _ant);

	void setValor(int _valor);
	void setAnterior(NodoDoble_Circular* _ant);
	void setSiguiente(NodoDoble_Circular* _sig);


	int getValor();
	NodoDoble_Circular* getSiguiente();
	NodoDoble_Circular* getAnterior();
};
#endif // !NODODOBLE_CIRCULAR_H


