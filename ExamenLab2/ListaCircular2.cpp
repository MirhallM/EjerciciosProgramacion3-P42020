#include "ListaCircular2.h"
#include <iostream>

using namespace std;

bool ListaCircular2::estaVacia()
{
	return head == nullptr;
}

ListaCircular2::ListaCircular2() : head(nullptr), tail(nullptr)
{
}

void ListaCircular2::agregarNodo(NodoBase* nodo)
{
	if (estaVacia())
	{
		head = tail = nodo;
		nodo->setAnterior(head);
		nodo->setSiguiente(tail);
	}
	else
	{
		tail->setSiguiente(nodo);
		nodo->setAnterior(tail);
		tail = nodo;

		tail->setSiguiente(head);
		head->setAnterior(tail);
	}
	cout << "Nodo agregado! " <<  endl;
}

void ListaCircular2::imprimirLista()
{
	if (estaVacia())
	{
		cout << "Lista vacia!" << endl;
		return;
	}
	cout << endl;
	cout << "Impresion de Lista!" << endl;
	NodoBase* actual = head;
	int contar = 0;
	do
	{
		actual->printNodo();
		actual = actual->getSiguiente();
	} while (actual != head);
	cout << endl;
}

void ListaCircular2::eliminarObjeto(int pos)
{
	if (estaVacia())
	{
		cout << "Lista vacia!" << endl;
		return;
	}

	NodoBase* actual = head;
	int posActual = 0;
	do
	{
		if (posActual == pos)
		{
			if (actual == head)
			{
				head = actual->getSiguiente();
				head->setAnterior(tail);
				tail->setSiguiente(head);
			}
			else if (actual == tail)
			{
				tail = actual->getAnterior();
				tail->setSiguiente(head);
				head->setAnterior(tail);
			}
			else
			{
				actual->getAnterior()->setSiguiente(actual->getSiguiente());
				actual->getSiguiente()->setAnterior(actual->getAnterior());
			}
			delete actual;
			cout << "Nodo fue eliminado!" << endl;
			return;
		}
		posActual++;
		actual = actual->getSiguiente();
	} while (actual != head);

	cout << "No se encontro un nodo en esa posicion" << endl;
}

void ListaCircular2::imprimirCantidadPorObjeto()
{
	int cadena = 0;
	int car = 0;
	int deci = 0;
	int entero = 0;
	cout << endl;
	cout << "Cantidad de nodos por objeto!" << endl;
	if (!estaVacia())
	{
		NodoBase* actual = head;
		
		do
		{
			switch (actual->getType())
			{
			case CADENA: cadena++;
				break;
			case DECIMAL: deci++;
				break;
			case CHAR: car++;
				break;
			case ENTERO: entero++;
				break;
			}
			actual = actual->getSiguiente();
		} while (actual != head);
	}

	cout << "Cadenas: " << cadena << endl;
	cout << "Caracter: " << car << endl;
	cout << "Decimal: " << deci << endl;
	cout << "Entero: " << entero << endl << endl;
}
