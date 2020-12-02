#pragma once

#ifndef ARBOLBINARIO_H
#define ARBOLBINARIO_H

#include "NodoArbol.h"

class ArbolBinario
{
private:
	NodoArbol* raiz;
	void imprimirRec(NodoArbol* _raiztemp);
	NodoArbol* agregarNodoRec(NodoArbol* _raiztemp, int _valor);
	int sumatoriaRec(NodoArbol* _raiztemp);
public:
	ArbolBinario();
	void agregarNodo(int _valor);
	void imprimirArbol();

	int sumatoriaNodos();
	
	int cantidadNodos();
};

#endif // !ARBOLBINARIO_H

