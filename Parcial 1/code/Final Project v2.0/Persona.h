#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

using namespace std;

class Persona
{
	public:
		Persona();
		~Persona();
		Persona(string _cedula, string _primerNombre, string _segundoNombre, string _apellido, string _direccion, string _telefono);
		void setCedula(string _cedula);
		string getCedula();
		void setPrimerNombre(string _primerNombre);
		string getPrimerNombre();
		void setSegundoNombre(string _segundoNombre);
		string getSegundoNombre();
		void setApellido(string _apellido);
		string getApellido();
		void setCorreo(string _correo);
		string getCorreo();
		void setDireccion(string _direccion);
		string getDireccion();
		void setTelefono(string _telefono);
		string getTelefono();
	protected:

	private:
		string cedula;
		string primerNombre;
		string segundoNombre;
		string apellido;
		string correo;
		string direccion;
		string telefono;
};

#endif
