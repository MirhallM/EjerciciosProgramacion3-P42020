#include "ArbolBinario.h"
#include <iostream>

using namespace std;

ArbolBinario::ArbolBinario() : raiz(nullptr)
{
}

void ArbolBinario::agregarNodo(int _valor)
{
	//llamada a funcion recursiva de insertar
	raiz = agregarNodoRec(raiz, _valor);
}

NodoArbol* ArbolBinario::agregarNodoRec(NodoArbol* _raiztemp, int _valor)
{
	//caso base

	if (_raiztemp == nullptr)
	{
		NodoArbol* nuevo = new NodoArbol(_valor, nullptr, nullptr);
		_raiztemp = nuevo;
	}
	else if (_valor > _raiztemp->getValor()) //Enviar el nodo a la derecha
	{
		_raiztemp->setHijoDerecho(agregarNodoRec(_raiztemp->getHijoDerecho(), _valor));
	}
	else if (_valor < _raiztemp->getValor()) //Enviar el nodo a la izquierda
	{
		_raiztemp->setHijoIzquierdo(agregarNodoRec(_raiztemp->getHijoIzquierdo(), _valor));
	}

	return _raiztemp;
}

int ArbolBinario::sumatoriaRec(NodoArbol* _raiztemp)
{
	if (_raiztemp == nullptr)
	{
		return 0;
	}

	return _raiztemp->getValor() + sumatoriaRec(_raiztemp->getHijoDerecho()) + sumatoriaRec(_raiztemp->getHijoIzquierdo());
}

void ArbolBinario::imprimirArbol()
{
	imprimirRec(raiz);
	cout << endl;
}

int ArbolBinario::sumatoriaNodos()
{
	return sumatoriaRec(raiz);
}

//preorden
void ArbolBinario::imprimirRec(NodoArbol* _raiztemp)
{
	if (_raiztemp == nullptr) return;

	cout << "[ " << _raiztemp->getValor() << " ] ";
	imprimirRec(_raiztemp->getHijoIzquierdo());
	imprimirRec(_raiztemp->getHijoDerecho());
}
