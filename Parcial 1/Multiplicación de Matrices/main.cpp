  
/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autores: Navas Renato, Paez Adri�n,									 *
 *						Pallango Andr�s, Rodr�guez Mathyws,							 *
 *						Ruiz Jeric�.												 *
 *				Fecha de creaci�n: 28/05/2021										 *
 *				Fecha de modificaci�n: 01/06/2021									 *
 *************************************************************************************/

#include <iostream>
#include "Matriz.h"
#include <stdlib.h>

int main(int argc, char** argv) {
	Matriz matriz;
    matriz.ingresarMatriz();
    matriz.multiplicarMatriz();
    matriz.imprimirMatriz();
    system ("pause");
    return 0;
}
