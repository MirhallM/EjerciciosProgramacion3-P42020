#include "RectanguloAdv.h"
#include <iostream>
#include <cmath>

RectanguloAdv::RectanguloAdv() : point1(0, 0), point2(0, 0), point3(0, 0), point4(0, 0), longitud(0), anchura(0), rectangulo(false), cuadrado(false)
{
}

RectanguloAdv::RectanguloAdv(point _point1, point _point2, point _point3, point _point4) : point1(point1.x, point1.y), point2(point2.x, point2.y), point3(point3.x, point3.y), point4(point4.x, point4.y), rectangulo(false), cuadrado(false)
{
	establecer(point1, point2, point3, point4);
}

bool RectanguloAdv::esRectangulo(point a, point b , point c, point d)
{
	return 
		esOrtogonal(a, b, c) &&
		esOrtogonal(b, c, d) &&
		esOrtogonal(c, d, a);;
}

bool RectanguloAdv::esOrtogonal(point a, point b, point c)
{
	return (b.x - a.x) * (b.x - c.x) + (b.y - a.y) * (b.y - c.y) == 0;
}

bool RectanguloAdv::esCuadrado(point a , point b, point c, point d)
{
	double largo1, largo2, largo3, largo4;
	largo1 = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
	largo2 = sqrt(pow(c.x - b.x, 2) + pow(c.y - b.y, 2));
	largo3 = sqrt(pow(d.x - c.x, 2) + pow(d.y - c.y, 2));
	largo4 = sqrt(pow(a.x - d.x, 2) + pow(a.y - d.y, 2));
	if (largo1 > largo2)
	{
		this->longitud = largo1;
		this->anchura = largo2;
		return false;
	}
	else if (largo1 > largo3) {
		this->longitud = largo1;
		this->anchura = largo3;
		return false;
	}
	else if (largo2 > largo1) {
		this->longitud = largo2;
		this->anchura = largo1;
		return false;
	}
	else if (largo3 > largo1) {
		this->longitud = largo3;
		this->anchura = largo1;
		return false;
	}
	else
		return true;
	
}

int RectanguloAdv::esRectanguloCualquierOrden(point point1, point point2, point point3, point point4)
{
	if (esRectangulo(point1, point2, point3, point4)) return 1;
	else if (esRectangulo(point2, point3, point1, point4)) return 2;
	else if (esRectangulo(point3, point1, point2, point4)) return 3;
	else return 0;
}

void RectanguloAdv::establecer(point point1, point point2, point point3, point point4)
{
	if (point1.x < 0.0 || point1.y < 0.0 || point2.x < 0.0 || point2.y < 0.0 || point3.x < 0.0 || point3.y < 0.0 || point4.x < 0.0 || point4.y < 0.0 ||
		point1.x > 20.0 || point1.y > 20.0 || point2.x > 20.0 || point2.y > 20.0 || point3.x > 20.0 || point3.y > 20.0 || point4.x > 20.0 || point4.y > 20.0)
	{
		std::cout << "Las coordenadas de este rectangulo no son validas.\nUse valores entre 0.0 y 20.0" << std::endl;
		this->cuadrado = false;
		this->rectangulo = false;
		return;
	}
	int resultado = esRectanguloCualquierOrden(point1, point2, point3, point4);
	if (resultado != 0)
	{
		std::cout << "Este es un rectangulo!" << std::endl;
		this->rectangulo = true;
		if (resultado == 1)
		{
			if (esCuadrado(point1, point2, point3, point4))
			{
				std::cout << "Y tambien es un cuadrado!" << std::endl;
				this->cuadrado = true;
			}
			else
			{
				std::cout << "Pero no un cuadrado!" << std::endl;
				this->cuadrado = false;
			}
		} else if (resultado == 2)
		{
			if (esCuadrado(point2, point3, point1, point4))
			{
				std::cout << "Y tambien es un cuadrado!" << std::endl;
				this->cuadrado = true;
			}
			else
			{
				std::cout << "Pero no un cuadrado!" << std::endl;
				this->cuadrado = false;
			}
		} else if (resultado == 3)
		{
			if (esCuadrado(point3, point1, point2, point4))
			{
				std::cout << "Y tambien es un cuadrado!" << std::endl;
				this->cuadrado = true;
			}
			else
			{
				std::cout << "Pero no un cuadrado!" << std::endl;
				this->cuadrado = false;
			}
		}
	}
	else 
	{

	}
	
	return;
}

double RectanguloAdv::getLongitud()
{
	return longitud;
}

 double RectanguloAdv::getAnchura()
{
	return anchura;
}

 double RectanguloAdv::perimetro()
 {
	 return (longitud + anchura) * 2;
 }

 double RectanguloAdv::area()
 {
	 return longitud * anchura;
 }

point::point(double _x, double _y) : x(_x), y(_y)
{
}

point::point() : x(0), y(0)
{
}
