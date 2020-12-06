#pragma once

#ifndef ARBOLEMPRESA_H
#define ARBOLEMPRESA_H

#include "NodoEmpleado.h"

class ArbolEmpresa
{
private:

	
	NodoEmpleado* raiz;
	void imprimirRec(NodoEmpleado* _raiztemp);
	NodoEmpleado* agregarNodoRec(NodoEmpleado* _raiztemp, int codigo, char* nombre, float salario);
	float sumatoriaRec(NodoEmpleado* _raiztemp);
	NodoEmpleado* buscarEmpleadoRec(NodoEmpleado* raiztemp, int codigo);
	int cantidadEmpleadosRec(NodoEmpleado* nodo);
public:
	ArbolEmpresa();
	void agregarNodo(int _valor, char* _nombre, float _salario);
	void imprimirArbol();
	void buscarEmpleado(int codigo);
	float promedioSalarios();
	float sumatoriaSalarios();
	int cantidadEmpleados();
};

#endif // !ARBOLEMPRESA_H

