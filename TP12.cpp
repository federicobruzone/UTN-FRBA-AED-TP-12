#include <iostream>
#include "Circulo.h" // Recordar incluir los header files entre comillas

using namespace std;

enum Menu {
	MayorArea,
	AreasMayorAlPromedio,
	CirculosDentroRectangulo
};


int main() {

regreso: cout << endl << "Indique que accion desea realizar a continuacion:" << endl << endl << "0 - Obtener el Circulo de Mayor Area" << endl << "1 - Obtener los Circulos Que tiene el Area Mayor al Promedio" << endl << "2 - Mostrar los circulos que entran en un rectangulo" << endl << endl;
	int respuestamenu;
	cin >> respuestamenu;
	switch (respuestamenu)
	{
	case MayorArea:
	{
		void CirculoDeMayorArea();
		break;
	}
	case AreasMayorAlPromedio:
	{
		void ObtenerCirculosMayorArea();
		break;
	}		
	case CirculosDentroRectangulo:
		cout << "Proximamente en las mejores Salas";
	default:
		cout << "Ingreso una opción no valida, se volverá a mostrar el menú para que seleccione nuevamente";
		goto regreso;
		break;
	}
};
