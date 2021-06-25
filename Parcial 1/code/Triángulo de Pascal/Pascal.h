#pragma once
#include <iostream> 
using namespace std;

class Pascal {

private:
    int fila, indice;

public:
    int llenar_posicion(int, int);
    void espacios_en_blanco(int);
    void mostrar_pascal(int, int, int, int, bool);
    void triangulo_pascal(int);
};

