#pragma once
#ifndef SIMULADOR_H
#define SIMULADOR_H

#include <vector>

class Simulador
{
private:
	std::vector<int> simulador;

public:
	Simulador();
	//1. Inserciones
	void insertarInicio(int _valor);
	void agregarFinal(int _valor);
	bool insertarPosicion(int pos, int valor);

	//2. Eliminaciones
	void eliminarPorValor(int _valor);
	void eliminarPorPosicion(int pos);

	//3.Busqueda
	int busqueda(int _valor);

	void mostrar();

	void limpiarVector();
	int getSize();
	int getPos(int pos);
};

#endif // !SIMULADOR_H



