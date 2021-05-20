/*************  Universidad de las Fuerzas Armadas ESPE  ************************
 *			Carrera: Ing. Software					*
 *			Autores: Navas Renato, Paez Adrián,			*
 *				 Pallango Andrés, Rodriguez Mathyws,		*
 *				 Ruiz Jericó.					*
 *			Fecha de creación: 19/05/2021				*
 *			Fecha de modificación: 19/05/2021			*
 ********************************************************************************/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "operaciones.h"

using namespace std;

int main(int argc, char** argv) {
	float valor1, valor2;
	cout << "Ingrese el valor 1= ";
	cin >> valor1;
	cout << "Ingrese el valor 2= ";
	cin >> valor2;
	Operaciones<float>operacion(valor1, valor2);
	cout << "\nSuma = " << operacion.suma() << endl;
	cout << "Resta = " << operacion.resta() << endl;
	cout << "Multiplicacion = " << operacion.multiplicacion() << endl;
	cout << "Division  = " << operacion.division() << endl;
	return 0;
}
