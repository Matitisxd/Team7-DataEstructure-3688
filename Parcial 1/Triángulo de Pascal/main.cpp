/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autores: Navas Renato, Paez Adrián,									 *
 *						Pallango Andrés, Rodríguez Mathyws,							 *
 *						Ruiz Jerico.												 *
 *				Fecha de creacion: 08/06/2021										 *
 *				Fecha de modificación: 08/06/2021									 *
 *************************************************************************************/
#include <iostream>
#include "Pascal.h"
int main()
{
    Pascal p1;
    int filas = 0;

    while (filas < 1) {
        cout << "Ingrese filas:";
        cin >> filas;
    }
    p1.triangulo_pascal(filas);
}


