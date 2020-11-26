#pragma once
#ifndef NODO_H
#define NODO_H

class Nodo
{
private:
	char* valor; //Podria ser una string pero solo para aprender como reservar espacios de memoria (y manejarlos) es que usamos un arreglo de chars
	Nodo* siguiente;
	Nodo* anterior;
public:
	Nodo();   //Constructor sin parametros
	Nodo(const char* _valor, Nodo* siguiente, Nodo* anterior); //Constructor con todos los parametros

	void setValor(const char* _valor);
	void setSiguiente(Nodo* siguiente);
	void setAnterior(Nodo* anterior);

	char* getValor();
	Nodo* getSiguiente();
	Nodo* getAnterior();
};

#endif NODO_H

