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

void ListaCircular::eliminarNodo(char* _valor)
{
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
