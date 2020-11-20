#include "Caja.h"

Caja::Caja() : ancho(0), largo(0), alto(0)
{
}

Caja::Caja(int _ancho, int _largo, int _alto)
{
	this->ancho = _ancho;
	this->largo = _largo;
	this->alto = _alto;
}

void Caja::setAncho(int _ancho)
{
	ancho = _ancho;
}

void Caja::setLargo(int _largo)
{
	largo = _largo;
}

void Caja::setAlto(int _alto)
{
	alto = _alto;
}

int Caja::getAncho()
{
	return this->ancho;
}

int Caja::getAlto()
{
	return this->alto;
}

int Caja::getLargo()
{
	return this->largo;
}

float Caja::obtenerVolumen()
{
	return ancho * alto * largo;
}

Caja& operator+(const Caja& a, const Caja& b)
{
	Caja suma;
	suma.alto = a.alto + b.alto;
	suma.ancho = a.ancho + b.ancho;
	suma.largo = a.largo + b.largo;

	return suma;
}
