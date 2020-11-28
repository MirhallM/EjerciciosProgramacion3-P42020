#pragma once
#ifndef SECCIONLISTA_H
#define SECCIONLISTA_H

#include "AlumnoNodo.h"

class SeccionLista
{
private:
	AlumnoNodo* primero;
	bool estaVacia();

public:
	SeccionLista();
	void agregarAlumno(const char* nombre, float nota);
	void listarSeccion();
	int cantidadAprobados(); //Mayor o igual a 70
};
#endif // !SECCIONLISTA_H


