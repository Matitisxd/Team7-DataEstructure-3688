/***********************************************************************
 * Module:  Datos.cpp
 * Author:  pzeadrian
 * Modified: Monday, June 7, 2021 1:19:44 AM
 * Purpose: Implementation of the class Datos
 ***********************************************************************/

#include "Datos.h"


int Datos::getTerminos(void)
{
   return terminos;
}

void Datos::setTerminos(int newTerminos)
{
   terminos = newTerminos;
}

float Datos::getAngulo(void)
{
   return angulo;
}

void Datos::setAngulo(float newAngulo)
{
   angulo = newAngulo;
}

double Datos::getCotan(void) {

	return cotan;

}

void Datos::setCotan(double newCotan) {

	cotan = newCotan;

}