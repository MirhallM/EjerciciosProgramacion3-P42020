#include "ListaSimple.h"

bool ListaEnlazadaSimple::estaVacia()
{
	return head == nullptr;
}

ListaEnlazadaSimple::ListaEnlazadaSimple() : head(nullptr)
{
}

void ListaEnlazadaSimple::insertarInicio(int _valor)
{
	NodoSimple* nuevo = new NodoSimple(_valor, nullptr);
	if (estaVacia()) head = nuevo;
	else
	{
		nuevo->setSiguiente(head);
		head = nuevo;
	}
	
}

void ListaEnlazadaSimple::agregarFinal(int _valor)
{
	NodoSimple* nuevo = new NodoSimple(_valor, nullptr);
	if (head == nullptr)
	{
		head = nuevo;
	}
	else
	{
		NodoSimple* actual = head;
		while (actual->getSiguiente() != nullptr)
		{
			actual = actual->getSiguiente();
		}
		actual->setSiguiente(nuevo);
	}
}

void ListaEnlazadaSimple::insertarPosicion(int pos, int valor)
{
	NodoSimple* nuevo = new NodoSimple(valor, nullptr);
	if (estaVacia())
		head = nuevo;
	else if (pos == 0)
	{
		nuevo->setSiguiente(head);
		head = nuevo;
	}
	else
	{
		NodoSimple* anterior = head;
		NodoSimple* actual = head->getSiguiente();
		int posActual = 1;
		do {
			if (pos == posActual)
			{
				anterior->setSiguiente(nuevo);
				nuevo->setSiguiente(actual);
			}
			posActual++;
			anterior = anterior->getSiguiente();
			actual = actual->getSiguiente();
		} while (actual != nullptr);
		actual->setSiguiente(nuevo);
	}
}

void ListaEnlazadaSimple::eliminarPorValor(int valor)
{
	if (estaVacia()) return;

	NodoSimple* actual = head;
	NodoSimple* previa = nullptr;

	do
	{
		if (actual->getValor() == valor)
		{
			if (actual == head)
			{
				head = actual->getSiguiente();
				delete actual;
			}
			else
			{
				previa->setSiguiente(actual->getSiguiente());
				delete actual;
			}
			return;
		}
		previa = actual;
		actual = actual->getSiguiente();
	} while (actual != nullptr);
}

void ListaEnlazadaSimple::eliminarPorPosicion(int pos)
{
	if (estaVacia()) return;

	NodoSimple* actual = head->getSiguiente();
	NodoSimple* previa = head;
	int posActual = 1;
	if (pos == 0)
	{
		head = head->getSiguiente();
		delete previa;
	}
	do
	{
		if (pos == posActual)
		{
			previa->setSiguiente(actual->getSiguiente());
			delete actual;
			return;
		}
		posActual++;
		previa = actual;
		actual = actual->getSiguiente();
	} while (actual != nullptr);
}

NodoBase* ListaEnlazadaSimple::busqueda(int _valor)
{
	if (estaVacia()) return nullptr;
	else
	{
		NodoSimple* actual = head;

		while (actual != nullptr)
		{
			if (actual->getValor() == _valor) return actual;
			else actual = actual->getSiguiente();
		}
	}
	return nullptr;
}

void ListaEnlazadaSimple::mostrar()
{
	// TODO: Add mostrar functionality
}
