#include "EntidadEducativa.h"
#include <fstream>
#include <iostream>

using namespace std;

int EntidadEducativa::buscarAlumno(int codigo)
{
	ifstream File("alumnos.bin", ios::in | ios::binary);
	
	if (!File)
	{
		cout << "Error al intentar abrir archivo de alumnos.bin" << endl;
		return -1;
	}

	alumno actual; 
	File.seekg(0, ios::beg);

	File.read(reinterpret_cast<char*>(&actual), sizeof(alumno));

	while (!File.eof())
	{
		if (actual.cuenta == codigo)
		{
			File.close();
			return 1;
		}
		File.read(reinterpret_cast<char*>(&actual), sizeof(alumno));
	}
	File.close();
	return 0;
}

int EntidadEducativa::buscarMateria(int codigo)
{
	ifstream File("materias.bin", ios::in | ios::binary);

	if (!File)
	{
		cout << "Error al intentar abrir archivo de alumnos.bin" << endl;
		return -1;
	}

	materia actual;

	File.seekg(0, ios::beg);

	File.read(reinterpret_cast<char*>(&actual), sizeof(materia));

	while (!File.eof())
	{
		if (actual.codigoMateria == codigo)
		{
			File.close();
			return 1;
		}
		File.read(reinterpret_cast<char*>(&actual), sizeof(materia));
	}
	File.close();
	return 0;
}

void EntidadEducativa::agregarAlumno()
{
	ofstream alumnosFile("alumnos.bin", ios::out | ios::app | ios::binary);

	if (!alumnosFile)
	{
		cout << "Error al intentar abrir el archivo .bin" << endl;
		return;
	}

	cout << "* * * I N G R E S O  D E  A L U M N O S * * * " << endl << endl;

	cout << "Indique cantidad de alumnos a ingresar: ";
	int cantidadAlumnos = 0;
	cin >> cantidadAlumnos;

	alumno nuevo;

	for (int i = 0; i < cantidadAlumnos; i++)
	{
		cout << "Alumno " << (i + 1) << ": " << endl;
		
		cout << "Indique numero de Cuenta: ";
		cin >> nuevo.cuenta;

		cout << "Ingrese nombre: ";
		cin >> nuevo.nombre;

		nuevo.promedio = 0;

		alumnosFile.write(reinterpret_cast<const char*>(&nuevo), sizeof(alumno));
	}

	alumnosFile.close();
}

void EntidadEducativa::consultarAlumnos()
{
	ifstream alumnosFile("alumnos.bin", ios::in | ios::binary);
	
	if (!alumnosFile)
	{
		cout << "Error al intentar abrir el archivo .bin" << endl;
		return;
	}

	cout << "* * * C O N S U L T A  D E  A L U M N O S * * *" << endl << endl;

	//posicionar apuntador al inicio del archivo
	alumnosFile.seekg(0, ios::beg);

	alumno actual;

	//Devuelve el byte en donde se posiciona el cursor de Lecutura
	int posicionLectura = alumnosFile.tellg();
	
	alumnosFile.read(reinterpret_cast<char*>(&actual), sizeof(alumno));


	while (!alumnosFile.eof())
	{
		cout << "Alumno { posicion: " << posicionLectura << ",  cuenta: " << actual.cuenta << ", nombre: " << actual.nombre << ", promedio: " << actual.promedio << " }" << endl;
		posicionLectura = alumnosFile.tellg();
		alumnosFile.read(reinterpret_cast<char*>(&actual), sizeof(alumno));
	}
}

void EntidadEducativa::agregarMaterias()
{
	ofstream materiasFile("materias.bin", ios::out | ios::app | ios::binary);

	if (!materiasFile)
	{
		cout << "Error al intentar abrir el archivo .bin" << endl;
		return;
	}

	cout << "* * * I N G R E S O  D E  M A T E R I A S * * *" << endl << endl;

	cout << "Ingrese cantidad de materias: ";
	int cantidadMaterias;
	cin >> cantidadMaterias;

	materia nueva;

	for (int i = 0; i < cantidadMaterias; i++)
	{
		cout << "Ingrese el codigo de la materia: ";
		cin >> nueva.codigoMateria;

		cout << "Ingrese nombre de la materia: ";
		cin >> nueva.nombre;

		cout << "Ingrese la cantidad de unidades valorativas: ";
		cin >> nueva.UV;

		materiasFile.write(reinterpret_cast<const char*>(&nueva), sizeof(materia));
	}
	materiasFile.close();
}

