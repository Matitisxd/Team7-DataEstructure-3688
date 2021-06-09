#include <iostream>
#include "Pascal.h"
int main()
{
    Pascal p1;
    int filas = 0;

    while (filas < 1) {
        cout << "Ingrese filas:";
        cin >> filas;
    }
    p1.triangulo_pascal(filas);
}


