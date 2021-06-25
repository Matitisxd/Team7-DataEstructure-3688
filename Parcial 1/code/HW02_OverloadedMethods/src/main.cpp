#include <iostream>
#include <conio.h>
#include "SobrecargaMetodos.h"
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
	int a;
	float b;

	cout << "Inserta un valor entero: ";
	cin >> a;

	cout << "Inserta un valor cualquiera: ";
	cin >> b;

	MetodosSobrecargados sobrecarga;
	
	cout << "\nSuma de un solo valor + 5 = " << sobrecarga.suma(a) << endl;
	cout << "\nSuma de dos valores, retorna entero = " << sobrecarga.suma(a, b) << endl;
	cout << "\nSuma de dos valores, retorna float = " << sobrecarga.suma(b, a) << endl;

	getch();

	return 0;
}