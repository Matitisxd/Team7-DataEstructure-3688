#include <iostream>
#include "SobrecargaMetodos.h"

int MetodosSobrecargados::getValor1(void)
{
    return valor1;
}

void MetodosSobrecargados::setValor1(int newValor1)
{
    valor1 = newValor1;
}

float MetodosSobrecargados::getValor2(void)
{
    return valor2;
}

void MetodosSobrecargados::setValor2(float newValor2)
{
    valor2 = newValor2;
}

int MetodosSobrecargados::suma(int valor1)
{
    return valor1 + 5;
}

int MetodosSobrecargados::suma(int valor1, float valor2)
{
    return valor1 + int(valor2);
}

float MetodosSobrecargados::suma(float valor2, int valor1)
{
    return valor2 + float(valor1); 
}