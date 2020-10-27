#pragma once
#ifndef RECTANGULOADC_H
#define RECTANGULOADC_H

struct point
{
	double x, y;
	point(double, double);
	point();
};

class RectanguloAdv
{
private:
	point point1, point2, point3, point4;
	bool cuadrado, rectangulo;
public:
	RectanguloAdv();
	RectanguloAdv(point, point, point, point);

	void establecer(point, point, point, point);
	double longitud();
	double anchura();
	double perimetro();
	double area();
};
#endif // !RECTANGULOADC_H

