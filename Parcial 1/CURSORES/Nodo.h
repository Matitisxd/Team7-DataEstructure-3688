#include<iostream>
class Nodo{
	private:
		int valor;	
		Nodo *siguiente;
	public:
		Nodo(int val, Nodo *sig);		
	friend class Lista;
};
