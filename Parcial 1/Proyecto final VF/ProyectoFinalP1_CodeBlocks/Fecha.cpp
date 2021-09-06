#include "Fecha.h"

Fecha::Fecha(int _dia, int _mes, int _anio){
    dia = _dia;
    mes = _mes;
    anio = _anio;
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

bool Fecha::verificarFecha(){
    time_t t = std::time(0);
    tm* now = std::localtime(&t);
    if(mes<1 || mes>12){
        return false;
    }
    if(dia<1 || dia>dias[mes-1]){
        return false;
    }
    if(anio<now->tm_year && anio <now->tm_year +3){
        return false;
    }
    return true;
}
