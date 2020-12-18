#pragma once

#include "NodoBase.h"

class Caracter : public NodoBase
{
private:
	char valor;
public:
	Caracter(char car);
	void printNodo();
};

