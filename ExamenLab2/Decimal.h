#pragma once

#include "NodoBase.h"

class Decimal : public NodoBase
{
private:
	float valor;
public:
	Decimal(float num);
	void printNodo();
};

