
#include <iostream>
#include <iomanip>
#include <conio.h>
#include "Cuenta.h"
#include "CuentaAhorros.h"
#include "CuentaCheques.h"
#include <vector>
#include "Main.h"

using namespace std;

int buscarCuenta(const string& cuenta, vector<Cuenta>& cuentas)
{
    int counter = 0;
    for (Cuenta cuenta1 : cuentas)
    {
        if (cuenta1.getNumeroCuenta()._Equal(cuenta))
        {
            return counter;
        }
        counter++;
    }
    return -1;
}

void ObtenerIntereses(vector<Cuenta>& cuentas)
{
	string buscar;
	cout << "Ingrese el numero de cuenta a obtener intereses: ";
	cin >> buscar;
	int result = buscarCuenta(buscar, cuentas);
	if (result != -1)
	{

	}
}

void Cargar(vector<Cuenta>& cuentas)
{
	int cargo = 0;
	string buscar;
	cout << "Ingrese el numero de cuenta a cargar: ";
	cin >> buscar;
	cout << "Ingrese la cantidad a cargar: ";
	cin >> cargo;

	int result = buscarCuenta(buscar, cuentas);
	if (result != -1)
	{
		cuentas.at(result).cargar(cargo);
	}
	else
	{
		cout << "No se pudo encontrar cuenta!" << endl;
	}
}

void Abonar(vector<Cuenta>& cuentas)
{
	int abono = 0;
	string buscar;
	cout << "Ingrese el numero de cuenta a abonar: ";
	cin >> buscar;
	cout << "Ingrese cantidad a abonar: ";
	cin >> abono;
	int result = buscarCuenta(buscar, cuentas);
	if (result == -1)
	{
		cuentas.at(result).abonar(abono);
		cout << "Se abono con exito!" << endl;
	}
	else
	{
		cout << "No se pudo encontrar la cuenta!" << endl;
		cout << "Logicamente no se pudo abonar tampoco!" << endl;
	}
}

void ObtenerSaldo(std::vector<Cuenta>& cuentas)
{
	string buscar;
	cout << "Ingrese un numero de cuenta a buscar: ";
	std::cin >> buscar;
	int result = buscarCuenta(buscar, cuentas);
	if (result != -1)
	{
		double saldo = cuentas.at(result).obtenerSaldo();
		cout << "Saldo de la cuenta es " << saldo << "$" << endl;
	}
	else
	{
		cout << "No se pudo encontrar esa cuenta!" << endl;
	}
}
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

void Opciones(int opcion, std::vector<Cuenta>& cuentas, bool& Corriendo)
{
    switch (opcion)
    {
        case 1:  // Crear nueva cuenta
            CrearCuenta(cuentas);
            break;

        case 2:  // Obtener saldo
            ObtenerSaldo(cuentas);
            break;

        case 3:  // Abonar
            Abonar(cuentas);
            break;

        case 4:  // Cargar
            Cargar(cuentas);
            break;

        case 5:  // Obtener intereses
            ObtenerIntereses(cuentas);
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
		cuentas.emplace_back(numeroCuenta, saldoInicial);
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