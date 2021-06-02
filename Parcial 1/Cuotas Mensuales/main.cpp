#include <iostream>
#include "Persona.h"
#include "Fecha.h"
#include "stdlib.h"

using namespace std;

int main()
{

    Persona persona;
    Fecha fecha;

    fecha.setDia(9);
    fecha.setMes(9);
    fecha.setAnio(2021);

    persona.setNombre("Juan");
    persona.setCedula(1713380358);
    persona.setFecha(fecha);

    persona.setMonto(520.30);
    persona.setCuota(12);

    cout << persona.getNombre() << endl;
    cout << persona.getCedula() << endl;
    cout << fecha.getDia() << "/" << fecha.getMes() << "/" << fecha.getAnio() << endl;
    cout << persona.getMonto() << endl;
    cout << persona.getCuota() << " cuotas" << endl;

}
