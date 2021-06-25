#include "Menu.h"
#include "Lista.cpp"

int main(int argc, char** argv) {	
	Menu menu;
	Lista lista;
	int opcion;
	int numero;
	do{
		opcion = menu.menu();
		switch(opcion){
			case 0:
				do{
					system("cls");
					cout << "Ingresar el numero a insertar: " << endl;
					cin >> numero;
					lista.insertar(numero);
				}while(menu.repetir() != 1);				
				break;	
			case 1:
				do{		
					system("cls");		
					cout << "Cola" << endl;
					system("pause");
				}while(menu.repetir() != 1);
				//cola
				break;
			case 2:
				do{
					system("cls");
					cout << "elm cabeza" << endl;
					system("pause");
				}while(menu.repetir() != 1);				
				//eliminar cabeza
				break;
			case 3:
				do{
					system("cls");
					cout << "el cola" << endl;
					system("cls");
				}while(menu.repetir() != 1);								
				break;
			case 4:				
					system("cls");
					lista.mostrar();
					system("pause");					
				break;
			default:
				cout << "Finalizando programa" <<endl;
				cout << "Hasta Pronto";
				break;			
		}
	}while(opcion != 5);		
	return 0;
}
