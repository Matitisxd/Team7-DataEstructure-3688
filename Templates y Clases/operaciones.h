#include <iostream>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

using namespace std;
template <typename tipoDato>
class Operaciones {
private:
	tipoDato valor1;
	tipoDato valor2;
public:
	Operaciones(tipoDato _valor1, tipoDato _valor2) {

		valor1 = _valor1;
		valor2 = _valor2;

	}

	// Setters
	tipoDato setValor1(int _valor1) {

		valor1 = _valor1;

	}
	tipoDato setValor2(int _valor2) {

		valor2 = _valor2;

	}

	// Getters
	tipoDato getValor1() {

		return valor1;

	}
	tipoDato getValor2() {

		return valor2;

	}

	tipoDato suma();
	tipoDato resta();
	tipoDato multiplicacion();
	tipoDato division();
};

template <typename tipoDato>
tipoDato Operaciones<tipoDato>::suma() {
	return getValor1() + getValor2();
}
template <typename tipoDato>
tipoDato Operaciones<tipoDato>::resta() {
	return getValor1() - getValor2();
}
template <typename tipoDato>
tipoDato Operaciones<tipoDato>::multiplicacion() {
	return getValor1() * getValor2();
}
template <typename tipoDato>
tipoDato Operaciones<tipoDato>::division() {
	if (getValor2() == 0) {
		cout << "No existe la división para 0" << endl;
	}
	else
		return getValor1() / getValor2();
}