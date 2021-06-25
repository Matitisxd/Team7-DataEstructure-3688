#include <iostream>
#include <stdlib.h>
#include "Operations.h" 
#include <math.h>
using namespace std;

int Operations::fact(int a){
	int f=1;
	for(int i=1;i<=a;i++){
		f=f*i;
	}
	return f;
}

double Operations::secante(int angulo){
	double secante=0;
	int n;
	cout<<"Numero de terminos de la serie: "<<endl;
	cin>>n;
	for(int i=0;i<=n;i++){
		secante = secante+pow(-1,i)*pow(angulo,2*i)/fact(2*i);
	}
	
	secante=1/secante;
	return secante;
}
