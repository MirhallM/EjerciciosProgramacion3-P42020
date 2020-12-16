#include <iostream>
#include "Artista.h"
#include "main.h"

using namespace std;

int main()
{
	string nombreArtista{};
	int birthyear;
	cout << "Ingrese nombre del artista: ";
	cin >> nombreArtista;
	cout << "Ingrese año de nacimiento: ";
	cin >> birthyear;

	Artista artista(nombreArtista.c_str(), birthyear);

	cout << " * * * E X A M E N  P A R C I A L  2  P R O G R A  3 * * *" << endl;
	bool menu = true;
	int opciones = 0;
	do
	{
		cout << endl;
		cout << "1. Agregar Album" << endl;
		cout << "2. Agregar Sencillo" << endl;
		cout << "3. Agregar artista a archivo de texto" << endl;
		cout << "4. Salir del Sistema" << endl;
		cin >> opciones;

		if (opciones > 0 && opciones <= 4)
		{
			switch (opciones)
			{
			case 1:
				artista.agregarAlbum();
				break;
			case 2:
				addSingle(artista);
				break;
			case 3:
				artista.guardarEnArchivo();
				break;
			case 4:
				cout << "Nos vemos :) !!..." << endl;
				menu = false;
				break;
			}
		}
	} while (menu);
}

void addSingle(Artista& artista)
{
	char* nombre{};
	cout << "Ingrese nombre del album: ";
	cin >> nombre;
	Album* buscar = nullptr;
	buscar = artista.buscarAlbum(nombre);
	if (buscar != nullptr)
	{
		buscar->agregarSencillo();
	}
}
