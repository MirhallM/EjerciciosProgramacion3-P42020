#include "AlumnoNodo.h"
#include <iostream>
#include <cstring>

AlumnoNodo::AlumnoNodo() : nombre(nullptr), nota(0), siguiente(nullptr)
{
}

AlumnoNodo::AlumnoNodo(const char* _nombre, float _nota, AlumnoNodo* _siguiente) : nota(_nota), siguiente(_siguiente)
{
	nombre = new char[strlen(_nombre)];
	strcpy_s(nombre, strlen(_nombre) + 1, _nombre);
}

void AlumnoNodo::setNombre(const char* _nombre)
{
	if (nombre != nullptr) delete nombre;

	nombre = new char[strlen(_nombre)];
	strcpy_s(nombre, strlen(_nombre) + 1, _nombre);
}

void AlumnoNodo::setNota(float _nota)
{
	this->nota = _nota;
}

void AlumnoNodo::setSiguiente(AlumnoNodo* _siguiente)
{
	this->siguiente = _siguiente;
}

char* AlumnoNodo::getNombre()
{
	return nombre;
}

float AlumnoNodo::getNota() const
{
	return nota;
}

AlumnoNodo* AlumnoNodo::getSiguiente()
{
	return siguiente;
}
