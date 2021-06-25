#include <iostream>
#include <stdlib.h>
#include "Persona.h"
#include "Lista.h"
#include "Fecha.h"
#include "Nodo.h"
#include "procesos.h"

Persona agregarPersonas(Lista lista);
void calendarioPagos(Lista lista);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv)
{
    Lista lista;
    char opcion;
    for(;;)
    {
        system("cls");
        cout<<"1. Agregar Personas"<<endl;
        cout<<"2. Generar Calendario de Pagos de una Persona"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Ingrese la opcion deseada: ";
        cin.get(opcion);
        while(isdigit(opcion) && (opcion<49 || opcion>51)){
            cout<<"Opcion ingresada no valida, reingrese: ";
            cin.get(opcion);
        }
        switch(opcion)
        {
        case '1':
            lista.insertarCola(agregarPersonas(lista));
            lista.imprimir();
            system("pause");
            break;
        case '2':
            calendarioPagos(lista);
            break;
        case '3':
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
    string telefono;
    cout<<"Ingresar la cedula: ";
    cin>>cedula;
    while(!verificarCedula(cedula))
    {
        cout<<"Numero de cedula no valido, reingrese: ";
        cin>>cedula;
    }
    cout<<"Ingrese el primer nombre: ";
    cin>>primerNombre;
    cout<<"Ingrese el segundo nombre: ";
    cin>>segundoNombre;
    cout<<"Ingrese su apellido: ";
    cin>>apellido;
    cout<<"Ingrese la direccion: ";
    fflush(stdin);
    std::cin.getline(direccion,100);
    dir = direccion;
    cout<<"Ingrese el telefono: ";
    cin>>telefono;
    Persona persona(cedula,primerNombre,segundoNombre,apellido,direccion,telefono);
    cout<<"Se ha ingresado correctamente los datos";
    system("pause");
    return persona;
}

void calendarioPagos(Lista lista)
{
    int opcion;
    string cedula;
    int diaMes;
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
    cin>>opcion;
    while(opcion<1 || opcion>3)
    {
        cout<<"Opcion ingresada no valida, reingrese: ";
        cin>>opcion;
    }
    switch(opcion)
    {
    case 1:
        auxiliar = lista.getPrimero();
        while(auxiliar!=NULL)
        {
            cout<<"Ingrese el dia del mes en el que quiere realizar el pago: ";
            cin>>diaMes;
            while(diaMes<1 || diaMes>31)
            {
                cout<<"Cantidad ingresada no valida, reingrese: ";
                cin>>diaMes;
            }
            cout<<"Ingrese el monto del prestamo: ";
            cin>>monto;
            while(monto<1000)
            {
                cout<<"Cantidad ingresada no valida, reingrese: ";
                cin>>monto;
            }
            cout<<"Ingrese el plazo de meses del prestamo: ";
            cin>>plazo;
            while(plazo<12)
            {
                cout<<"Plazo ingresado no valido, reingrese: ";
                cin>>plazo;
            }
            cout<<"Ingrese el interes al que se le va a cobrar: ";
            cin>>interes;
            while(interes<10)
            {
                cout<<"Cantidad ingresada no valida, reingrese: ";
                cin>>interes;
            }
            generarCalendarioFechas(diaMes,plazo,monto,interes,auxiliar->getPersona());
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
        cout<<"Ingrese el dia del mes en el que quiere realizar el pago: ";
        cin>>diaMes;
        while(diaMes<1 || diaMes>31)
        {
            cout<<"Cantidad ingresada no valida, reingrese: ";
            cin>>diaMes;
        }
        cout<<"Ingrese el monto del prestamo: ";
        cin>>monto;
        while(monto<1000)
        {
            cout<<"Cantidad ingresada no valida, reingrese: ";
            cin>>monto;
        }
        cout<<"Ingrese el plazo de meses del prestamo: ";
        cin>>plazo;
        while(plazo<12)
        {
            cout<<"Plazo ingresado no valido, reingrese: ";
            cin>>plazo;
        }
        cout<<"Ingrese el interes al que se le va a cobrar: ";
        cin>>interes;
        while(interes<10)
        {
            cout<<"Cantidad ingresada no valida, reingrese: ";
            cin>>interes;
        }
        generarCalendarioFechas(diaMes,(float)plazo,(float)monto,(float)interes,persona);
        system("pause");
        break;
    case 3:
        return;
        break;
    }
}
