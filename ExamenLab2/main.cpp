#include <iostream>
#include "ListaCircular2.h"

#include "NodoBase.h"
#include "Entero2.h"
#include "Cadena2.h"
#include "Caracter.h"
#include "Decimal.h"
#include <string>


using namespace std;

int main()
{
	ListaCircular2 lc;

	cout << " * * * E X A M E N  2  L A B  P R O G R A  3 * * *" << endl;
	bool menu = true;
	int opciones = 0;
	do
	{
		cout << endl;
		cout << "1. Agregar Entero" << endl;
		cout << "2. Agregar Numero Cadena" << endl;
		cout << "3. Agregar Numero Decimal" << endl;
		cout << "4. Agregar un Caracter" << endl;
		cout << "5. Imprimir toda la lista" << endl;
		cout << "6. Eliminar Por Posicion" << endl;
		cout << "7. Obtener cantidad de objetos" << endl;
		cout << "8. Salir del sistema" << endl;
		cout << "Ingrese una opcion: ";
		cin >> opciones;

		if (opciones > 0 && opciones <= 8)
		{
			switch (opciones)
			{
			case 1:
			{
				int valor;
				cout << "Ingrese el entero a agregar: ";
				cin >> valor;

				NodoBase* en = new Entero2(valor);
				lc.agregarNodo(en);
				break;
			}
			case 2:
			{
				string str;
				cout << "Ingrese la cadena a agregar: ";
				cin >> str;

				NodoBase* ca = new Cadena2(str.c_str());
				lc.agregarNodo(ca);
				break;
			}
			case 3:
			{
				float decimal;
				cout << "Ingrese un numero decimal a agregar: ";
				cin >> decimal;

				NodoBase* deci = new Decimal(decimal);
				lc.agregarNodo(deci);
				break;
			}
			case 4:
			{
				char car;
				cout << "Ingrese el un (1) carcter a agregar: ";
				cin >> car;

				NodoBase* cat = new Caracter(car);
				lc.agregarNodo(cat);
				break;
			}
			case 5:
			{
				lc.imprimirLista();
				break;
			}
			case 6:
			{
				int pos;
				cout << "Ingrese la posicion del nodo a eliminar: ";
				cin >> pos;

				lc.eliminarObjeto(pos);
				break;
			}
			case 7:
			{
				lc.imprimirCantidadPorObjeto();
				break;
			}
			case 8:
			{
				menu = false;
				break;
			}
			}
		}
	} while (menu);
}