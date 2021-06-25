#include <iostream>
#include "Datos.h"
#include "Operaciones.h"

using namespace std;

int main(){

    float valor1, valor2;

    cout << "Ingrese el primer valor: " << endl;
    cin >> valor1;

    cout << "Ingrese el segundo valor: " << endl;
    cin >> valor2;

    Datos datos(valor1, valor2);
    Operaciones operar;

    cout << "El producto es: " << operar.operator*(datos) << endl;
    cout << "El cociente es: " << operar.operator/(datos) << endl;
    cout << "El residuo es: " << operar.operator%(datos) << endl;

    return EXIT_SUCCESS;

}