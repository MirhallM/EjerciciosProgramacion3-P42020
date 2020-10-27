#pragma once

#ifndef RACIONAL_H
#define RACIONAL_H

class Racional
{
private:
	int numerador, denominador;
public:
	Racional();
	Racional(int, int);

	void ImprimirRacional(); //17/6
	void ImprimirDecimal(); //2.8333

	Racional suma(Racional r2);
};

//Prototipo de funcion externa (clase) de suma
Racional suma(Racional, Racional);
#endif // !RACIONAL_H

