#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
#include "Persona.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <sstream>

class Lista
{
	private:
		Nodo *primero = NULL;
	public:
		void insertarCola(Persona persona);
		void eliminarCola();
		void imprimir();
		void insertarCabeza(Persona persona);
		void eliminarCabeza();
		Persona buscarPersona(string cedula);
		Nodo *getPrimero();
		std::string generarCorreo(Nodo* primero, Persona persona);

};

#endif
