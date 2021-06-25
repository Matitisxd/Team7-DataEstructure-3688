#include "Nodo.cpp"
using namespace std;
class Lista{
	
	private:
		Nodo *primero;
		Nodo *actual;
	
	public:
		
		Lista();		
		void insertar(int val);
		bool listaVacia();
		void mostrar();
};
