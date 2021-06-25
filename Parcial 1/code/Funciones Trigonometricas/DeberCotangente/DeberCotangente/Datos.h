/***********************************************************************
 * Module:  Datos.h
 * Author:  pzeadrian
 * Modified: Monday, June 7, 2021 1:19:44 AM
 * Purpose: Declaration of the class Datos
 ***********************************************************************/

#if !defined(__ObjectOrientedModel_1_Datos_h)
#define __ObjectOrientedModel_1_Datos_h

class Datos
{
public:
   int getTerminos(void);
   void setTerminos(int newTerminos);
   float getAngulo(void);
   void setAngulo(float newAngulo);
   double getCotan(void);
   void setCotan(double newCotan);

protected:
private:
   int terminos;
   float angulo;
   double cotan;


};

#endif