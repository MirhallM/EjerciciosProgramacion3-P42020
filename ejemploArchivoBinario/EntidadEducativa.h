#pragma once

#ifndef UNIVERSIDAD_h
#define UNIVERSIDAD_H

//estructura de tamaño fijo
//Nom
struct alumno
{
	int cuenta;  // 4 bytes
	char nombre[20]; // 20 bytes
	float promedio; // 4 bytes
	// sizeof() 28 bytes
};

struct materia
{
	int codigoMateria;
	char nombre[10];
	float UV;
};

struct notas
{
	int cuentaAlumno;
	int codigoMateria;
	float nota;
};

class EntidadEducativa
{
private:
	static void agregarNota(int cuentaAlumno, int codigoMateria, float nota);
	static int buscarAlumno(int codigo);
	static int buscarMateria(int codigo);
public:
	static void agregarAlumno();
	static void consultarAlumnos();

	static void agregarMaterias();
	static void consultarMaterias();

	//notas.bin
	//int codigo Alumno, int codigomateria, float nota
	static void NuevaNota();
	static void consultarNotas();

	static int obtenerUV(int codigoMateria);
	static void actualizarPromedio(int cuenta);
};
#endif // !UNIVERSIDAD_h
