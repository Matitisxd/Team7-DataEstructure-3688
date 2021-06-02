/***********************************************************************
 * Module:  Fecha.cpp
 * Author:  pzeadrian
 * Modified: Tuesday, June 1, 2021 11:28:19 PM
 * Purpose: Implementation of the class Fecha
 ***********************************************************************/

#include "Persona.h"
#include "Fecha.h"

int Fecha::getDia(void)
{
   return dia;
}

void Fecha::setDia(int newDia)
{
   dia = newDia;
}

int Fecha::getMes(void)
{
   return mes;
}

void Fecha::setMes(int newMes)
{
   mes = newMes;
}

int Fecha::getAnio(void)
{
   return anio;
}

void Fecha::setAnio(int newAnio)
{
   anio = newAnio;
}
