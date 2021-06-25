#include "Cuadrado.h"
#include <iostream>
#include <stdio.h>
using namespace std;

Cuadrado::Cuadrado(int _dim)
{
	this ->dim = _dim;
}
int Cuadrado::ingreso(){
    int n;
    cout << "Ingresar dimension del cuadrado: " << endl;
    cin >> n;
    return n;
}
void Cuadrado::calcular(int n)
{
    int i, j, l;
    for (i = 1; i <= n; i++)
    {
        for (j = i, l = 1; l <= n; l++, j++)
        {
            if (j > n)
            {
                for (j = 1; l <= n; l++, j++)
                {
                    cout << j;
                }
            }
            else
                cout << j;
        }
        printf("\n");
    }
}
