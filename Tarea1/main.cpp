#include <iostream>
#include <conio.h>

using namespace std;
/* 1. Utilice la tecnicas de este capitulo apra escribir un programa que calcule los cuadrados y cubos de enteros del 0 al 10
*  2. Palindromo con numeros
*  3. Imprimir el equivalente decimal de un numero binario
*/

void Ejercicio1() {
	cout << "entero\tcuadrado cubo" << endl;
    int num = 0;
	int sqr = 0;
	int cubo = 0;

	while (num != 11) {
		sqr = num * num;
		cubo = num * num * num;
		cout << num << "\t" << sqr << "\t " << cubo << endl;
		num++;
	}
}

bool Ejercicio2(int num) {	
	int num1 = num / 10000;
	int num2 = num % 10;
	if (num1 != num2) {
		return false;
	}
	else {
		num1 = num / 1000 % 10;
		num2 = num / 10 % 10;
		if (num1 != num2) {
			return false;
		}
		else {
			return true;
		}
	}
	
}

int binaryADecimal(int numero) {
	int NumDecimal = 0;
	int base = 1;
	int temp = numero;
	while (temp) {
		int ultimoDigito = temp % 10;
		temp /= 10;
		NumDecimal += ultimoDigito * base;
		base = base * 2;
	}
	cout << "La forma decimal es: " << NumDecimal << endl;
	return 0;
}

int main() {
	Ejercicio1();
	int num;
	char respuesta;

	do {
		cout << "Ingrese un numero de 5 digitos para revisar si es palindromo: ";
		cin >> num;
		if (num / 10000 >= 1 && num / 10000 < 10) {
			if (Ejercicio2(num)) {
				cout << "Numero es palindromo!" << endl;
			}
			else {
				cout << "Numero no es palindromo!" << endl;
			}
		}
		else {
			cout << "Numero no fue de 5 digitos!" << endl;
		}
		int num;
		bool binario = true;

		cout << "Ingrese un numero binario: ";
		cin >> num;
		int numeroTemp = num;
		while (numeroTemp > 0) {
			int digit = numeroTemp % 10;
			numeroTemp /= 10;
			if (digit < 0 || digit > 1) {
				binario = false;
				numeroTemp = 0;
			}
		}
		if (binario == true) {
			binaryADecimal(num);
		}
		else {
			cout << "No Ingreso un Numero Binario" << endl;
		}

		cout << "Desea volver a ingresar numeros? (Y o N): ";
		cin >> respuesta;
	} while (respuesta == 'y' || respuesta == 'Y');
	
	return 0;
}