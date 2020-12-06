#pragma once
#ifndef EMPRESA_H
#define EMPRESA_H

#include "ArbolEmpresa.h"

class Empresa
{
public:
	static ArbolEmpresa crearArbolDeArchivo();
	static void agregarEmpleado(int codigo, char* nombre, float salario);
	static void imprimirEmpleados();
};

#endif // !EMPRESA_H


