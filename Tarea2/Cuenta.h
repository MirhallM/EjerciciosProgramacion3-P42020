#pragma once
#ifndef CUENTA_H
#define CUENTA_H
class Cuenta
{
private:
	int saldo;
public:
	Cuenta();
	Cuenta(int);

	void abonar(int);
	void cargar(int);
	void obtenerSaldo();
	

};


#endif // !Cuenta

