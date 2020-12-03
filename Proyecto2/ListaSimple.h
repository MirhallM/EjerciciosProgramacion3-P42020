#pragma once
#include "Simulador.h"
#include "NodoSimple.h"

class ListaEnlazadaSimple : public Simulador
{
private:
	NodoSimple* head;
	bool estaVacia();
public:
	ListaEnlazadaSimple();

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

