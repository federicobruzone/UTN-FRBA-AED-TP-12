//#ifndef Punto2D.h Este archivo es un CPP, no se incluye en una definicion
//#define Punto2D.h

#include "Circulo.h"
#include "Punto2D.h"
#include <array>
#include <cmath>
#include <iostream>

using namespace std; //Recordar usar el namespace std o si no usar std::istream

const static double Pi = atan(1.0) * 4;

Circulo c;

array <double, 100> Areas = { 0, 0, 0, 0, 0 };

array < Circulo, 100 > VariosCirculos;

double MayorPerimetro = 0;

istream& LeerCirculo(Circulo &c) {
	cout << endl << endl << "A continuación le vamos a solicitar el ingreso de los siguientes datos " << endl << "Primero el Radio, Segundo La coordenada X del Centro del Radio y Tercero La coordenada y del Centro del Radio" << endl << endl;
	return (cin >> c.radio); // esta línea fue cambiada para que el retorno sea el correcto
};

double GetArea(Circulo &c) {
	return Pi * (c.radio * c.radio);
};

double GetPerimetro(Circulo &c) {
	return 2 * Pi * c.radio ;
};


void ObtenerCirculosMayorArea(){
	double PerimetroTotal = 0;
		int i = 0;
		while (LeerCirculo(c)){
			VariosCirculos[i] = c;
			PerimetroTotal += GetArea(VariosCirculos[i]);
			i++;
		}
		PerimetroTotal = (PerimetroTotal / i);
		cout << "Estimado Usuario a continuación le vamos a mostrar la posición dentro de una lista de los circulos con mayor área al promedio";
		for (int j = 0; j < i; j++){
			if (GetArea(VariosCirculos[j]) > PerimetroTotal) {
				cout << "El circulo de Posición " << j << " tiene mayor area que el promedio";
			}
		}
}

void CirculoDeMayorArea(){
	double Area = 0;
	double AreaMayor = 0;
	int i = 0;
	int j;
	while (LeerCirculo(c))	{	//quitarle el signo & al parametro
			VariosCirculos[i] = c;
			if ( i == 0) {
				AreaMayor += GetArea(VariosCirculos[i]);
				j = i ;
				
			}
			else {
				Area += GetArea(VariosCirculos[i]);
				if ( Area > AreaMayor ) {
				AreaMayor += GetArea(VariosCirculos[i]);	
				j = i ;
				
				}
			}
			i++;
		}
	cout << "El circulo de Mayor Area es que tiene Radio " << VariosCirculos[j].radio << " y Centro ( " << VariosCirculos[j].centro.posx << "," << VariosCirculos[j].centro.posy << ")";
}
