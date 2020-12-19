#pragma once
#ifndef LISTADOBLE_H
#define LISTADOBLE_H

#include "NodoDoble_Circular.h"
#include "Simulador.h"

class ListaDoble : public Simulador
{
private:
	NodoDoble_Circular* head;
	NodoDoble_Circular* tail;

	bool estaVacia();
public:
	ListaDoble();
	
	//Inherited
	//1. Inserciones
	void insertarInicio(int _valor);
	void agregarFinal(int _valor);
	void insertarPosicion(int pos, int valor);

	//2. Eliminaciones
	void eliminarPorValor(int valor);
	void eliminarPorPosicion(int pos);

	//3.Busqueda
	NodoBase* busqueda(int _valor);

	//4. Mostrar
	void mostrar();
};


#endif // !LISTADOBLE_H
