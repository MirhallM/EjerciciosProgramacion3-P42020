#include "Sencillo.h"
#include <string.h>

Sencillo::Sencillo(const char* _nombreCancion, int _duracion, Sencillo* sig) : duracion(_duracion), sigueinteSencillo(sig)
{
    nombreCancion = new char[strlen(_nombreCancion)];
    strcpy_s(nombreCancion, strlen(_nombreCancion) + 1, _nombreCancion);
}

int Sencillo::getDuracion()
{
    return duracion;
}

void Sencillo::setDuracion(int _duracion)
{
    this->duracion = _duracion;
}

char* Sencillo::getNombre()
{
    return nombreCancion;
}

void Sencillo::setNombre(const char* _nombre)
{
    if (nombreCancion != nullptr) delete nombreCancion; //Liberando el espacio de memoria que vamos a cambiar, solamente si ya hay un valor establecido

    nombreCancion = new char[strlen(_nombre)];
    strcpy_s(nombreCancion, strlen(_nombre) + 1, _nombre);
}

Sencillo* Sencillo::getSiguiente()
{
    return sigueinteSencillo;
}

void Sencillo::setSiguiente(Sencillo* sig)
{
    this->sigueinteSencillo = sig;
}
