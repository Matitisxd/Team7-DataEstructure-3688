#ifndef FECHA_H
#define FECHA_H

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
	protected:
	private:
		int dia;
		int mes;
		int anio;
		int meses[12] = {0,3,3,6,1,4,6,2,5,0,3,5};
		int mesesBisiesto[12] = {0,3,4,0,2,5,0,3,6,1,4,6};
};

#endif
