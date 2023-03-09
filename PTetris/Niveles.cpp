#include "Niveles.h"

Niveles::Niveles()
{
	Numero = 0;
	Color = "#000000";
	nivelEspecial = false;
	nivelx2 = false;
}


Niveles::Niveles(int _Numero, bool _nivelEspecial, bool _nivelx2)
{
	Numero = _Numero;
	Color = "#000000";
	nivelEspecial = _nivelEspecial;
	nivelx2 = _nivelx2;
}

Niveles::Niveles(string _Color)
{
	Numero = 0;
	Color = _Color;
	nivelEspecial = false;
	nivelx2 = false;
}

void Niveles::aumentarDificultad(float _velocidad)
{
	cout << "Esta funcion aumenta la velocidad de caida de las figuras" << endl;
}

void Niveles::NivelX2()
{
	cout << "Esta funcion hace que el puntaje sea el doble" << endl;
}

void Niveles::NivelEspecial()
{
	cout << "Esta funcion hace que se generen figuras especiales" << endl;
}