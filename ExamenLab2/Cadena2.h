#pragma once

#include "NodoBase.h"
#include <string>

class Cadena2 : public NodoBase
{
private:
	char* valor;
public:
	Cadena2(const char* str);
	void printNodo();
};

