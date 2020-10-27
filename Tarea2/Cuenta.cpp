#include "Cuenta.h"
#include <iostream>

using namespace std;

Cuenta::Cuenta(): saldo(0)
{
}

Cuenta::Cuenta(int _saldo) : saldo(_saldo)
{
	if (_saldo < 0) {
		cout << "Ingreso un saldo menor a 0, saldo inicial es $0" << endl;
		this->saldo = 0;
	}
}

void Cuenta::abonar(int suma)
{
	this->saldo += suma;
	cout << "El nuevo saldo es: " << saldo << " dolares" << endl;
}

void Cuenta::cargar(int cargo)
{
	if (saldo - cargo < 0) {
		cout << "No se puede retirar esta cantidad de dinero!\nNo tiene los fondos!" << endl;
		return;
	}
	this->saldo -= cargo;
	cout << "Se retiraron " << cargo << " con exito!!" << endl;
	cout << "Nuevo saldo es: " << saldo << " dolares" << endl;
}

void Cuenta::obtenerSaldo()
{
	cout << "El saldo actual es " << saldo << " dolares!" << endl;
}
