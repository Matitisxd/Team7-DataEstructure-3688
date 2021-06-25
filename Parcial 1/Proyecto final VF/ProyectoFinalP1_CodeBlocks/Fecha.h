#ifndef FECHA_H
#define FECHA_H
#include <ctime>

class Fecha
{
	public:
	    Fecha();
		Fecha(int _dia, int _mes, int _anio);
		~Fecha();
		int getDia();
   		void setDia(int newDia);
   		int getMes();
   		void setMes(int newMes);
  		int getAnio();
   		void setAnio(int newAnio);
   		int verificarDiaSemana();
   		bool verificarFecha();
	protected:

	private:
		int dia;
		int mes;
		int anio;
		int dias[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
		int meses[12] = {0,3,3,6,1,4,6,2,5,0,3,5};
		int mesesBisiesto[12] = {0,3,4,0,2,5,0,3,6,1,4,6};
};

#endif
