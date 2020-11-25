#pragma once

#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include "Nodo.h"

class ListaSimple
{
private:
	Nodo* head;
	void nodoSwap(Nodo* Nodo1, Nodo* Nodo2);
	bool estaVacia();
	int obtenerTamanio();
public:
	ListaSimple();
	Nodo* obtenerPosNodo(int _posicion);
	
	void addNode(int);
	Nodo* searchNode(int);
	void deleteNode(int);
	void ordernarLista();
	

	void printList();

};

#endif // !LISTASIMPLE_H