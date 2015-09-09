#ifndef CIRCULO_H // recordar utilizar este formato de nombre para la definicion
#define CIRCULO_H

#include <iostream>
#include "Punto2d.h" // Recordar incluir el Punto2D

struct Circulo {
	double radio;
	Punto2D centro;
};


istream& LeerCirculo(Circulo &c);

double GetArea(Circulo &c);

double GetPerimetro(Circulo &c);

void ObtenerCirculosMayorArea();

void CirculoDeMayorArea();

#endif
