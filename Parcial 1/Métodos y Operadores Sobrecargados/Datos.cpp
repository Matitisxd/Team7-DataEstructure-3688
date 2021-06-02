#include <iostream>
#include "Datos.h"

using namespace std;

Datos::Datos(float valor1, float valor2){

    this->dato1 = valor1;
    this->dato2 = valor2;

}

void Datos::setDato1(float valor1){

    this->dato1 = valor1;

}

void Datos::setDato2(float valor2){

    this->dato2 = valor2;

}

float Datos::getDato1(){

    return dato1;

}

float Datos::getDato2(){

    return dato2;

}
