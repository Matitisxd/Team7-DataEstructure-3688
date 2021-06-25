//Encabezado
#pragma once

#include <iostream>

using namespace std;

class Datos{
    private:
        float dato1;
        float dato2;

    public:
        Datos() = default;
        Datos(float);
        Datos(float, float);
        void setDato1(float);
        float getDato1();

        void setDato2(float);
        float getDato2();

};