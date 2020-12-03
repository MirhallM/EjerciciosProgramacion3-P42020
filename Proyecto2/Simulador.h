#pragma once

#include "NodoBase.h"

class Simulador 
{
public:
	//1. Inserciones
	virtual void insertarInicio(int _valor);
	virtual void agregarFinal(int _valor);
	virtual void insertarPosicion(int pos, int valor);

	//2. Eliminaciones
	virtual void eliminarPorValor(int _valor);
	virtual void eliminarPorPosicion(int pos);

	//3.Busqueda
	virtual NodoBase* busqueda(int _valor);

	virtual void mostrar();
};

