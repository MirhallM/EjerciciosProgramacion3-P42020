#include "Simulador.h"
#include <vector>

std::vector<int> simulador;

Simulador::Simulador()
{
}

void Simulador::insertarInicio(int _valor)
{
	simulador.insert(simulador.begin(), _valor);
}

void Simulador::agregarFinal(int _valor)
{
	simulador.push_back(_valor);
}

bool Simulador::insertarPosicion(int pos, int valor)
{
	if (pos <= simulador.size())
	{
		simulador.insert(simulador.begin() + pos, valor);
		return true;
	}
	else return false;
}

void Simulador::eliminarPorValor(int _valor)
{
	if (simulador.size() != 0)
	{
		for (int i = 0; i < simulador.size(); i++)
		{
			if (simulador[i] == _valor)
			{
				simulador.erase(simulador.begin() + i);
			}
		}
	}
}

void Simulador::eliminarPorPosicion(int pos)
{
	if (simulador.size() > pos)
	{
		simulador.erase(simulador.begin() + pos);
	}
}

int Simulador::busqueda(int _valor)
{
	int pos = 0;
	for (int num : simulador)
	{
		if (num == _valor)
		{
			return pos;
		}
		pos++;
	}
	return -1;
}

void Simulador::mostrar()
{
}

void Simulador::limpiarVector()
{
	simulador.clear();
}

int Simulador::getSize()
{
	return simulador.size();
}

int Simulador::getPos(int pos)
{
	return simulador.at(pos);
}