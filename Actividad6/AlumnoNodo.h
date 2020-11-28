#pragma once

#ifndef ALUMNONODO_H
#define ALUMNONODO_H

class AlumnoNodo
{
private:
	char* nombre;
	float nota;
	AlumnoNodo* siguiente;
public:
	AlumnoNodo();
	AlumnoNodo(const char* _nombre, float _nota, AlumnoNodo* _siguiente);

	void setNombre(const char* _nombre);
	void setNota(float _nota);
	void setSiguiente(AlumnoNodo* _siguiente);

	char* getNombre();
	float getNota();
	AlumnoNodo* getSiguiente();
};
#endif // !ALUMNONODO_H

