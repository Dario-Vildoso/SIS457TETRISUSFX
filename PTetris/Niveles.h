#pragma once
#include<iostream>
#include<string>
#include"Pieza.h"
#include"PiezaMutante.h"

using namespace std;

class Niveles
{
public:
	Niveles();
	Niveles(int _Numero, bool _nivelEspecial, bool _nivelx2);
	Niveles(string _Color);
	bool nivelEspecial;
	bool nivelx2;
	void aumentarDificultad(float _velocidad);
	void NivelX2();
	void NivelEspecial();
	int getNumero() { return Numero; }
	string getColor() { return Color; }
private:
	int Numero;
	string Color;
protected:
};

