#include <iostream>
#include <stdlib.h>
#include "Operaciones.h" 
#include <math.h>
using namespace std;
int Operaciones::factorial(int n) {
	if (n < 1)
		return 1;
	else
		return n * factorial(n - 1);

}
double Operaciones::AtoR(double angulo) {
	return (angulo * 3.14159) / 180;
}

double Operaciones::cos(double angulo) {
	double coseno = 0;
	int precision = 10;
	
	for (int k = 0; k < precision; k++) {
		coseno= coseno +pow(-1, k) * pow(AtoR(angulo), 2 * k) / factorial(2 * k);
	}
	return coseno;
}