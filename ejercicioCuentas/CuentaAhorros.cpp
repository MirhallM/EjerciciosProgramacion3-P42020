#include "CuentaAhorros.h"

#include <iostream>
using namespace std;

CuentaAhorros::CuentaAhorros(string numeroCuenta, double saldoInicial, double _tasaInteres)
	: Cuenta(numeroCuenta, saldoInicial), tasaInteres(_tasaInteres)
{

	if (_tasaInteres >= 0)
		tasaInteres = _tasaInteres;
	else
		throw invalid_argument("Tasa de interes debe ser >= 0.0");
}

double CuentaAhorros::calcularInteres()
{
	return obtenerSaldo() * tasaInteres;
}