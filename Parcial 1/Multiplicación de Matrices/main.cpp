  
/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autores: Navas Renato, Paez Adrián,									 *
 *						Pallango Andrés, Rodríguez Mathyws,							 *
 *						Ruiz Jericó.												 *
 *				Fecha de creación: 28/05/2021										 *
 *				Fecha de modificación: 01/06/2021									 *
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
