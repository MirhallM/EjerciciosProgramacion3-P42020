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
	double longitud, anchura;
public:
	bool cuadrado, rectangulo;
	RectanguloAdv();
	RectanguloAdv(point, point, point, point);

	bool esRectangulo(point, point, point, point);
	bool esOrtogonal(point, point, point);
	bool esCuadrado(point, point, point, point);
	int esRectanguloCualquierOrden(point, point, point, point);
	void establecer(point, point, point, point);
	double getLongitud();
	double getAnchura();
	double perimetro();
	double area();
};
#endif // !RECTANGULOADC_H

