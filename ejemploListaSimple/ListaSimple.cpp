#include "ListaSimple.h"
#include <iostream>

using namespace std;

ListaSimple::ListaSimple() : head(nullptr)
{}

bool ListaSimple::estaVacia()
{
	return head == nullptr;
}

void ListaSimple::addNode(int valor)
{
	Nodo* newNodo = new Nodo(valor, nullptr);
	if (estaVacia())
	{
		head = new Nodo(valor, nullptr);
	}
	else
	{
		Nodo* actual = head;
		while (actual->getSiguiente() != nullptr)
		{
			actual = actual->getSiguiente();
		}

		actual->setSiguiente(newNodo);
	}
}

Nodo* ListaSimple::searchNode(int valor)
{
	if (estaVacia())
	{
		return nullptr;
	}
	else
	{
		Nodo* actual = head;

		while (actual != nullptr)
		{
			if (actual->getValor() == valor)
				return actual;
			else
				actual = actual->getSiguiente();
		}
	}
	return nullptr;
}

void ListaSimple::deleteNode(int valor)
{
	Nodo* actual = head;
	Nodo* previa = nullptr;

	if (actual != nullptr && actual->getValor() == valor)
	{
		head = actual->getSiguiente();
		return;
	}
	while (actual != nullptr && actual->getValor() != valor)
	{
		previa = actual;
		actual = actual->getSiguiente();
	}

	if (actual == nullptr) return;
	if (previa != nullptr) previa->setSiguiente(actual->getSiguiente());
}

void ListaSimple::printList()
{
	if (estaVacia())
	{
		cout << "Lista esta Vacia!" << endl;
	}
	else
	{
		Nodo* actual = head;
		int count = 1;
		while (actual != nullptr)
		{
			cout << "Valor de Nodo " << count << ": " << actual->getValor() << endl;
			count++;
		}
	}
}

