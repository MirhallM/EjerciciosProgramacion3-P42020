#include "Empresa.h"
#include <fstream> //Permite uso de archivos en c++
#include <iostream>

using namespace std;

void Empresa::agregarEmpleados()
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

	int cantidadEmpleados = 0;
	cout << "Ingrese cantidad de empleados a agregar: ";
	cin >> cantidadEmpleados;

	int codigoEmpleado;
	char nombreEmpleado[20];
	float salarioEmpleado;

	cout << endl << endl << "* * * I N G R E S O  D E  E M P L E A D O S * * *" << endl << endl;
	for (int i = 0; i < cantidadEmpleados; i++)
	{
		cout << "Empleado " << (i + 1) << ": " << endl;

		cout << "Ingrese codigo de Empleado: ";
		cin >> codigoEmpleado;
		
		cout << "Ingrese nombre de empleado: ";
		cin >> nombreEmpleado;

		cout << "Ingrese salario de Empleado: ";
		cin >> salarioEmpleado;

		archivoEmpleados << codigoEmpleado << ' ' << nombreEmpleado << ' ' << salarioEmpleado << endl;

		cout << "Empleado almacenado!" << endl;
	}

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
