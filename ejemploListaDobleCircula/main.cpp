#include <conio.h>
#include "ListaCircular.h"
int main()
{
	ListaCircular lc;

	lc.agregarNodo("Ana");
	lc.agregarNodo("Bob");
	lc.agregarNodo("Lee");

	lc.imprimirLista();


	_getch();
}