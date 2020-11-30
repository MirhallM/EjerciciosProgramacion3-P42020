#include "ListaCircular.h"
#include <iostream>

using namespace std;

ListaCircular::ListaCircular() : head(nullptr), tail(nullptr)
{
}

bool ListaCircular::estaVacia()
{
	return head == nullptr;
}

void ListaCircular::agregarNodo(const char* _valor)
{
	Nodo* nuevo = new Nodo(_valor, nullptr, nullptr);  //Nuevo nodo sin direcciones aun establecidas

	if (estaVacia())
	{
		head = tail = nuevo;        /* Solo hay un elemento, asi que es simultaneamente el primer elemento y el ultimo de la lista*/
		nuevo->setAnterior(head);
		nuevo->setSiguiente(tail);
	}
	else
	{
		//Primero se agrega el nuevo nodo al final (tail) de la lista
		tail->setSiguiente(nuevo);
		nuevo->setAnterior(tail);
		tail = nuevo;

		//Implmentacion ciruclar (el final apunta al principio y viceversa)
		tail->setSiguiente(head);
		head->setAnterior(tail);
	}
	cout << "Nodo agregado!" << endl;
}

void ListaCircular::eliminarNodo(const char* _valor)
{
	if (estaVacia())
	{
		cout << "Lista vacia! " << endl;
		return;
	}

	Nodo* actual = head;

	do
	{
		if (strcmp(actual->getValor(), _valor) == 0 )
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
		actual = actual->getSiguiente();
	} while (actual != head);
}

void ListaCircular::imprimirLista()
{
	if (estaVacia())
	{
		cout << "Lista esta vacia!" << endl;
		return;
	}

	Nodo* actual = head;
	int counter = 1;
	do
	{
		cout << "Posicion de Lista #" << counter << ": " << actual->getValor() << endl;
		counter++;
		actual = actual->getSiguiente();
	}while (actual != head);
}

void ListaCircular::imprimirListaReversa()
{
	if (estaVacia()) return;

	Nodo* actual = tail;

	do
	{
		cout << "[ " << actual->getValor() << " ] ";
		actual = actual->getAnterior();
	} while (actual != tail);
	cout << endl;
}
