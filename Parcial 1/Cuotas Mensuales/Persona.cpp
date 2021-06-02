/***********************************************************************
 * Module:  Persona.cpp
 * Author:  pzeadrian
 * Modified: Tuesday, June 1, 2021 11:28:19 PM
 * Purpose: Implementation of the class Persona
 ***********************************************************************/

#include "Persona.h"

string Persona::getNombre(void)
{
   return nombre;
}

void Persona::setNombre(string newNombre)
{
   nombre = newNombre;
}

long Persona::getCedula(void)
{
   return cedula;
}

void Persona::setCedula(long newCedula)
{
   cedula = newCedula;
}

Fecha Persona::getFecha(void)
{
   return fecha;
}

void Persona::setFecha(Fecha newFecha)
{
   fecha = newFecha;
}

double Persona::getMonto(void)
{
    return monto;
}

void Persona::setMonto(double newMonto)
{
    monto = newMonto;
}

int Persona::getCuota(void)
{
    return cuota;
}

void Persona::setCuota(int newCuota)
{
    cuota = newCuota;
}
