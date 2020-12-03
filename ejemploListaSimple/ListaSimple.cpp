#include "ListaSimple.h"
#include <iostream>

using namespace std;

ListaSimple::ListaSimple() : head(nullptr)
{}

Nodo* ListaSimple::obtenerPosNodo(int _posicion)
{
	if (estaVacia()) return nullptr;

	Nodo* actual = head;
	int posActual = 0;

	do
	{
		if (posActual == _posicion) return actual;

		posActual++;
		actual = actual->getSiguiente();
	} while (actual != nullptr);

	return nullptr;
}

bool ListaSimple::estaVacia()
{
	return head == nullptr;
}

int ListaSimple::obtenerTamanio()
{
	if (estaVacia()) return 0;

	int cantidad = 0;
	Nodo* actual = head;

	do
	{
		cantidad++;
		actual = actual->getSiguiente();
	} while (actual != nullptr);

	return cantidad;
}

void ListaSimple::addNode(int valor)
{
	Nodo* newNodo = new Nodo(valor, nullptr);
	if (estaVacia())
	{
		head = newNodo;
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
	if (estaVacia())
	{
		return;
	}

	Nodo* actual = head;
	Nodo* previa = nullptr;

	if (actual->getValor() == valor)
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
	if (previa != nullptr)
	{
		previa->setSiguiente(actual->getSiguiente());
		delete actual;
	}
}

void ListaSimple::ordernarLista()
{
	if (estaVacia()) return;

	int swapped;

	Nodo* left;  //Apunta al principio de la lista
	Nodo* right = nullptr;  //Apunta al final de la lista    1 - 2  - 3 -> nullprt
	do {
		swapped = 0;
		left = head;
		while (left->getSiguiente() != right)
		{
			if (left->getValor() > left->getSiguiente()->getValor())
			{
				nodoSwap(left, left->getSiguiente());
				swapped = 1;
			}
			left = left->getSiguiente();
		}
		right = left;
	} while (swapped);
}

void ListaSimple::insertionSort()
{
	Nodo *sorted = nullptr;
	Nodo* current = head;

	while (current != nullptr)
	{
		Nodo* next = current->getSiguiente();
		sortedInsert(&sorted, current);
		current = next;
	}

	head = sorted;
}

void ListaSimple::sortedInsert(Nodo** headRef, Nodo* newNode)
{
	Nodo* current;
	if (*headRef == nullptr || (*headRef)->getValor() >= newNode->getValor())
	{
		newNode->setSiguiente(*headRef);
		*headRef = newNode;
	}
	else
	{
		current = *headRef;
		while (current->getSiguiente() != nullptr && current->getSiguiente()->getValor() < newNode->getValor())
		{
			current = current->getSiguiente();
		}
		newNode->setSiguiente(current->getSiguiente());
		current->setSiguiente(newNode);
	}
}

void ListaSimple::nodoSwap(Nodo* Nodo1, Nodo* Nodo2)
{
	int temp = Nodo1->getValor();
	Nodo1->setValor(Nodo2->getValor());
	Nodo2->setValor(temp);
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
			actual = actual->getSiguiente();
		}
	}
}

