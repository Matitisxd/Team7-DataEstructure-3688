/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autores: Navas Renato, Paez Adri�n,									 *
 *						Pallango Andr�s, Rodr�guez Mathyws,							 *
 *						Ruiz Jeric�.												 *
 *				Fecha de creaci�n: 28/05/2021										 *
 *				Fecha de modificaci�n: 31/05/2021									 *
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

