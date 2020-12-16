#include "Artista.h"
#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

bool Artista::estaVacia()
{
    return primerAlbum == nullptr;
}

Artista::Artista(const char* _nombre, int anio) : primerAlbum(nullptr), anioNacimiento(anio)
{
    nombreArtistico = new char[strlen(_nombre)];
    strcpy_s(nombreArtistico, strlen(_nombre), _nombre);
}

char* Artista::getNombre()
{
    return nombreArtistico;
}

int Artista::getAnioNacimiento()
{
    return anioNacimiento;
}

void Artista::setNombre(const char* _nombre)
{
    if (nombreArtistico != nullptr) delete nombreArtistico;

    nombreArtistico = new char[strlen(_nombre)];
    strcpy_s(nombreArtistico, strlen(_nombre), _nombre);
}

void Artista::setAnioNacimiento(int _anio)
{
    this->anioNacimiento = _anio;
}

int Artista::totalSencillos()
{
    if (estaVacia()) return 0;

    int total = 0;

    Album* actual = primerAlbum;

    do
    {
        total += actual->cantidadSencillos();
        actual = actual->getSiguiente();
    } while (actual != nullptr);
    return total;
}

Album* Artista::buscarAlbum(char* nombre)
{
    if (estaVacia())
    {
        cout << "Artista no tiene albumes, agregue un album primero!" << endl;
        return nullptr;
    }
    else
    {
        Album* actual = primerAlbum;

        while (actual != nullptr)
        {
            if (strcmp(actual->getNombre(), nombre) == 0)
            {
                return actual;
            }
            else
                actual = actual->getSiguiente();
        }
    }
    return nullptr;
}

int Artista::cantidadAlbumes()
{
    if(estaVacia()) return 0;

    int cantidad = 0;
    Album* actual = primerAlbum;

    do
    {
        cantidad++;
        actual = actual->getSiguiente();
    } while (actual != nullptr);

    return cantidad;
}

int Artista::totalMinutosReproduccion()
{
    if (estaVacia()) return 0;

    int total = 0;

    Album* actual = primerAlbum;

    do
    {
        total += actual->duracion();
        actual = actual->getSiguiente();
    } while (actual != nullptr);
    return total;
}

void Artista::guardarEnArchivo()
{
    string nombre;

    cout << "Ingrese nombre del archivo (sin el .txt): ";
    cin >> nombre;
    nombre += ".txt";
    ofstream archivo(nombre, ios::app);

    if (!archivo)
    {
        cout << "Error al intentar abrir el archivo " << nombre << endl;
        return;
    }

    archivo << "Nombre Artistico: " << nombreArtistico << endl;
    archivo << "Año de Nacimiento: " << anioNacimiento << endl;

    Album* actual = primerAlbum;

    while (actual != nullptr)
    {
        archivo << "Album: " << actual->getNombre() << " Genero: " << actual->getGenero() << " Año de Publicacion: " << actual->getAnioPublicacion() << endl << endl;

        Sencillo* single = actual->primerSencillo;

        while (single != nullptr)
        {
            archivo << "\t" << single->getNombre() << " Duracion: " << single->getDuracion();
            single->getSiguiente();
        }
        actual = actual->getSiguiente();
    }
    archivo.close();
}

void Artista::agregarAlbum()
{
    string nombre{};
    cout << "Ingrese nombre del nuevo album: ";
    cin >> nombre;

    int anio;
    cout << "Ingrese año de publicacion de album: ";
    cin >> anio;

    string genero{};
    cout << "Ingrese genero del album: ";
    cin >> genero;

    Album* nuevo = new Album(nombre.c_str(), anio, genero.c_str(), nullptr);
    if (estaVacia())
    {
        primerAlbum = nuevo;
    }
    else
    {
        Album* actual = primerAlbum;
        while (actual->getSiguiente() != nullptr)
        {
            actual = actual->getSiguiente();
        }
        actual->setSiguiente(nuevo);
    }

    cout << "Se agrego " << nombre << " al artista " << nombreArtistico << endl;
}
