#include "ArbolEmpresa.h"
#include <iostream>

using namespace std;

ArbolEmpresa::ArbolEmpresa() : raiz(nullptr)
{
}

void ArbolEmpresa::agregarNodo(int codigo, char* _nombre, float _salario)
{
	//llamada a funcion recursiva de insertar
	raiz = agregarNodoRec(raiz, codigo, _nombre, _salario);
}

NodoEmpleado* ArbolEmpresa::agregarNodoRec(NodoEmpleado* _raiztemp, int _codigo, char* nombre, float salario)
{
	//caso base

	if (_raiztemp == nullptr)
	{
		NodoEmpleado* nuevo = new NodoEmpleado(_codigo, nombre, salario, nullptr, nullptr);
		_raiztemp = nuevo;
	}
	else if (salario > _raiztemp->getSalario()) //Enviar el nodo a la derecha
	{
		_raiztemp->setHijoDerecho(agregarNodoRec(_raiztemp->getHijoDerecho(), _codigo, nombre, salario));
	}
	else if (salario < _raiztemp->getSalario()) //Enviar el nodo a la izquierda
	{
		_raiztemp->setHijoIzquierdo(agregarNodoRec(_raiztemp->getHijoIzquierdo(), _codigo, nombre, salario));
	}

	return _raiztemp;
}

float ArbolEmpresa::sumatoriaSalarios()
{
	return sumatoriaRec(raiz);
}

float ArbolEmpresa::sumatoriaRec(NodoEmpleado* _raiztemp)
{
	if (_raiztemp == nullptr)
	{
		return 0;
	}

	return _raiztemp->getSalario() + sumatoriaRec(_raiztemp->getHijoDerecho()) + sumatoriaRec(_raiztemp->getHijoIzquierdo());
}

void ArbolEmpresa::imprimirArbol()
{
	cout << "Codigo\tNombre\tSalario" << endl;
	imprimirRec(raiz);
	cout << endl;
}

void ArbolEmpresa::buscarEmpleado(int codigo)
{
	NodoEmpleado* busqueda = buscarEmpleadoRec(raiz, codigo);
	if (busqueda != nullptr)
	{
		cout << "Empleado encontrado!" << endl;
		cout << busqueda->getCodigo() << " " << busqueda->getNombre() << " " << busqueda->getSalario() << endl;
	}
	else
	{
		cout << "No se encontro empleado :( " << endl;
	}
}

NodoEmpleado* ArbolEmpresa::buscarEmpleadoRec(NodoEmpleado* nodo, int codigo)
{
	if (nodo == nullptr)
		return nullptr;

	if (nodo->getCodigo() == codigo)
		return nodo;

	NodoEmpleado* izquierda = buscarEmpleadoRec(nodo->getHijoIzquierdo(), codigo);
	if (izquierda != nullptr)
		return izquierda;

	NodoEmpleado* derecha = buscarEmpleadoRec(nodo->getHijoDerecho(), codigo);
	return derecha;
}

float ArbolEmpresa::promedioSalarios()
{
	return sumatoriaSalarios() / cantidadEmpleados();
}


int ArbolEmpresa::cantidadEmpleados()
{
	return cantidadEmpleadosRec(raiz);
}

int ArbolEmpresa::cantidadEmpleadosRec(NodoEmpleado* nodo)
{
	if (nodo == nullptr)
		return 0;

	return 1 + cantidadEmpleadosRec(nodo->getHijoIzquierdo()) + cantidadEmpleadosRec(nodo->getHijoDerecho());
}

//preorden
void ArbolEmpresa::imprimirRec(NodoEmpleado* nodo)
{
	if (nodo == nullptr) return;

	cout << nodo->getCodigo() << '\t' << nodo->getNombre() << '\t' << nodo->getSalario() << endl;
	imprimirRec(nodo->getHijoIzquierdo());
	imprimirRec(nodo->getHijoDerecho());
}
