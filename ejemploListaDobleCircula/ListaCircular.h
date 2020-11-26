#pragma once
#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H

#include "Nodo.h"

class ListaCircular
{
private: 
	Nodo* head;
	Nodo* tail;

	bool estaVacia();   //Es privada porque solo se usa de manera interna en la lista, no es una funcion que el main podra acceder a
	
public:
	ListaCircular();
	void agregarNodo(const char* _valor);
	void eliminarNodo(char* _valor);
	void imprimirLista();
};
#endif // !LISTACIRCULAR_H


