#include "RectanguloAdv.h"
#include <iostream>
#include <cmath>

RectanguloAdv::RectanguloAdv() : point1(0, 0), point2(0, 0), point3(0, 0), point4(0,0)
{
}

RectanguloAdv::RectanguloAdv(point _point1, point _point2, point _point3, point _point4) : point1(point1.x, point1.y), point2(point2.x, point2.y), point3(point3.x, point3.y), point4(point4.x, point4.y)
{
	establecer(point1, point2, point3, point4);
}

void RectanguloAdv::establecer(point point1, point point2, point point3, point point4)
{
	if (point1.x < 0.0 || point1.y < 0.0 || point2.x < 0.0 || point2.y < 0.0 || point3.x < 0.0 || point3.y < 0.0 || point4.x < 0.0 || point4.y < 0.0)
	{
		this->cuadrado = false;
		this->rectangulo = false;
		return;
	}
	pow(0, 0);
	
	return;
}

double RectanguloAdv::longitud()
{
	float longitud;
	longitud = 0;
	return 0.0;
}

 double RectanguloAdv::anchura()
{
	return 0.0;
}

point::point(double _x, double _y) : x(_x), y(_y)
{
}

point::point() : x(0), y(0)
{
}
