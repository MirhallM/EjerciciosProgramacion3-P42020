#include "SeccionLista.h"
#include <iostream>
#include <cstring>

using namespace std;

bool SeccionLista::estaVacia()
{
	return primero == nullptr;
}

SeccionLista::SeccionLista() : primero(nullptr)
{
}

void SeccionLista::agregarAlumno(const char* nombre, float nota)
{

	if (nota < 0 || nota > 100)
	{
		cout << "Nota no puede ser menor a 0 o mayor a 100" << endl;
		return;
	}

	auto* nuevo = new AlumnoNodo(nombre, nota, nullptr);

	if (estaVacia() || strcmp(primero->getNombre(), nombre) >= 0)
	{
		nuevo->setSiguiente(primero);
		primero = nuevo;
	}
	else {
		AlumnoNodo* actual = primero;
		while (actual->getSiguiente() != nullptr && strcmp(actual->getSiguiente()->getNombre(), nombre) < 0)
		{
			actual = actual->getSiguiente();
		}
		nuevo->setSiguiente(actual->getSiguiente());
		actual->setSiguiente(nuevo);
	}

	cout << "Se agrego alumno nuevo!" << endl;
}

void SeccionLista::listarSeccion()
{
	if (estaVacia())
	{
		cout << "No hay estudiantes en la lista de esta seccion!" << endl;
		return;
	}

	AlumnoNodo* actual = primero;

	do
	{
		cout << "Alumno { nombre: " << actual->getNombre() << ", nota: " << actual->getNota() << " }" << endl;
		actual = actual->getSiguiente();
	} while (actual != nullptr);
}

int SeccionLista::cantidadAprobados()
{
	int cuenta = 0; 

	if (!estaVacia())
	{
		AlumnoNodo* actual = primero;

		do
		{
			if (actual->getNota() >= 70) { 
				cuenta++; 
			}
			actual = actual->getSiguiente();
		} while (actual != nullptr);
	}
	return cuenta;
}
