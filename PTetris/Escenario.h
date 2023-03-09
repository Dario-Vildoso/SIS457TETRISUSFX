#pragma once
#include<iostream>
#include<string>
#include"Pieza.h"
#include"PiezaMutante.h"
using namespace std;

class Escenario
{
private:
	string Nombre;
	string Color;
public:
	Escenario();
	Escenario(int _Semilla, int _Altura, int _Ancho);
	string getNombre() { return Nombre; }
	string getColor() { return Color; }
	void setNombre(string _Nombre) { Nombre = _Nombre; }
	int Semilla;
	int Altura;
	int Ancho;
	void soltarPiezas(int _Semilla, int _nuevaPosicionX, int _nuevaPosicionY);
	void lineaCompleta();
protected:

};

