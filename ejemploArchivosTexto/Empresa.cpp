#include "Empresa.h"
#include <fstream> //Permite uso de archivos en c++
#include <iostream>

using namespace std;

ArbolEmpresa Empresa::crearArbolDeArchivo()
{
	ArbolEmpresa arbol = ArbolEmpresa();

	ifstream archivoEmpleados("empleados.dat", ios::in);

	if (!archivoEmpleados)
	{
		cout << "Error al intentar abrir el archivo .dat" << endl;
		return arbol;
	}

	int codigoEmpleado;
	char nombreEmpleado[20];
	float salarioEmpleado;

	while (archivoEmpleados >> codigoEmpleado >> nombreEmpleado >> salarioEmpleado)
	{
		arbol.agregarNodo(codigoEmpleado, nombreEmpleado, salarioEmpleado);
	}

	archivoEmpleados.close();

	return arbol;
}

void Empresa::agregarEmpleado(int codigo, char* nombre, float salario)
{
	/* formatos para manipular archivos
	* lectura   -> ifstream
	* escritura -> ofstream
	*/

	//Valida si el archivo existe o hubo un problema al abrirlo
	ofstream archivoEmpleados("empleados.dat", ios::app);
	if (!archivoEmpleados)
	{
		cout << "Error al intentar abrir archivo empleados.dat" << endl;
		return;
	}

	archivoEmpleados << codigo << ' ' << nombre << ' ' << salario << endl;

	cout << "Empleado almacenado!" << endl;

	archivoEmpleados.close();
}

void Empresa::imprimirEmpleados()
{
	//lectura de un archivo de texto
	ifstream archivoEmpleados("empleados.dat", ios::in);

	if (!archivoEmpleados)
	{
		cout << "Error al intentar abrir el archivo .dat" << endl;
		return;
	}

	cout << endl << endl << "* * * C O N S U L T A  D E  E M P L E A D O S * * *" << endl << endl;

	int codigoEmpleado;
	char nombreEmpleado[20];
	float salarioEmpleado;

	cout << "Codigo\tNombre\tSalario" << endl;

	while (archivoEmpleados >> codigoEmpleado >> nombreEmpleado >> salarioEmpleado)
	{
		cout << codigoEmpleado << '\t' << nombreEmpleado << '\t' << salarioEmpleado << endl;
	}

	archivoEmpleados.close();
}
