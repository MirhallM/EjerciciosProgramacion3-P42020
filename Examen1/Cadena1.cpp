#include "Cadena1.h"

Cadena::Cadena() : contenido(nullptr)
{
}

Cadena::Cadena(const char* _cadena)
{
	contenido = new char[strlen(_cadena) + 1];
	strcpy_s(contenido, strlen(_cadena) + 1, _cadena);
}

Cadena Cadena::subcadena(int start, int until)
{
	Cadena subcadena;
	subcadena.contenido = new char[until + 1];
	for (int i = 0; i < until; i++)
	{
		subcadena.contenido[i] = contenido[start + i];
	}
	subcadena.contenido[until] = '\0';
	return subcadena;
}

char Cadena::at(int at)
{
	return contenido[at];
}

int Cadena::tamanio()
{
	return strlen(this->contenido);
}

Cadena& operator+(const Cadena& a, const Cadena& b)
{
	Cadena resultado;
	resultado.contenido = new char[strlen(a.contenido) + strlen(b.contenido) + 1];

	strcpy_s(resultado.contenido, strlen(a.contenido) + 1, a.contenido);
	strcat_s(resultado.contenido, strlen(resultado.contenido) + strlen(b.contenido) + 1, b.contenido);

	return resultado;
}

std::ostream& operator<<(std::ostream& out, const Cadena& a)
{
	out << a.contenido;
	return out;
}