#include <iostream>
#include <conio.h>

using namespace std;

class Nota 
{
private:
	int valor;

public:

	int notaAprobacion;

	//Definicion e implementacion de constructores
	Nota(void) : valor(0), notaAprobacion(70)
	{
		//valor = 0;
	}

	Nota(int _valor) : valor(_valor), notaAprobacion(70)
	{
		//valor = _valor;
	}

	//definicion e implementacion de funciones
	void setValor(int _valor)
	{
		if (_valor < 0 || _valor > 100)
		{
			cout << "Error de ingreso de nota!" << endl;
			return;
		}
		valor = _valor;
	}

	int getValor()
	{
		return valor;
	}

	bool esAprobado()
	{
		/*if (valor >= notaAprobacion)
		*	return true;
		* 
		* return false;
		*/

		return valor >= notaAprobacion ? true : false;
	}

	void obtenerCalificacionIngles()
	{
		//Imprime la calificacion de acuerdo al sistema ingles
		if (valor >= 93)
			cout << "A";
		else if (valor >= 90)
			cout << "A-";
		else if (valor >= 87)
			cout << "B+";
		else if (valor >= 83)
			cout << "B";
		else if (valor >= 80)
			cout << "B-";
		else if (valor >= 77)
			cout << "C+";
		else if (valor >= 73)
			cout << "C";
		else if (valor >= 70)
			cout << "C-";
		else if (valor >= 67)
			cout << "D+";
		else if (valor >= 60)
			cout << "D";
		else
			cout << "F";
	}
};

int main()
{

	Nota n1;
	Nota n2(50);

	cout << "Valor de nota 1: " << n1.getValor() << endl;
	cout << "Valor de nota 2: " << n2.getValor() << endl;

	n1.setValor(76);

	cout << "Valor de nota 1: " << n1.getValor() << endl;
	cout << "Valor de nota 2: " << n2.getValor() << endl;

	cout << "La nota n1 esta " << (n1.esAprobado() ? "aprobado" : "reprobado") << endl;
	cout << "La nota n2 esta " << (n2.esAprobado() ? "aprobado" : "reprobado") << endl;

	n1.notaAprobacion = 60;

	cout << "La nota n1 esta " << (n1.esAprobado() ? "aprobado" : "reprobado") << endl;

	cout << "Calificacion Ingles" << endl << endl;

	cout << "n1: " << n1.getValor() << ", ";
	n1.obtenerCalificacionIngles();
	cout << endl;

	cout << "n2: " << n2.getValor() << ", ";
	n2.obtenerCalificacionIngles();
	cout << endl;

	_getch();
}