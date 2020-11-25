#include <conio.h>
#include <iostream>
#include "ListaSimple.h"

int main()
{

	ListaSimple ls;

	ls.addNode(6);
	ls.addNode(2);
	ls.addNode(9);
	ls.addNode(3);
	ls.addNode(1);
	ls.addNode(7);

	ls.printList();

	ls.ordernarLista();
	std::cout << "lista ordenada" << std::endl;

	ls.printList();

	_getch();
}