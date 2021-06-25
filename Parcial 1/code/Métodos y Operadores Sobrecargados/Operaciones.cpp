#include <iostream>
#include "Operaciones.h"

using namespace std;

void Operaciones::setDatox(Datos datox){

    this->datox = datox;

}

Datos Operaciones::getDatox(){

    return datox;

}

Datos Operaciones::operator*(Datos &operar){

    return Datos(operar.getDato1() * operar.getDato2());

}

Datos Operaciones::operator/(Datos &operar){

    if(operar.getDato2() == 0){
        return -1.999555;
    }else{
        return Datos(operar.getDato1() / operar.getDato2());
    }

}

Datos Operaciones::operator%(Datos &operar){

    return Datos(operar.getDato1() % operar.getDato2());

}