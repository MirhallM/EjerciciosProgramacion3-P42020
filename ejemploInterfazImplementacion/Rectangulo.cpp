#include "Rectangulo.h"

//Implementacion de constructor sin parametros
Rectangulo::Rectangulo() : base(0), altura(0)
{}

//Implementacion de constructor con parametros
Rectangulo::Rectangulo(int _base, int _altura) : base(_base), altura(_altura)
{}

void Rectangulo::setBase(int _base)
{
	base = _base;
}
void Rectangulo::setAltura(int _altura) 
{
	this->altura = _altura;
}

int Rectangulo::getAltura()
{
	return altura;
}

int Rectangulo::getBase()
{
	return base;
}