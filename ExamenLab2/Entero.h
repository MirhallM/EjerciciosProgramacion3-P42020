#pragma once

#include "NodoBase.h"

class Entero : public NodoBase
{
private:
	int entero;
public:
	Entero(int numero);
	void printNodo();
};

