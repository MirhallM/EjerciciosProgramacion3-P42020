#pragma once

#ifndef CUENTA_H
#define CUENTA_H

#include <xstring>

class Cuenta
{
public:
	Cuenta(std::string, double);
	void abonar(double);
	bool cargar(double);
	double obtenerSaldo();
	void actualizarSaldo(double);
	std::string getNumeroCuenta();
	void setNumeroCuenta(std::string);

private:
	std::string numeroCuenta;
	double saldo;
};

#endif