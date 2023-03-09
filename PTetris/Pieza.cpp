#include "Pieza.h"

Pieza::Pieza()
{
	nombre = "Sin nombre";
	forma = "Cuadrado peque�o";
	posicion_X = 100;
	posicion_Y = 50;
	color = "#FFFFFF";
	velocidad = 0.01f;
	enMovimiento = true;

}

Pieza::Pieza(string _nombre, string _color)
{
	nombre = _nombre;
	forma = "Cuadrado peque�o";
	posicion_X = 100;
	posicion_Y = 50;
	color = _color;
	velocidad = 0.01f;
	enMovimiento = true;

}

Pieza::Pieza(float _velocidad):velocidad(_velocidad)
{
	nombre = "Sin nombre";
	forma = "Cuadrado peque�o";
	posicion_X = 100;
	posicion_Y = 50;
	color = "#FFFFFF";
	//velocidad = _velocidad;
	enMovimiento = true;

}

Pieza::Pieza(int _posicion_X, int _posicion_Y)
{
	nombre = "Sin nombre";
	forma = "Cuadrado peque�o";
	posicion_X = _posicion_X;
	posicion_Y = _posicion_Y;
	color = "#FFFFFF";
	velocidad = 0.01f;
	enMovimiento = true;

}

void Pieza::rotar(int _angulo)
{
	cout << "Esta funcion rota una figura" << endl;
}

void Pieza::acelerar(float _velocidad)
{
	cout << "Esta funcion incrementa la velocidad de caida de una figura" << endl;
}

void Pieza::moverHorizontalmente(int _direccion)
{
	cout << "Esta funcion permite mover la figurar hacia la derecha o izquierda." << endl;
}
