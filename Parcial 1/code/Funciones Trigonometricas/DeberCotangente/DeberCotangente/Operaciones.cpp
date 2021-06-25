/***********************************************************************
 * Module:  Operaciones.cpp
 * Author:  pzeadrian
 * Modified: Monday, June 7, 2021 1:20:45 AM
 * Purpose: Implementation of the class Operaciones
 ***********************************************************************/
#include <math.h>
#include "Operaciones.h"

int Operaciones::factorial(int numero)
{

	for (int i = 1; i <= numero; i++) {

		numero *= i;

	}
	return numero;

}

double Operaciones::calcularSeno(float angulo, int terminos)
{
   
	double cotan = 0;
	for (int i = 0; i < terminos; i++) {

		cotan = (cotan + pow(-1, terminos) * pow(2, (2 * terminos)) * (2 * terminos) * pow(angulo, (2 * terminos - 1))) / fact(2*terminos);

	}
	return cotan;

}