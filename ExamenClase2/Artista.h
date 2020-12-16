#pragma once
#include "Album.h"

class Artista
{
private:
	Album* primerAlbum;
	char* nombreArtistico;
	int anioNacimiento;
	bool estaVacia();
public:
	Artista(const char* _nombre, int anio);

	char* getNombre();
	int getAnioNacimiento();
	void setNombre(const char* _nombre);
	void setAnioNacimiento(int _anio);

	int totalSencillos();
	Album* buscarAlbum(char* nombre);
	int cantidadAlbumes();
	int totalMinutosReproduccion();
	void guardarEnArchivo();
	void agregarAlbum();
};

