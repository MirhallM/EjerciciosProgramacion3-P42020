#include <iostream>
#include "SeccionLista.h"

using namespace std;

void agregarAlumno(SeccionLista& lista)
{
	string nombre;
	float nota; 

	cout << "Ingrese el nombre del nuevo alumno: ";
	cin >> nombre;
	cout << "Ingrese la nota del estudiante: ";
	cin >> nota;

	lista.agregarAlumno(nombre.c_str(), nota);
}

int main()
{
	SeccionLista sl;
	int menuPrincipal = 0;
	bool Menu{ true };
	cout << " * * * A C T I V I D A D  6 * * *" << endl;
	do {
		cout << endl;
		cout << "1. Agregar Alumno" << endl;
		cout << "2. Lista de Alumnos" << endl;
		cout << "3. Cuenta de alumnos aprobados" << endl;
		cout << "4. Salir del Sistema" << endl;
		cout << "Ingrese una opcion: ";
		cin >> menuPrincipal;

		if (menuPrincipal > 0 && menuPrincipal <= 4)
		{
			switch (menuPrincipal)
			{
			case 1:
                agregarAlumno(sl);
				break;
			case 2:
				sl.listarSeccion();
				break;
			case 3:
				cout << "Cantidad de Alumnos aprobados: " << sl.cantidadAprobados() << endl;
				break;
			case 4:
				Menu = false;
				break;
            default:
                break;
			}
		}
	} while (Menu);
}