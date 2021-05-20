#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
template <typename tipoDato>
class Operaciones{
	private:
		tipoDato valor1;
		tipoDato valor2;
	public:
		Operaciones(tipoDato _valor1,tipoDato _valor2){
			valor1=_valor1;
			valor2=_valor2;
		}
		tipoDato suma();
		tipoDato resta();
		tipoDato multiplicacion();
		tipoDato division();			
};
template <typename tipoDato>
tipoDato Operaciones<tipoDato>::suma(){
	return valor1+valor2;
}
template <typename tipoDato>
tipoDato Operaciones<tipoDato>::resta(){
	return valor1-valor2;
}
template <typename tipoDato>
tipoDato Operaciones<tipoDato>::multiplicacion(){
	return valor1*valor2;
}
template <typename tipoDato>
tipoDato Operaciones<tipoDato>::division(){
	if(valor2==0){
		cout<<"No se puede dividir !!!!"<<endl;
	}else
	return valor1/valor2;
}

int main(int argc, char** argv) {
	float valor1,valor2;
	cout<<"Ingrese el valor 1";
	cin>>valor1;
	cout<<"Ingrese el valor 2";
	cin>>valor2;
	Operaciones<float>operacion(valor1,valor2);
	cout<<"Suma = "<<operacion.suma()<<endl;
	cout<<"Resta = "<<operacion.resta()<<endl;
	cout<<"Multiplicaci�n = "<<operacion.multiplicacion()<<endl;
	cout<<"Divisi�n  = "<<operacion.division()<<endl;
	return 0;
}
