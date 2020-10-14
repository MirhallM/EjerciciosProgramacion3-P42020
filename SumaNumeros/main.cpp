#include <iostream>

using namespace std;

/*
* Este programa suma dos numeros enteros
*/

int main() {

	int numero1, numero2, suma;

	cout << "Ingrese el primer numero: ";
	cin >> numero1;
	cout << "Ingrese el segundo numero: ";
	cin >> numero2;

	suma = numero1 + numero2;
	cout << "Suma de " << numero1 << " y " << numero2 << " es: " << suma << endl;

	return 0;
}