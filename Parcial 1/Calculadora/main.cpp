/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autores: Navas Renato, Paez Adri�n,									 *
 *						Pallango Andr�s, Rodr�guez Mathyws,							 *
 *						Ruiz Jeric�.												 *
 *				Fecha de creaci�n: 19/05/2021										 *
 *				Fecha de modificaci�n: 20/05/2021									 *
 *************************************************************************************/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
#include "operaciones.h"

using namespace std;

int main(int argc, char** argv) {

	float valor1, valor2;
	cout << "Ingrese el valor 1: " << endl;
	cin >> valor1;
	cout << "Ingrese el valor 2: " << endl;
	cin >> valor2;
	Operaciones <float> operacion(valor1, valor2);
	cout << "Suma = " << operacion.suma() << endl;
	cout << "Resta = " << operacion.resta() << endl;
	cout << "Multiplicaci�n = " << operacion.multiplicacion() << endl;
	cout << "Divisi�n  = " << operacion.division() << endl;
	return 0;

}
