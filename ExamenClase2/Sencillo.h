#pragma once
class Sencillo
{
public:
	char* nombreCancion;
	int duracion;
	Sencillo* sigueinteSencillo;

public:
	Sencillo(const char* _nombreCancion, int duracion, Sencillo* sig);
	int getDuracion();
	void setDuracion(int _duracion);
	char* getNombre();
	void setNombre(const char* _nombre);
	Sencillo* getSiguiente();
	void setSiguiente(Sencillo* sig);
};

