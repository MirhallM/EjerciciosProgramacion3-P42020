#pragma once

#ifndef CUENTA_H
#define CUENTA_H

class Cuenta
{
public:
	Cuenta(string, double);
	void abonar(double);
	bool cargar(double);
	double obtenerSaldo();
	void actualizarSaldo(double);
	std::string getNumeroCuenta();
	void setNumeroCuenta(string);

private:
	std::string numeroCuenta;
	double saldo;
};

#endif