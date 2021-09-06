#ifndef VALIDACION_H_INCLUDED
#define VALIDACION_H_INCLUDED
#include<iostream>
#include <ctype.h>
#include <string.h>
using namespace std;
class Validaciones
{
	public:
		Validaciones();
		bool validarEntero(string cadena);
		bool validarFltoDbl(string cadena);
		bool validarEnterosPos(string cadena);


};
Validaciones::Validaciones()
{

}

bool Validaciones::validarEntero(string cadena)
{
	int cont = 0;
	try {
		for (size_t i = 0; i < cadena.length(); i++) {
			if (isalpha(cadena[i])) {

				throw 1;
			}
			if (!isdigit(cadena[i]) && cadena[i] != '-'  ) {

				throw 1;
			}
			if (cadena[i] == '-') {

				cont ++;
			}
			if (cont > 1) {

				throw 1;
			}
		}

	}
	catch (int e) {
		return true;
	}
	return false;
}
bool Validaciones::validarFltoDbl(string cadena)
{
	int cont = 0;
	int tip =1;
	try {
		for (size_t i = 0; i < cadena.length(); i++) {
		if (isalpha(cadena[i])) {
				throw 1;
			}
			if (!isdigit(cadena[i])&& cadena[i] == '.') {
				cont++;
			}
			if (!isdigit(cadena[i])&& cadena[i] == '-') {
				cont++;
			}
			if ((cont>2)) {
				throw 1;
			}
		}
	}
	catch (int e) {
		return true;
	}
	return false;

}
bool Validaciones::validarEnterosPos(string cadena)
{
		int cont = 0;
		try {
		for (size_t i = 0; i < cadena.length(); i++) {
			if (isalpha(cadena[i])) {

				throw 1;
			}
			if (!isdigit(cadena[i]) ) {

				throw 1;
			}

		}

	}
	catch (int e) {
		return true;
	}
	return false;
}

#endif // VALIDACION_H_INCLUDED
