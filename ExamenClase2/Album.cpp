#include "Album.h"
#include <string.h>
#include <iostream>

using namespace std;

Album::Album(const char* _nombreAlbum, int _anio, const char* _genero, Album* siguiente) : anioPublicacion(_anio), siguienteAlbum(siguiente)
{
    nombreAlbum = new char[strlen(_nombreAlbum)];
    strcpy_s(nombreAlbum, strlen(_nombreAlbum) + 1, _nombreAlbum);

    genero = new char[strlen(_genero)];
    strcpy_s(genero, strlen(_genero), _genero);
}

char* Album::getNombre()
{
    return nombreAlbum;
}

int Album::getAnioPublicacion()
{
    return anioPublicacion;
}

char* Album::getGenero()
{
    return genero;
}

Album* Album::getSiguiente()
{
    return siguienteAlbum;
}

void Album::setSiguiente(Album* sig)
{
    this->siguienteAlbum = sig;
}

bool Album::estaVacia()
{
    return primerSencillo == nullptr;
}

int Album::duracion()
{
    if (estaVacia()) return 0;

    int total = 0;
    
    Sencillo* actual = primerSencillo;
    do
    {
        total += actual->getDuracion();
        actual = actual->getSiguiente();
    } while (actual == nullptr);

    return total;
}

int Album::cantidadSencillos()
{
    if (estaVacia()) return 0;

    int cantidad = 0;
    Sencillo* actual = primerSencillo;
    do
    {
        cantidad++;
        actual = actual->getSiguiente();
    } while (actual == nullptr);
    return cantidad;
}

void Album::agregarSencillo()
{
    string nombre;
    int duracion;
    cout << "Ingrese nombre del nuevo Sencillo: ";
    cin >> nombre;

    cout << "Ingrese duracion del Sencillo: ";
    cin >> duracion;

    Sencillo* nuevo = new Sencillo(nombre.c_str() , duracion, nullptr);
    if (estaVacia())
    {
        primerSencillo = nuevo;
    }
    else
    {
        Sencillo* actual = primerSencillo;
        while (actual->getSiguiente() != nullptr)
        {
            actual = actual->getSiguiente();
        }
        actual->setSiguiente(nuevo);
    }
    cout << nombre << " agregada con exito a " << nombreAlbum << endl;
}
