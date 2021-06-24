#include <iostream>
#include "Book.h"
#include <conio.h>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{

	Book book;
    long _id, _bornDate, _phoneNumber;
    string _name, _lastName, _email;
    printf("INGRESE LOS DATOS DEL NUEVO CLIENTE...");

	fflush(stdin);
    printf("\n\nNo. de Cedula: ");
    scanf("%ld", &_id);

	fflush(stdin);
    printf("\nNombres: ");
    getline(cin, _name);

	fflush(stdin);
    printf("\nApellidos: ");
    getline(cin, _lastName);

	fflush(stdin);
    printf("\nFecha de nacimiento: ");
    scanf("%ld", &_bornDate);

	fflush(stdin);
    printf("\nNo. de Celular: ");
    scanf("%ld", &_phoneNumber);

    _email = book.generateEmail(_id, _name, _lastName);
    
    cout << "El correo generado es: " << _email << endl;
	getch();


	getch();
	return 0;
}