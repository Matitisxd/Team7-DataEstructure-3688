#include <iostream>
#include "Validacion.h"

using namespace std;

class Ingreso {

public:
	string leer(string,int);
};

string Ingreso::leer(string mensage,int tipo) {
	Validacion validacion;
	string entrada;
	cout << mensage << endl;
	cin >> entrada;
	while (validacion.validar(entrada, tipo)) {
		cout << "El valor ingresado no es valido, intenta otra vez: " << endl;
		cin >> entrada;
	}
	return entrada;

}
