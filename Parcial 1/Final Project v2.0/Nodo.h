#ifndef NODO_H
#define NODO_H
#include "Persona.h"
class Nodo
{
	public:
		Nodo(Persona _persona);
		~Nodo();
		Nodo *getSiguiente();
		void setSiguiente(Nodo *_siguiente);
		void setPersona(Persona _persona);
		Persona getPersona();
	protected:
		
	private:
		Persona persona;
		Nodo *siguiente =NULL;
};

#endif
