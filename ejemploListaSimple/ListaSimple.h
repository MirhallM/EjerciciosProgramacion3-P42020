#pragma once

#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include "Nodo.h"

class ListaSimple
{
private:
	Nodo* head;

public:
	ListaSimple();

	bool estaVacia();
	void addNode(int);
	Nodo* searchNode(int);
	void deleteNode(int);

	void printList();

};

#endif // !LISTASIMPLE_H