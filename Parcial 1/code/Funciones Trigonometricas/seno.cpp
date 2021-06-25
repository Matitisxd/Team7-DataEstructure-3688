/*
Universidad de las Fuerzas Armadas ESPE
Autores:Navas Renato, Ruiz Jerico, Pallango Andres, Paez Adrian, Rodriguez Mathyws
Fecha de creacion: 11/06/2021
Fecha de Modificacion: 15/06/2021
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int n =10, signo;
    double numerador = 1, denominador = 1;
    double x = 60;
    double seno = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j < 2*i+1; j++){
            numerador = numerador * x;
        }

        for (int j = 1; j <= 2*i+1; j++){
            denominador = denominador *j;
        }

        if(signo %2 ==0){
            signo = 1;
        }else{
            signo = -1;
        }        

        seno = seno + (numerador/ denominador)*signo;
    }

    cout<< "Seno "<<x<<": "<<seno<< endl;

    system ("pause");
    return 0;
}
