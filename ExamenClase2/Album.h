#pragma once

#include "Sencillo.h"

class Album
{
public:
	char* nombreAlbum;
	int anioPublicacion;
	char* genero;
	Sencillo* primerSencillo;
	Album* siguienteAlbum;
	bool estaVacia();
public:
	//Funciones de Nodo
	Album(const char* _nombreAlbum, int _anio,const char* _genero, Album* siguiente);
	char* getNombre();
	int getAnioPublicacion();
	char* getGenero();
	Album* getSiguiente();
	void setSiguiente(Album* sig);

	//Funciones Lista
	int duracion();
	int cantidadSencillos();
	void agregarSencillo();
};

