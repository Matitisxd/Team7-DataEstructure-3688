/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autores: Navas Renato, Paez Adrián,									 *
 *						Pallango Andrés, Rodríguez Mathyws,							 *
 *						Ruiz Jericó.												 *
 *				Fecha de creación: 28/05/2021										 *
 *				Fecha de modificación: 31/05/2021									 *
 *************************************************************************************/
#include <iostream>
#include "Vector.h"
#include "Operaciones.h"
using namespace std;

int main()
{
	Operaciones op;
	op.encerar();
	op.ingresar();
	op.imprimir();
	op.procesar();
	cout << "El promedio es: " << op.procesar() << endl;
}

