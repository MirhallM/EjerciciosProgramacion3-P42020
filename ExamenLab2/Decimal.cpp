#include "Decimal.h"
#include <iostream>

using namespace std;

Decimal::Decimal(float num) : valor()
{
	this->setSiguiente(nullptr);
}

void Decimal::printNodo()
{
	cout << "Decimal: " << this->valor << endl;
}
