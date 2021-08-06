#include<iostream>
#include <cstdio>
#include <ctype.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <cstdlib>
#include <locale.h>
#include <stdio.h>
#include <wchar.h>
#include <string>
#include <string.h>
#include <fstream>
#include "TrieTree.h"

using namespace std;

#define ARRIBA 72
#define ABAJO  80
#define ENTER  13

void menuCursor();
int menu(int x, int y, string a, string b, string c);
void gotoxy(int x, int y);
void Selector(int i);
void ocultaCursor(bool boleano);
int main()
{
	setlocale(LC_ALL,"");

    for (;;)
    {
        menuCursor();
    }
    system("pause");
    return 0;

}
void menuCursor()
{


    system("cls");
    int op;
    bool valida = true;
    do
    {
        cout<<"\nA continuacion elige en que idioma quieres traducir\n";
        op = menu(1, 2, "ESPAÑOL - ENGLISH", "ENGLISH - ESPAÑOL", "Salir");

        switch(op)
        {
        case 1:
        {
            system("cls");
            string palabra;
            char inicial = ' ';
            cout << "Traductor ESPAÑOL - ENGLISH: "<< endl;
            cout << "Ingrese la palabra en español para traducir: \n"<< endl;
            cin >> palabra;
            for(int i=0; i< palabra.length();i++){
            	palabra[i] = tolower(palabra[i]);
            	cout << palabra[i];
			}
			cout << endl;
			cout << palabra[0]<<endl;
			inicial = palabra[0];
			switch(inicial){
				case 'a':
				{
					FILE *pf;
					int c, cont=0;
					int opc;
    				int contador = 0, encontrado = 0;
    				char cadena[256], buscar[100];
    				char *a;
					pf=fopen("palabras_a_es.txt","r");		            
		            /*rewind(pf);		 
		            contador = 0;		            
		            encontrado = 0;		 
		            while (!feof(pf))
		            {
		                contador++;		                
		                fgets(cadena,256,pf);		                
		                a = strtok(cadena,",.- ");		                
		                while (a != NULL)
		                {
		                    if (!strcmp(buscar, a))
		                    {
		                        encontrado++;
		                        
		                        if (encontrado == 1)
		                        printf("\n     COINCIDENCIAS\n");
		                        printf("\n     %d. Seencontro la palabra/frase: %s.\n     Linea en que se encontro: %d.\n", encontrado, a, contador);
		                    }
		                    a = strtok (NULL, " ");
		                }
		            }   
		            if (encontrado <= 0)
		            printf("\n     La palabra o frase no se encontro en el archivo.\n");
					*/
					
					while((c = fgetc(pf))!=EOF){
						putchar(c);
						cont++;
					}
					cout << endl;
					
					
    
					system("pause");
					if ( pf == NULL ) printf ("Error al abrir el fichero");
					else fclose(pf);



					break;
				}

			}
            system("pause");
            valida = false;
			break;
        }
        case 2:
        {
            system("cls");
            cout << "Translate ENGLISH - SPANISH: "<< endl;
            cout << "Enter a word in spanish to translate: \n"<< endl;
            system("pause");
            valida = false;
            break;
        }
        case 3:
        {
            exit(0);
            break;
        }
        }

    }
    while(valida);
}

int menu(int x, int y, string a, string b, string c)
{
    int cant, tempy;  // Vareable donde se almacenara el valor inicial de y
    char tecla;  // Aqui se almacenara las flechas o el enter
    bool aux = true;  // Para que se ejecute el ciclo

    ocultaCursor(false);
    cant = 3;  /*Poner cantidad de opciones*/

    if(x < 0)  // Por si dan una cordenada no valida
        x = 0;

    if(y < 0)  // Por si dan una cordenada no valida
        y = 0;

    tempy = y;

    cant -= 1;  // Para que se pueda dar la aritmetica y comienze desde 0

    gotoxy(x, y);
    cout << char(196) << char(196) << ">";  // Imprime la flecha en la cordenada que se le dio
    gotoxy(x + 5, y);  // Todo lo de aqui abajo es para imprimir las opciones del menu
    cout << "   " << a;
    gotoxy(x, y + 1);
    cout << "     " << b;
    gotoxy(x, y + 2);
    cout << "     " << c;

    do
    {
        tecla = getch();  // Obtener la tecla que se presiono

        if(tecla == -32)   // Si da -32 significa que ha apretado una tecla de direccion
        {
            gotoxy(x, y);  // Se borra la flecha
            cout << "   ";
            tecla = getch();  // Se queda en el buffer otro numero que indica que tecla de direccion se presiono

            if(tecla == 72)  //Arriba
            {

                if(y == tempy)   // Si la flecha llega a la primera opcion se baja a la ultima obcion
                {
                    y = cant + tempy;
                }
                else
                {
                    y--;  // Se le disminuye una unidad a y para que suba la flecha
                }

            }
            else if(tecla == 80)  // Abajo
            {

                if(y == cant + tempy)   // Si la flecha llega a la ultima opcion se sube a la primera obcion
                {
                    y = tempy;
                }
                else
                {
                    y++;  // Se le aumenta una unidad a y para que baje la flecha
                }

            }
            gotoxy(x, y);  // Se posiciona en el lugar correcto dependiendo de que tecla apreto
            cout <<"-->";  // Se imprime la flecha en el lugar correcto

            switch (y - tempy + 1)   // Para que este dentro de las opciones 1, 2, 3......10
            {
            case 1:
                gotoxy(x + 5, tempy);  // Se imprime la opcion 1 con 8 espacios (5 del 1er argumento y 3 en el cout)
                cout << "   " << a;
                gotoxy(x, tempy + 1);
                cout << "     " << b << "   ";  // Los ultimos espacios son para que se borren las opciones anteriormente tabuladoas
                gotoxy(x, tempy + 2);
                cout << "     " << c << "   ";
                break;

            case 2:
                gotoxy(x, tempy);
                cout << "     " << a << "   ";
                gotoxy(x + 5, tempy + 1);
                cout << "   " << b;
                gotoxy(x, tempy + 2);
                cout << "     " << c << "   ";
                break;

            case 3:
                gotoxy(x, tempy);
                cout << "     " << a << "   ";
                gotoxy(x, tempy + 1);
                cout << "     " << b << "   ";
                gotoxy(x + 5, tempy + 2);
                cout << "   " << c;
                break;
            }
        }
        else if(tecla == 13)   // Para ver si se presiono enter
        {
            aux = false;
        }
    }
    while(aux);

    ocultaCursor(true);

    return y - tempy + 1;  // Retorna el valor de la opcion seleccionada
}

void gotoxy(int x, int y)
{
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

void Selector(int i)
{
    gotoxy(1, 1 + i);
}
void ocultaCursor(bool boleano)
{
    CONSOLE_CURSOR_INFO cci = {100, boleano}; // El segundo miembro de la estructura indica si se muestra el cursor o no.

    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
}

