
#include <iostream>
#include <iomanip>
#include <conio.h>
#include "Cuenta.h"
#include "CuentaAhorros.h"
#include "CuentaCheques.h"
#include <vector>
#include "Main.h"

using namespace std;

void MenuPrincipal(int& opcion)
{
	while (true) {
		cout << "1. Crear nueva cuenta" << endl;
		cout << "2. Obtener saldo" << endl;
		cout << "3. Abonar" << endl;
		cout << "4. Cargar" << endl;
		cout << "5. Obtener intereses" << endl;
		cout << "6. Obtener cuentas" << endl;
		cout << "7. Salir del sistema" << endl;
		cout << "Ingrese una opcion: ";
		cin >> opcion;
		if (opcion < 0 || opcion > 7)
		{
			cout << "Ingrese una opcion correcta" << endl;
		}
		else
		{
			break;
		}
	}
}

int main()
{
	vector<Cuenta> cuentas;
	bool Corriendo = true;
	
	cout << fixed << setprecision(2);

	cout << "--- A C T I V I D A D  4 ---" << endl;

	while (Corriendo)
	{
		int opcion = 0;
		MenuPrincipal(opcion);
		Opciones(opcion, cuentas, Corriendo);
	}
	_getch();
}

void Opciones(int opcion, std::vector<Cuenta>& cuentas, bool& Corriendo)
{
	switch (opcion)
	{
	case 1:  // Crear nueva cuenta
		CrearCuenta(cuentas);
		break;

	case 2:  // Obtener saldo
		break;

	case 3:  // Abonar
		break;

	case 4:  // Cargar
		break;

	case 5:  // Obtener intereses
		break;

	case 6:  // Obtener Cuentas
		break;

	case 7:  // Salir del sistema
		Corriendo = false;
		break;

	default:
		break;
	}
}

void CrearCuenta(std::vector<Cuenta>& cuentas)
{
	string numeroCuenta;
	int tipoCuenta;
	double saldoInicial;

	cout << endl << "C R E A R  N U E V A  C U E N T A " << endl;
	cout << "Ingrese el numero de cuenta: ";
	cin >> numeroCuenta;
	while (true)
	{
		cout << "Ingrese el tipo de cuenta" << endl;
		cout << "1. Cuenta normal" << endl;
		cout << "2. Cuenta ahorros" << endl;
		cout << "3. Cuenta cheques" << endl;
		cout << "Ingrese opcion: ";
		cin >> tipoCuenta;
		if (tipoCuenta < 1 || tipoCuenta > 3)
		{
			cout << "Ingrese una opcion entre 1 y 3!" << endl;
		}
		else
		{
			break;
		}
	}
	cout << "Ingrese el saldo inicial:";
	cin >> saldoInicial;
	if (tipoCuenta == 1)
	{
		cuentas.push_back(Cuenta(numeroCuenta, saldoInicial));
	}
	else if (tipoCuenta == 2)
	{
		double tasa;
		cout << "Ingrese tasa de interes: ";
		cin >> tasa;

		cuentas.push_back(CuentaAhorros(numeroCuenta, saldoInicial, tasa));
	}
	else if (tipoCuenta == 3)
	{
		double couta;
		cout << "Ingrese la couta de transaccion para la cuenta";
		cin >> couta;

		cuentas.push_back(CuentaCheques(numeroCuenta, saldoInicial, couta));
	}
}
