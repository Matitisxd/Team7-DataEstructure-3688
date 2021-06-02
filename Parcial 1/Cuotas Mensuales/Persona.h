/***********************************************************************
 * Module:  Persona.h
 * Author:  pzeadrian
 * Modified: Tuesday, June 1, 2021 11:28:19 PM
 * Purpose: Declaration of the class Persona
 ***********************************************************************/

#if !defined(__ObjectOrientedModel_1_Persona_h)
#define __ObjectOrientedModel_1_Persona_h

#include <iostream>
#include "Fecha.h"
#include <string.h>

using namespace std;

class Persona
{
public:
   string getNombre(void);
   void setNombre(string newNombre);
   long getCedula(void);
   void setCedula(long newCedula);
   Fecha getFecha(void);
   void setFecha(Fecha newFecha);
   double getMonto(void);
   void setMonto(double newMonto);
   int getCuota(void);
   void setCuota(int newCuota);

protected:
private:
   string nombre;
   long cedula;
   Fecha fecha;
   double monto;
   int cuota;


};

#endif
