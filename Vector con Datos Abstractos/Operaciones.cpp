#include"Operaciones.h"
#include <stdlib.h>

Operaciones::Operaciones(Vector& v)
{
	this->vc = v;
}

void Operaciones::encerar() {
	int v[10];
	for (int i = 0; i < 10; i++) {
		v[i]= 0;
	}
	this->vc.set_vect(v);
}
void Operaciones::ingresar() {
	int v[10];
	for (int i = 0; i < 10; i++) {
		v[i] = rand()%11;
	}
	this->vc.set_vect(v);
}
float Operaciones::procesar() {
	int *v1=vc.get_vect();
	float promedio = 0.0f;
	for (int i = 0; i < 10; i++) {
		promedio += v1[i];
	}
	return promedio /= 10.00f;
}
void Operaciones::imprimir() {
	int* v1 = vc.get_vect();
	for (int i = 0; i < 10; i++) {
		std::cout<< v1[i] <<std::endl;
	}
}