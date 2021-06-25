#include "Persona.h"

Persona::Persona()
{
	this->cedula = "";
	this->primerNombre = "";
	this->segundoNombre = "";
	this->apellido = "";
	this->direccion = "";
	this->telefono = "";
	this->correo = "";
}

Persona::~Persona()
{
}


Persona::Persona(string _cedula, string _primerNombre, string _segundoNombre, string _apellido, string _direccion, string _telefono){
	this->cedula = _cedula;
	this->primerNombre = _primerNombre;
	this->segundoNombre = _segundoNombre;
	this->apellido = _apellido;
	this->direccion = _direccion;
	this->telefono = _telefono;
	this->correo = "";
}
void Persona::setCedula(string _cedula){
	this->cedula = _cedula;
}
string Persona::getCedula(){
	return this->cedula;
}
void Persona::setPrimerNombre(string _primerNombre){
	this->primerNombre = _primerNombre;
}
string Persona::getPrimerNombre(){
	return this->primerNombre;
}
void Persona::setSegundoNombre(string _segundoNombre){
	this->segundoNombre = _segundoNombre;
}
string Persona::getSegundoNombre(){
	return this->segundoNombre;
}
void Persona::setApellido(string _apellido){
	this->apellido = _apellido;
}
string Persona::getApellido(){
	return this->apellido;
}
void Persona::setCorreo(string _correo){
	this->correo = _correo;
}
string Persona::getCorreo(){
	return this->correo;
}
void Persona::setDireccion(string _direccion){
	this->direccion = _direccion;
}
string Persona::getDireccion(){
	return this->direccion;
}
void Persona::setTelefono(string _telefono){
	this->telefono = _telefono;
}
string Persona::getTelefono(){
	return this->telefono;
}


