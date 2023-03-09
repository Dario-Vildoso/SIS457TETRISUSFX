#include <iostream>
#include "Pieza.h"
#include "Niveles.h"
#include "Escenario.h"
#include "Efectos.h"


using namespace std;

int main() {
	Pieza pieza_l("eles", "#000000");

	cout << pieza_l.getNombre() << endl;
	pieza_l.setNombre("L de cuatro tiles");
	pieza_l.rotar(90);
	cout << pieza_l.getNombre() << endl;
	cout << pieza_l.getColor() << endl;
	cout << "--------------------------" << endl;

	Pieza pieza_p("podio", "#2A34BF");

	cout << pieza_p.getNombre() << endl;
	pieza_p.rotar(90);
	cout << pieza_p.getColor() << endl;
	cout << "--------------------------" << endl;

	Pieza pieza_c("cuadrado", "#15BC5D");

	cout << pieza_c.getNombre() << endl;
	pieza_c.rotar(90);
	cout << pieza_c.getColor() << endl;
	cout << "--------------------------" << endl;
		
	Pieza pieza_b("barra", "#FCD1C3");

	cout << pieza_b.getNombre() << endl;
	pieza_b.rotar(90);
	cout << pieza_b.getColor() << endl;
	cout << "--------------------------" << endl;

	Pieza pieza_s("S", "#1B68AA");

	cout << pieza_s.getNombre() << endl;
	pieza_s.rotar(90);
	cout << pieza_s.getColor() << endl;
	cout << "--------------------------" << endl;

	Niveles Nivel1(1, false, false);
	cout << "Este es el nivel: " << Nivel1.getNumero() << endl;
	cout << "Es un nivel especial? " << Nivel1.nivelEspecial << endl;
	cout << "Es un nivel con bonificacion?" << Nivel1.nivelx2 << endl;
	cout << "------------------------------" << endl;

	Niveles Nivel2(2, true, false);
	cout << "Este es el nivel: " << Nivel2.getNumero() << endl;
	cout << "Es un nivel especial? " << Nivel2.nivelEspecial << endl;
	cout << "Es un nivel con bonificacion?" << Nivel2.nivelx2 << endl;
	cout << "------------------------------" << endl;

	Niveles Nivel3(3, true, true);
	cout << "Este es el nivel: " << Nivel3.getNumero() << endl;
	cout << "Es un nivel especial? " << Nivel3.nivelEspecial << endl;
	cout << "Es un nivel con bonificacion?" << Nivel3.nivelx2 << endl;
	cout << "------------------------------" << endl;

	Niveles Nivel4(4, true, false);
	cout << "Este es el nivel: " << Nivel4.getNumero() << endl;
	cout << "Es un nivel especial? " << Nivel4.nivelEspecial << endl;
	cout << "Es un nivel con bonificacion?" << Nivel4.nivelx2 << endl;
	cout << "------------------------------" << endl;

	Niveles Nivel5(5, true, true);
	cout << "Este es el nivel: " << Nivel5.getNumero() << endl;
	cout << "Es un nivel especial? " << Nivel5.nivelEspecial << endl;
	cout << "Es un nivel con bonificacion?" << Nivel5.nivelx2 << endl;
	cout << "------------------------------" << endl;

	Escenario background(0, 180, 100);
	background.setNombre("default");
	cout << "Escenario " << background.getNombre() << endl;
	cout << "------------------------------" << endl;

	PiezaMutante pieza_m("Pieza mutante sin nombre, jjejejejej", "#OOOOOO transparente", 2, true);

	cout << "numero de copias: " << pieza_m.getNumeroCopias() << endl;
	cout << "modificar forma?: " << pieza_m.getModificarForma() << endl;
	cout << "color de la pieza mutante" << pieza_m.getColor() << endl;
	cout << pieza_m.getNombre() << endl;
	pieza_m.setNombre("Pieza mutante L de cuatro tiles");
	pieza_m.rotar(90);
	cout << pieza_m.getNombre() << endl;

	pieza_m.cambiarForma(2);

}