#pragma once

#include <iostream>

class MetodosSobrecargados
{
    public:
        int suma(int);
        int suma(int, float);
        float suma(float, int);

        int getValor1(void);
        void setValor1(int newValor1);

        float getValor2(void);
        void setValor2(float newValor2);

    private:
        int valor1;
        float valor2;
};
