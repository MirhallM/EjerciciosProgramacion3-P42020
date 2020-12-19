#include "ListaDoble.h"

bool ListaDoble::estaVacia()
{
    return head == nullptr;
}

ListaDoble::ListaDoble() : head(nullptr), tail(nullptr)
{
}

void ListaDoble::insertarInicio(int _valor)
{
    NodoDoble_Circular* nuevo = new NodoDoble_Circular(_valor, nullptr, nullptr);

    if (estaVacia())
    {
        nuevo =  tail = nuevo;
        nuevo->setSiguiente(tail);
        return;
    }
    else
    {
        nuevo->setSiguiente(head);
        head->setAnterior(nuevo);
        head = nuevo;
    }
}

void ListaDoble::agregarFinal(int _valor)
{
    NodoDoble_Circular* nuevo = new NodoDoble_Circular(_valor, nullptr, nullptr);

    if (estaVacia())
    {
        nuevo = tail = nuevo;
        nuevo->setSiguiente(tail);
        return;
    }
    else
    {
        tail->setSiguiente(nuevo);
        nuevo->setAnterior(tail);
        tail = nuevo;
    }
}

void ListaDoble::insertarPosicion(int pos, int valor)
{
    NodoDoble_Circular* nuevo = new NodoDoble_Circular(valor, nullptr, nullptr);

    if (pos == 0 || estaVacia())
    {
        insertarInicio(valor);
    }
    else
    {
        NodoDoble_Circular* actual = head->getSiguiente();
        int posActual = 1;
        do {
            if (pos == posActual)
            {
                actual->getAnterior()->setSiguiente(nuevo);
                nuevo->setAnterior(actual->getAnterior());
                nuevo->setSiguiente(actual);
                actual->setAnterior(nuevo);
            }
            posActual++;
            actual = actual->getSiguiente();
        } while (actual != nullptr);
        actual->setSiguiente(nuevo);
        nuevo->setAnterior(actual);
        tail = nuevo;
    } 
}

void ListaDoble::eliminarPorValor(int valor)
{
}

void ListaDoble::eliminarPorPosicion(int pos)
{
}

NodoBase* ListaDoble::busqueda(int _valor)
{
    return nullptr;
}

void ListaDoble::mostrar()
{
    //TODO: Add mostrar functionality to lista doble
}