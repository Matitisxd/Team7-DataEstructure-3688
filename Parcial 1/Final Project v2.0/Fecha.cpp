#include "Fecha.h"

Fecha::Fecha(int _dia, int _mes, int _anio){
    this->dia = _dia;
    this->mes = _mes;
    this->anio = _anio;
}

Fecha::Fecha()
{
}

Fecha::~Fecha()
{
}

int Fecha::getDia(void)
{
   return dia;
}

void Fecha::setDia(int newDia)
{
   dia = newDia;
}

int Fecha::getMes(void)
{
   return mes;
}

void Fecha::setMes(int newMes)
{
   mes = newMes;
}

int Fecha::getAnio(void)
{
   return anio;
}

void Fecha::setAnio(int newAnio)
{
   anio = newAnio;
}

int Fecha::verificarDiaSemana(){
	int m;
	if(anio % 4 == 0){
		m = mesesBisiesto[mes - 1];
	}else{
		m = meses[mes - 1];
	}
	return ((anio - 1) % 7 + ((anio - 1) / 4 - (3 *((anio - 1) / 100 + 1) / 4)) % 7 + m + dia % 7) % 7;
}
