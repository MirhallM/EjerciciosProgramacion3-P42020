#pragma once

#include "NodoBase.h"

class ListaCircular2
{
private:
	NodoBase* head;
	NodoBase* tail;
	bool estaVacia();

public:
	ListaCircular2();
	void agregarNodo(NodoBase* nodo);

	void imprimirLista();
	void eliminarObjeto(int pos);

};

