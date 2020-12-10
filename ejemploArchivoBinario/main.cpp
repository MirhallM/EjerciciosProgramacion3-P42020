#include "EntidadEducativa.h"
#include <conio.h>
#include <iostream>
#include "main.h"

using namespace std;

int main()
{
	int opcion;
	bool corriendo = true;

	cout << "* * * E N T I D A D  E D U C A T I V A * * *" << endl;

	do
	{
		MenuOpciones(opcion);
		Acciones(opcion, corriendo);
	} while (corriendo);
}

void Acciones(int opcion, bool& corriendo)
{
	switch (opcion)
	{
	case 1:
		EntidadEducativa::agregarAlumno();
		break;
	case 2:
		EntidadEducativa::agregarMaterias();
		break;
	case 3:
		EntidadEducativa::NuevaNota();
		break;
	case 4:
		EntidadEducativa::consultarAlumnos();
		break;
	case 5:
		EntidadEducativa::consultarMaterias();
		break;
	case 6:
		EntidadEducativa::consultarNotas();
		break;
	case 7:
		corriendo = false;
		break;
	}
}

void MenuOpciones(int& opcion)
{
	do
	{
		cout << endl;
		cout << "1. Ingresar un nuevo alumno al sistema" << endl;
		cout << "2. Ingresar una nueva materia al sistema" << endl;
		cout << "3. Ingresar una nueva nota de alumno a una materia existente" << endl;
		cout << "4. Imprimir listado de alumnos" << endl;
		cout << "5. Imprimir listado de materias y sus unidades valorativas" << endl;
		cout << "6. Imprimir listado de todas las notas en el sistema" << endl;
		cout << "7. Salir del sistema" << endl;
		cout << "Ingrese una opcion: ";
		cin >> opcion;
		cout << endl;
	} while (opcion <= 0 || opcion > 7);
}
