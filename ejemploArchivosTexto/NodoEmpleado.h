#pragma once

#ifndef NODOEMPLEADO_H
#define NODOEMPLEADO_H

class NodoEmpleado
{
private:
	int codigo;
	char* nombre;
	float salario;
	NodoEmpleado* hijoDerecho;
	NodoEmpleado* hijoIzquierdo;

public:
	NodoEmpleado(int _codigo, char* _nombre, float _salario, NodoEmpleado*, NodoEmpleado*);
	int getCodigo();
	float getSalario();
	char* getNombre();
	NodoEmpleado* getHijoDerecho();
	NodoEmpleado* getHijoIzquierdo();
	void setHijoDerecho(NodoEmpleado*);
	void setHijoIzquierdo(NodoEmpleado*);

};

#endif // !NODOEMPLEADO_H


