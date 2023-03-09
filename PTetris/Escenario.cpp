#include "Escenario.h"

Escenario::Escenario()
{
	Nombre = "Escenario sin nombre";
	Color = "#FFFFFF";
	Semilla = 1;
	Altura = 180;
	Ancho = 100;
}

Escenario::Escenario(int _Semilla, int _Altura, int _Ancho)
{
	Nombre = "Escenario sin nombre";
	Color = "#FFFFFF";
	Semilla = _Semilla;
	Altura = _Altura;
	Ancho = _Ancho;
}

void Escenario::soltarPiezas(int _Semilla, int _nuevaPosicionX, int _nuevaPosicionY)
{
	cout << "Esta funcion suelta piezas en el escenario" << endl;
}

void Escenario::lineaCompleta()
{
	cout << "Esta funcion elimina las lineas formadas" << endl;
}