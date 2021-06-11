#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <sstream>
#include "CuboMagico.h"
#include "Ingreso.h"

using namespace std;

int main()
{

    int **cuadrado;
    Ingreso ingreso;
    int num;
    string dim;
    do{
    	cout<<"Ingrese la dimension de la matriz: "<<endl;
    	dim=ingreso.leer("El valor tiene que ser unicamente impar: ",2);
    	istringstream (dim) >> num;
    }while(num%2==0||num<0);
    num=2*num-1;

    cuadrado=(int**)calloc(num,sizeof(int*));
    for(int i=0;i<num;i++){
        *(cuadrado+i)=(int*)calloc(num,sizeof(int));
    }

    CuboMagico cubo=CuboMagico(cuadrado);
    cubo.llenar(num,num);
    cout<<endl<<"El cubo resultante es: "<<endl;
    cubo.mostrar(num,num);

    system("pause");
    return 0;
}
