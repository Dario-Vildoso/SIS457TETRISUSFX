#include "Efectos.h"

Efectos::Efectos()
{
	cantidad = 1;
	posicionX = 50;
	posicionY = 0;
	particula = false;
	Nombre = "Sin Nombre";
	Color = "#000000";
}

Efectos::Efectos(string _Nombre, int _cantidad, bool _particula, string _Color)
{
	cantidad = _cantidad;
	posicionX = 50;
	posicionY = 0;
	particula = _particula;
	Nombre = _Nombre;
	Color = _Color;
}

Efectos::Efectos(string _Nombre, int _cantidad, int _posicionX,
	int _posicionY, bool _particula, string _Color)
{
	cantidad = _cantidad;
	posicionX = _posicionX;
	posicionY = _posicionY;
	particula = _particula;
	Nombre = _Nombre;
	Color = _Color;
}

void Efectos::Exparsir(bool particula)
{
	cout << "Esta funcion genera particulas" << endl;
}