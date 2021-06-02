#pragma once
#include <iostream>
#include"Vector.h"

class Operaciones {
	private:
		Vector vc;
	public:
		Operaciones() = default;
		Operaciones(Vector&);
		void encerar();
		void ingresar();
		float procesar();
		void imprimir();
};




