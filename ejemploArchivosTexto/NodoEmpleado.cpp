#include "NodoEmpleado.h"
#include <string.h>

NodoEmpleado::NodoEmpleado(int _codigo, char* _nombre, float _salario, NodoEmpleado* _derecho, NodoEmpleado* _izquierdo) : salario(_salario),  codigo(_codigo), hijoDerecho(_derecho), hijoIzquierdo(_izquierdo)
{
	nombre = new char[strlen(_nombre)];
	strcpy_s(nombre, strlen(_nombre) + 1, _nombre);
}

void NodoEmpleado::setHijoDerecho(NodoEmpleado* _derecho)
{
	this->hijoDerecho = _derecho;
}

void NodoEmpleado::setHijoIzquierdo(NodoEmpleado* _izquierdo)
{
	this->hijoIzquierdo = _izquierdo;
}

int NodoEmpleado::getCodigo()
{
	return codigo;
}

float NodoEmpleado::getSalario()
{
	return salario;
}

char* NodoEmpleado::getNombre()
{
	return nombre;
}

NodoEmpleado* NodoEmpleado::getHijoDerecho()
{
	return hijoDerecho;
}

NodoEmpleado* NodoEmpleado::getHijoIzquierdo()
{
	return hijoIzquierdo;
}
