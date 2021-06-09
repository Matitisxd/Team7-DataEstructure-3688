#include "Pascal.h"

int Pascal::llenar_posicion(int fila, int indice) {
    if (fila == 1)
        return 1;
    if (indice == 0 || indice == fila - 1)            
        return 1;
    else
        return llenar_posicion(fila - 1, indice - 1) + llenar_posicion(fila - 1, indice);
}

void Pascal::espacios_en_blanco(int n) {
    if (n > 0) {
        cout << " ";
        espacios_en_blanco(n - 1);
    }
    else cout << "";
}
void Pascal::mostrar_pascal(int pos, int fila, int n, int esp, bool band) {

    if (fila <= n) {
        if (band == true) {
            espacios_en_blanco(esp);
            band = false;
        }
        cout << llenar_posicion(fila, pos) << " ";
        if (pos < fila - 1)
            mostrar_pascal(pos + 1, fila, n, esp, band);
        else {
            cout << endl;
            band = true;
            mostrar_pascal(0, fila + 1, n, esp - 1, band);
        }
    }
    else {
        cout << endl;
        band = true;
    }
}
void Pascal::triangulo_pascal(int filas) {  
    mostrar_pascal(0, 1, filas, filas, true);
}
