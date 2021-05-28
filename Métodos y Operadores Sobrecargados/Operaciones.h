#pragma once

#include <iostream>
#include "Datos.h"

using namespace std;

class Operaciones{

    private:
        Datos datox;

    public:
        Operaciones() = default;

        void setDatox(Datos);
        Datos getDatox;

        float operator *(Datos &);
        float operator /(Datos &);
        float operator %(Datos &);

};