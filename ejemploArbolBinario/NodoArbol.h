#pragma once

#ifndef NODOARBOL_H
#define NODOARBOL_H

class NodoArbol
{
private:
	int valor;
	NodoArbol* hijoDerecho;
	NodoArbol* hijoIzquierdo;

public:
	NodoArbol(int _valor, NodoArbol*, NodoArbol*);
	int getValor();
	NodoArbol* getHijoDerecho();
	NodoArbol* getHijoIzquierdo();

	void setValor(int _valor);
	void setHijoDerecho(NodoArbol*);
	void setHijoIzquierdo(NodoArbol*);

};

#endif // !NODOARBOL_H


