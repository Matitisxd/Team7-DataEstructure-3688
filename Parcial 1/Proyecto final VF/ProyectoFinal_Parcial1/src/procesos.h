#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <iomanip>
#include <math.h>
#include "Persona.h"
#include "Fecha.h"

using namespace std;

void generarCalendarioFechas(int diaMes, int mes, int anio,int plazo,float monto,float interes,Persona persona)
{
    string nombreArchivo = persona.getPrimerNombre() + persona.getApellido();
    string nombreAux = nombreArchivo + ".txt";
    float totalPrestamo = monto +(monto*(interes/100));
    float cuota = totalPrestamo/plazo;
    float interesTotales = totalPrestamo - monto;
    float cuotaInteres = cuota - monto/plazo;
    ofstream fichero(nombreArchivo+".txt");
    fichero<<"Cedula: "<<persona.getCedula()+"\n";
    fichero<<"Nombre: " +persona.getPrimerNombre()+" "+persona.getSegundoNombre()+ " " + persona.getApellido() +"\n";
    fichero<<"Direccion: " + persona.getDireccion()+"\t\tTelefono: "+persona.getTelefono()+ "\tCorreo: " + persona.getCorreo()+"@espe.fin.ec" +"\n";
    fichero<<"Monto de prestamo: "<<fixed<<setprecision(2)<<monto<<"\t\tPlazo en meses: "+to_string(plazo)+"\n";
    fichero<<"Total Prestamo: "<<fixed<<setprecision(2)<<totalPrestamo<<"\tValor de Cuota: "<<fixed<<setprecision(2)<<cuota<<"\n";
    fichero<<"Fecha de Pago\t\t\tMonto\t\t\t\t\tIntereses\n";
    interesTotales-=cuotaInteres;
    for(int i=0; i<plazo; i++,mes++)
    {
        Fecha fecha;
        if(mes==13)
        {
            mes = 1;
            anio++;
            fecha.setDia(diaMes);
            fecha.setMes(mes);
            fecha.setAnio(anio);
            while(fecha.verificarDiaSemana()==6 || fecha.verificarDiaSemana()==0)
            {
                fecha.setDia(fecha.getDia()+1);

            }
        }
        else
        {
            fecha.setDia(diaMes);
            fecha.setMes(mes);
            fecha.setAnio(anio);
            while(fecha.verificarDiaSemana()==6 || fecha.verificarDiaSemana()==0)
            {
                fecha.setDia(fecha.getDia()+1);
            }
        }
        fichero<<to_string(fecha.getDia())+"/"+to_string(fecha.getMes())+"/"+to_string(fecha.getAnio())+"\t\t\t\t"<<fixed<<setprecision(2)<<cuota<<"\t\t\t\t\t\t"<<fixed<<setprecision(2)<<interesTotales<<"\n";
        interesTotales-=cuotaInteres;
    }
    fichero.close();
    nombreArchivo = "txt2pdf.exe "+ nombreArchivo + ".txt " + nombreArchivo + ".pdf -oao -pfs60 -pps43 -ptc0 -width3000 -height2000";
    //remove(nombreArchivo+".pdf");
    char nombre[200];
    strcpy(nombre,nombreArchivo.c_str());
    system(nombre);
    strcpy(nombre,nombreAux.c_str());
    cout<<"Calendario generado correctamente!!"<<endl;
    system("pause");
}

bool verificarCedula(string cedula)
{
    int mul1=0,mul2=0,res,cont=1,sum1=0,sum2=0,sum3=0,ult_n1,ult_n2;
    int coc1,coc2;
    int num;
    stringstream ss;
    ss << cedula;
    ss >> num;
    do
    {
        mul1=0;
        mul2=0;
        sum1=0;
        sum2=0;
        sum3=0;
        cont=1;
        while (num<99999999 || num>9999999999)
        {
            return false;
        }
        ult_n1=num%10;
        coc1=num/10;
        num=coc1;
        do
        {
            do
            {
                coc2=num/10;
                res=num%10;
                if (cont%2==0)
                {
                    mul2=res*1;
                    if (mul2>=10)
                        mul2-=9;
                    sum2+=mul2;
                }
                else
                {
                    mul1=res*2;
                    if (mul1>=10)
                        mul1-=9;
                    sum1+=mul1;
                }
                cont++;
                num=coc2;
            }
            while (coc2 != 0);
            sum3=sum1+sum2;
            if ((sum3%10)!=0)
            {
                ult_n2=sum3/10;
                ult_n2++;
                ult_n2*=10;
                ult_n2-=sum3;
            }
            else
                ult_n2-=ult_n2;
            if(ult_n2==ult_n1)
                while (ult_n2==ult_n1)
                {
                    return true;
                }
        }
        while (ult_n2==ult_n1);
        return false;
    }
    while (ult_n2!=ult_n1);
    return true;
}

