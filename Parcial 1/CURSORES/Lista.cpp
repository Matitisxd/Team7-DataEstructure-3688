#include"Lista.h"
Lista::Lista(){	
	this->primero=NULL;
	this->actual=NULL;		
}

void Lista::insertar(int val){
	Nodo *nuevo=new Nodo(val);
	if (listaVacia()){
		this->primero=nuevo;
	}
	else{
		this->actual->siguiente = nuevo;
	}
	this->actual=nuevo;
}
		
void Lista::mostrar(){
	Nodo *tmp=this->primero;
	while(tmp){
		cout<<tmp->valor<< "-->";
		tmp=tmp->siguiente;
	}
	cout<<"NULL\n";
}

bool Lista::listaVacia(){
	return (this->primero==NULL);
}
