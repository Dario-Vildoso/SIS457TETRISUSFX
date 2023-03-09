#pragma once
#include<iostream>
#include<string>
using namespace std;

class Efectos
{
public:
	Efectos();
	Efectos(string _Nombre, int _cantidad, bool _particula, string _Color);
	Efectos(string _Nombre, int _cantidad, int _posicionX, int _posicionY, bool _particula, string _Color);
	int cantidad;
	int posicionX;
	int posicionY;
	bool particula;
	string getNombre() { return Nombre; }
	string getColor() { return Color; }
	void setPosicionX(int _posicionX) { posicionX = _posicionX; }
	void setPosicionY(int _posicionY) { posicionY = _posicionY; }
	void Exparsir(bool particula);
private:
	string Nombre;
	string Color;

protected:
};

