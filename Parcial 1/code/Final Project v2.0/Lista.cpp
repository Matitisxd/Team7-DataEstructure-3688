#include "Lista.h"

void Lista::insertarCola(Persona persona)
{
    persona.setCorreo(generarCorreo(primero,persona));
    Nodo *nuevo = new Nodo(persona);
    if(primero == NULL)
    {
        primero = nuevo;
    }
    else
    {
        Nodo *auxiliar = primero;
        while(auxiliar->getSiguiente() != NULL)
        {
            auxiliar = auxiliar->getSiguiente();
        }
        auxiliar->setSiguiente(nuevo);
    }
}

void Lista::insertarCabeza(Persona persona)
{
    persona.setCorreo(generarCorreo(primero,persona));
    Nodo *nuevo = new Nodo(persona);
    if(primero == NULL)
    {
        primero = nuevo;
        return;
    }
    nuevo->setSiguiente(primero);
    primero = nuevo;
}

void Lista::eliminarCola()
{
    if(primero == NULL)
    {
        std::cout << "Lista vacia";
    }
    else
    {
        Nodo *auxiliar = primero;
        Nodo *anterior = auxiliar;
        while(auxiliar->getSiguiente() != NULL)
        {
            anterior = auxiliar;
            auxiliar = auxiliar->getSiguiente();
        }
        if(anterior == auxiliar)
        {
            primero = NULL;
        }
        else
        {
            anterior->setSiguiente(NULL);
        }
        delete(auxiliar);
    }
}

void Lista::eliminarCabeza()
{
    if(primero == NULL)
    {
        std::cout << "Lista vacia";
        return;
    }
    primero = primero->getSiguiente();
}

Persona Lista::buscarPersona(string cedula)
{
    Persona persona;
    if(primero == NULL)
    {
        std::cout << "Lista vacia";
    }
    else
    {
        Nodo *auxiliar = primero;
        while(auxiliar != NULL)
        {
            if(cedula.compare(auxiliar->getPersona().getCedula()) != 0){
                auxiliar = auxiliar->getSiguiente();
            }else{
                return auxiliar->getPersona();
                return persona;
            }

        }

    }
    return persona;
}

void Lista::imprimir()
{
    if(primero == NULL)
    {
        std::cout << "Lista vacia";
    }
    else
    {
        Nodo *auxiliar = primero;
        while(auxiliar != NULL)
        {
            Persona persona = auxiliar->getPersona();
            std::cout<<"Cedula: "<<auxiliar->getPersona().getCedula()<<std::endl;
            std::cout<<"Nombre: "<<persona.getPrimerNombre()<<" "<<auxiliar->getPersona().getSegundoNombre()<<std::endl;
            std::cout<<"Apellido: "<<persona.getApellido()<<std::endl;
            std::cout<<"Correo: "<<persona.getCorreo()<<"@espe.fin.ec"<<std::endl;
            std::cout<<"Direccion: "<<persona.getDireccion()<<std::endl;
            std::cout<<"Telefono: "<<persona.getTelefono()<<std::endl;
            auxiliar = auxiliar->getSiguiente();
        }

    }
}

Nodo *Lista::getPrimero()
{
    return this->primero;
}

string Lista::generarCorreo(Nodo* primero, Persona persona)
{
    Nodo *auxiliar = primero;
    string inicialesNombre = "";
    string inicialApellido = "";
    int contadorI;
    string strAux;
    inicialesNombre.push_back(tolower(persona.getPrimerNombre()[0]));
    inicialesNombre.push_back(tolower(persona.getSegundoNombre()[0]));
    string correo = inicialesNombre + persona.getApellido();
    string correoAux;
    inicialApellido.push_back(tolower(persona.getApellido()[0]));
    correo.replace(2,1,inicialApellido);
    correo+= " ";
    while(auxiliar!=NULL)
    {
        if(auxiliar->getPersona().getCorreo().compare(correo))
        {
            strAux = auxiliar->getPersona().getCorreo();
            char contador = strAux.at(strAux.length()-1);
            stringstream ss;
            strAux="";
            strAux.push_back(contador);
            ss << strAux;
            ss >> contadorI;
            contadorI++;
            correo.replace(correo.length()-1,1,to_string(contadorI));
        }
        auxiliar = auxiliar->getSiguiente();
    }
    return correo;
}
