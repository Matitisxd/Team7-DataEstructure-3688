#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include "Operations.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Operations op;
	float anguloGrados;
	float PI=3.141592;
	cout<<"Valor del angulo en grados: "<<endl;
	cin>>anguloGrados;
	anguloGrados=anguloGrados*PI/180;
		
	cout<<"La secante es: "<<op.secante(anguloGrados);
	return 0;
}
