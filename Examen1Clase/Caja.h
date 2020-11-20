#pragma once
#ifndef CAJA_H
#define CAJA_H

#include <iostream>

class Caja
{
private:
	friend Caja& operator+(const Caja&, const Caja&);

public:
	int largo, ancho, alto;

	Caja();
	Caja(int ancho, int largo, int alto);

	void setAncho(int);
	void setLargo(int);
	void setAlto(int);

	int getAncho();
	int getLargo();
	int getAlto();

	float obtenerVolumen();
};

#endif // !CAJA_H