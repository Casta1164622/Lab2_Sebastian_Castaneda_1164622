#pragma once
#include "math.h"

struct figuras
{
	double lado;
	double apotema;

	double perimetro(double lado, int NoLados) 
	{
		return lado*NoLados;
	}

	double areaTriangulo(double lado) 
	{
		return sqrt(3) / 4 * pow(lado, 2);
	}

	double areaCuadrado(double lado) 
	{
		return pow(lado, 2);
	}

	double areaGeneric(double perimetro,double apotema) 
	{
		return perimetro*apotema/2;
	}
};