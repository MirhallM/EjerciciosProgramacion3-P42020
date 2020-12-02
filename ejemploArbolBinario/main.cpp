#include <conio.h>
#include <iostream>
#include "ArbolBinario.h"

using namespace std;

int main()
{
	ArbolBinario arbol;

	arbol.agregarNodo(40);
	arbol.agregarNodo(25);
	arbol.agregarNodo(38);
	arbol.agregarNodo(12);
	arbol.agregarNodo(16);
	arbol.agregarNodo(60);
	arbol.agregarNodo(55);
	arbol.agregarNodo(82);
	
	arbol.imprimirArbol();
	cout << "Suma del arbol: " << arbol.sumatoriaNodos() << endl;
	
	_getch();
}