#include <iostream>
#include <stdlib.h>
#include "Persona.h"
#include "Lista.h"
#include "Fecha.h"
#include "Nodo.h"
#include "procesos.h"
#include "Validacion.h"
Persona agregarPersonas(Lista lista);
void calendarioPagos(Lista lista);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv)
{
    Lista lista;
    int opcion;
    for(;;)
    {
        system("cls");
        cout<<"1. Agregar Personas"<<endl;
        cout<<"2. Generar Calendario de Pagos de una Persona"<<endl;
        cout<<"3. Imprimir listado"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Ingrese la opcion deseada: ";
        opcion = ingresarEntero();
        switch(opcion){
        case 1:
            lista.insertarCola(agregarPersonas(lista));
            lista.imprimir();
            system("pause");
            break;
        case 2:
            calendarioPagos(lista);
            system("pause");
            break;
        case 3:
            lista.imprimir();
            cout<<endl;
            system("pause");
            break;
        case 4:
            exit(0);
            break;
        }
        lista.imprimir();
    }
    return 0;
}

Persona agregarPersonas(Lista lista)
{
    string cedula;
    string primerNombre;
    string segundoNombre;
    string apellido;
    char direccion[100];
    string dir;
    int telefono;
    cout<<"Ingresar la cedula: ";
    cin>>cedula;
    while(!verificarCedula(cedula) || !lista.buscarDuplicado(cedula))
    {
        if(!lista.buscarDuplicado(cedula)){
            cout<<"El numero de cedula ingresado ya se encuentra registrado, reingrese: ";
        }else{
            cout<<"Numero de cedula no valido, reingrese: ";
        }
        cin>>cedula;
    }
    cout<<"Ingrese el primer nombre: ";
    primerNombre = ingresarLetra();
    cout<<"Ingrese el segundo nombre: ";
    segundoNombre = ingresarLetra();
    cout<<"Ingrese su apellido: ";
    apellido= ingresarLetra();
    cout<<"Ingrese la direccion: ";
    fflush(stdin);
    cin.getline(direccion,100);
    cout<<"Ingrese el telefono: ";
    telefono= ingresarEntero();
    Persona persona(cedula,primerNombre,segundoNombre,apellido,direccion,to_string(telefono));
    cout<<"Se ha ingresado correctamente los datos"<<endl;
    system("pause");
    return persona;
}

void calendarioPagos(Lista lista)
{
    int opcion;
    string cedula;
    Fecha fecha;
    int dia;
    int mes;
    int anio;
    bool condicionFecha = true;
    int plazo;
    float monto;
    float interes;
    Nodo *auxiliar;
    Persona persona;
    system("cls");
    cout<<"1. Generar calendario de pagos de las personas ingresadas"<<endl;
    cout<<"2. Generar calendario de pagos de una persona"<<endl;
    cout<<"3. Regresar"<<endl;
    cout<<"Ingrese la opcion deseada: ";
    opcion = ingresarEntero();
    while(opcion<1 || opcion>3)
    {
        cout<<"Opcion ingresada no valida, reingrese: ";
        opcion = ingresarEntero();
    }
    switch(opcion)
    {
    case 1:
        auxiliar = lista.getPrimero();
        while(auxiliar!=NULL)
        {
            while(condicionFecha){
                cout<<"Ingrese el dia de inicio del prestamo: ";
                dia= ingresarEntero();;
                fecha.setDia(dia);
                cout<<"Ingrese el mes de inicio del prestamo: ";
                mes= ingresarEntero();;
                fecha.setMes(mes);
                cout<<"Ingrese el anio de inicio del prestamo: ";
                anio= ingresarEntero();;
                fecha.setAnio(anio);
                condicionFecha = !fecha.verificarFecha();
            }

            cout<<"Ingrese el monto del prestamo: ";
            monto = ingresarfloat();
            while(monto<1000)
            {
                cout<<"Cantidad ingresada no valida, reingrese: ";
                monto= ingresarfloat();
            }
            cout<<"Ingrese el plazo de meses del prestamo: ";
            plazo = ingresarEntero();
            while(plazo<12)
            {
                cout<<"Plazo ingresado no valido, reingrese: ";
                plazo = ingresarEntero();
            }
            cout<<"Ingrese el interes al que se le va a cobrar: ";
            interes = ingresarfloat();
            while(interes<10)
            {
                cout<<"Cantidad ingresada no valida, reingrese: ";
                interes= ingresarfloat();
            }
            generarCalendarioFechas(dia,mes,anio,plazo,monto,interes,auxiliar->getPersona());
            auxiliar = auxiliar->getSiguiente();
        }
        system("pause");
        break;
    case 2:
        cout<<"Ingrese la cedula de la persona que desea generar el calendario:";
        cin>>cedula;
        while(!verificarCedula(cedula))
        {
            cout<<"Numero de cedula no valido, reingrese: ";
            cin>>cedula;
        }
        persona = lista.buscarPersona(cedula);
        while(condicionFecha){
                cout<<"Ingrese el dia de inicio del prestamo: ";
                dia = ingresarEntero();
                fecha.setDia(dia);
                cout<<"Ingrese el mes de inicio del prestamo: ";
                mes = ingresarEntero();
                fecha.setMes(mes);
                cout<<"Ingrese el anio de inicio del prestamo: ";
                anio = ingresarEntero();
                fecha.setAnio(anio);
                condicionFecha = !fecha.verificarFecha();
            }
        cout<<"Ingrese el monto del prestamo: ";
        monto = ingresarfloat();
        while(monto<1000)
        {
            cout<<"Cantidad ingresada no valida, reingrese: ";
            monto = ingresarfloat();
        }
        cout<<"Ingrese el plazo de meses del prestamo: ";
        plazo = ingresarEntero();
        while(plazo<12)
        {
            cout<<"Plazo ingresado no valido, reingrese: ";
            plazo = ingresarEntero();
        }
        cout<<"Ingrese el interes al que se le va a cobrar: ";
        interes = ingresarfloat();
        while(interes<10)
        {
            cout<<"Cantidad ingresada no valida, reingrese: ";
            interes = ingresarfloat();
        }
        generarCalendarioFechas(dia,mes,anio,plazo,monto,interes,persona);
        system("pause");
        break;
    case 3:
        return;
        break;
    }
}
