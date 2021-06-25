#include <iostream>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

/**
 * @file main.cpp
 * @author pzeadrian
 * @version 0.1
 * @date 2021-06-17
 */

using namespace std;

template <typename tipoDato>

class Operaciones {
private:
	tipoDato valor1;
	tipoDato valor2;
public:
	/**
	 * @brief Construct a new Operaciones object
	 * 
	 * @param _valor1 
	 * @param _valor2 
	 */
	Operaciones(tipoDato _valor1, tipoDato _valor2) {

		valor1 = _valor1;
		valor2 = _valor2;

	}

	/**
	 * @brief Set the Valor1 object
	 * 
	 * @param _valor1 
	 * @return tipoDato 
	 */
	tipoDato setValor1(int _valor1) {

		valor1 = _valor1;

	}

	/**
	 * @brief Set the Valor2 object
	 * 
	 * @param _valor2 
	 * @return tipoDato 
	 */
	tipoDato setValor2(int _valor2) {

		valor2 = _valor2;

	}

	/**
	 * @brief Get the Valor1 object
	 * 
	 * @return tipoDato 
	 */
	tipoDato getValor1() {

		return valor1;

	}

	/**
	 * @brief Get the Valor2 object
	 * 
	 * @return tipoDato 
	 */
	tipoDato getValor2() {

		return valor2;

	}

	/**
	 * @brief Suma dos valores
	 * 
	 * @return tipoDato 
	 */
	tipoDato suma();

	/**
	 * @brief Resta dos valores
	 * 
	 * @return tipoDato 
	 */
	tipoDato resta();

	/**
	 * @brief Multiplica dos valores
	 * 
	 * @return tipoDato 
	 */
	tipoDato multiplicacion();

	/**
	 * @brief Divide dos valores
	 * 
	 * @return tipoDato 
	 */
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