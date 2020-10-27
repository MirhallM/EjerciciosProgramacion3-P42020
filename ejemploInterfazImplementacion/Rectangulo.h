#pragma once

#ifndef RECTANGULO_H
#define RECTANGULO_H

//Definicion de clase en C++

class Rectangulo
{
public:
	Rectangulo(); //Prototipo de constructor
	Rectangulo(int, int); //<prototipo de constructor con parametro

	void setBase(int);
	void setAltura(int);

	int getBase();
	int getAltura();

	int getArea();
	int getPerimetro();

private:
	int base, altura;
};
#endif // !RECTANGULO_H