void EntidadEducativa::consultarMaterias()
{
	ifstream materiasFile("materias.bin", ios::in | ios::binary);

	if (!materiasFile)
	{
		cout << "Error al intentar abrir el archivo .bin" << endl;
		return;
	}

	cout << "* * * C O N S U L T A  D E  M A T E R I A S  * * *" << endl << endl;

	materia actual;

	materiasFile.seekg(0, ios::beg);

	materiasFile.read(reinterpret_cast<char*>(&actual), sizeof(materia));

	while (!materiasFile.eof())
	{
		cout << "Materia { codigo: " << actual.codigoMateria << ", nombre: " << actual.nombre << ", Unidades Valorativas: " << actual.UV << " }" << endl;
		materiasFile.read(reinterpret_cast<char*>(&actual), sizeof(materia));
	}

	materiasFile.close();
}

void EntidadEducativa::agregarNota(int cuentaAlumno, int codigoMateria, float nota)
{
	int busquedaAlumno = buscarAlumno(cuentaAlumno);
	int busuquedaMateria = buscarMateria(codigoMateria);

	if (busquedaAlumno == -1 || busuquedaMateria == -1)
	{
		return;
	}
	if (busquedaAlumno == 0)
	{
		cout << "No se encontró un alumno con esa cuenta!" << endl;
		return;
	}
	if (busuquedaMateria == 0)
	{
		cout << "No se encontró una materia con ese codigo!" << endl;
		return;
	}

	ofstream File("notas.bin", ios::out | ios::app | ios::binary);

	if (!File)
	{
		cout << "No se pudo abrir el archivo notas.bin" << endl;
		return;
	}

	notas actual;

	actual.codigoMateria = codigoMateria;
	actual.cuentaAlumno = cuentaAlumno;
	actual.nota = nota;

	File.write(reinterpret_cast<const char*>(&actual), sizeof(notas));
	
	cout << "Se agrego nota con exito!" << endl;
	cout << "Nota Ingresada { Alumno: " << actual.cuentaAlumno << " Materia: " << actual.codigoMateria << " Nota: " << actual.nota << " } " << endl;
	File.close();
}

void EntidadEducativa::NuevaNota()
{
	cout << "* * * I N G R E S O  D E  N O T A S * * *" << endl << endl;

	int cuentaAlumno;
	int codigoMateria;
	float nota;

	cout << "Ingrese la cuenta de estudiante: ";
	cin >> cuentaAlumno;

	cout << "Ingrese el codigo de la materia: ";
	cin >> codigoMateria;

	do
	{
		cout << "Ingrese la nota del estudiante: ";
		cin >> nota;
		if (nota >= 0 && nota <= 100) break;
		cout << "Ingrese una nota entre 0 y 100" << endl;
	} while (true);
	EntidadEducativa::agregarNota(cuentaAlumno, codigoMateria, nota);
}

void EntidadEducativa::consultarNotas()
{
	ifstream notasFile("notas.bin", ios::in | ios::binary);

	if (!notasFile)
	{
		cout << "Error al intentar abrir el archivo .bin" << endl;
		return;
	}

	cout << "* * * C O N S U L T A  D E  N O T A S * * *" << endl << endl;

	notas actual;

	notasFile.seekg(0, ios::beg);

	notasFile.read(reinterpret_cast<char*>(&actual), sizeof(notas));

	while (!notasFile.eof())
	{
		cout << "Nota { Cuenta de Alumno: " << actual.cuentaAlumno << ", Codigo de Materia: " << actual.codigoMateria << ", Nota: " << actual.nota << " }" << endl;
		notasFile.read(reinterpret_cast<char*>(&actual), sizeof(notas));
	}

	notasFile.close();
}
