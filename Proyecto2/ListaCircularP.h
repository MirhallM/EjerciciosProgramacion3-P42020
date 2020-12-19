#pragma once

#include "NodoDoble_Circular.h"
#include "Simulador.h"

class ListaCircularP : public Simulador
{
private:
	NodoBase* head, tail;

	bool estaVacia();
public:
	ListaCircularP();

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

