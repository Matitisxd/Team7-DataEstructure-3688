#include "Validacion.h"

string Validacion::soloNumeros(string cadena)
{
	for (int i = 0; i < cadena.length(); i++) {
		if (!isdigit(cadena.at(i))) {
			cout << "Dato no valido, Reingrese" << endl;
			getline(cin, cadena);
			i = -1;
		}
	}
	return cadena;
}
