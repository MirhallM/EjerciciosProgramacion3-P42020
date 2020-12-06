#include <iostream>
#include "Empresa.h"
#include "main.h"

using namespace std;

ArbolEmpresa arbol;

void cargarArbol()
{
	arbol = Empresa::crearArbolDeArchivo();
}

void AgregarEmpleado()
{
	//Agregar empleados
	int codigo;
	char nombre[20];
	float salario;

	cout << "Ingrese el codigo del nuevo empleado: ";
	cin >> codigo;
	cout << "Ingrese el nombre del nuevo empleado: ";
	cin >> nombre;
	cout << "Ingrese el salario del nuevo empleado: ";
	cin >> salario;
	arbol.agregarNodo(codigo, nombre, salario);
	Empresa::agregarEmpleado(codigo, nombre, salario);
}

void TextoDeMenu()
{
	cout << endl;
	cout << "1. Agregar empleado" << endl;
	cout << "2. Buscar empleado" << endl;
	cout << "3. Cantidad de empleados totales" << endl;
	cout << "4. Total de salarios de todos los empleados" << endl;
	cout << "5. Promedio de salarios" << endl;
	cout << "6. Imprimir archivo de empleaods" << endl;
	cout << "7. Salir del Sistema" << endl;
	cout << "Ingrese una opcion: ";
}

void Menu(int subMenu, bool& corriendo)
{
	switch (subMenu)
	{
	case 1:
		AgregarEmpleado();
		break;
	case 2:
		BuscarEmpleado();
		break;
	case 3:
		//Cantidad de empleados
		cout << "Numero de empleados en la empresa: " << arbol.cantidadEmpleados() << endl;
		break;
	case 4:
		//Suma de todos los salarios
		cout << "Suma de todos los salarios de empleados: " << arbol.sumatoriaSalarios() << ".USD" << endl;
		break;
	case 5:
		//Promedio de los salarios
		cout << "Promedio de salario en la empresa: " << arbol.promedioSalarios() << ".USD" << endl;
		break;
	case 6:
		Empresa::imprimirEmpleados();
		break;
	case 7:
		corriendo = false;
		break;
	default: break;
	}
}

void BuscarEmpleado()
{
	//Buscar empleado
	int codigo;

	cout << "Ingrese codigo de empleado a buscar: ";
	cin >> codigo;

	arbol.buscarEmpleado(codigo);
}
