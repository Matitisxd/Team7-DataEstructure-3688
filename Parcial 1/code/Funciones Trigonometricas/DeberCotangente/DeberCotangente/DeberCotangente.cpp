#include <iostream>
#include "Operaciones.h"
#include "Datos.h"

using namespace std;

int main() {

	float angulo;
	double cotan; 
	int terminos;

	cout << "Ingrese el numero de terminos; ";
	cin >> terminos;

	cout << "\nIngrese el angulo: ";
	cin >> angulo;

	Operaciones op;

	cotan = op.calcularSeno(angulo, terminos);

	cout << "La cotengente de " << angulo << "es: " << cotan << endl;

}