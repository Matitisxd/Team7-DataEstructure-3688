/***********************************************************************
 * Module:  Fecha.h
 * Author:  pzeadrian
 * Modified: Tuesday, June 1, 2021 11:28:19 PM
 * Purpose: Declaration of the class Fecha
 ***********************************************************************/

#if !defined(__ObjectOrientedModel_1_Fecha_h)
#define __ObjectOrientedModel_1_Fecha_h

#include <iostream>

class Persona;

class Fecha
{
public:
   int getDia(void);
   void setDia(int newDia);
   int getMes(void);
   void setMes(int newMes);
   int getAnio(void);
   void setAnio(int newAnio);

   Persona* persona;

protected:
private:
   int dia;
   int mes;
   int anio;


};

#endif
