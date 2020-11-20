#pragma once

#ifndef CADENA1_H
#define CADENA1_H

#include <iostream>

class Cadena
{
	friend Cadena& operator+(const Cadena&, const Cadena&);
	friend std::ostream& operator<<(std::ostream&, const Cadena&);

public:
	Cadena();
	Cadena(const char*);

	Cadena subcadena(int, int);
	int tamanio();
	char at(int);

private:
	char* contenido;
};

#endif // !CADENA1_H