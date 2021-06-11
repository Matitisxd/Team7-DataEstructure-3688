#include "Nodo.h"
//Nodo de la lista
Nodo::Nodo(int val, Nodo *sig = NULL){
	this->valor=val;
	this->siguiente=sig;
}		
	
