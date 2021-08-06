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
int menu(int x, int y, string a, string b, string c, string d);
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
    TrieTree t1;
    string todo;
    char todo1[50];
    char todo2[50];
	int op;
    bool valida = true;
    do
    {
    	system("cls");
        cout<<"\nA continuacion elige en que idioma quieres traducir\n";
        op = menu(1, 2, "ESPAÑOL - ENGLISH", "ENGLISH - ESPAÑOL", "Imprimir Arbol", "Salir");

        switch(op)
        {
		        case 1:
		        {
		            system("cls");
		            string palabra,palabra1, palabraIngles;
		            char inicial = ' ';
		            cout << "Traductor ESPAÑOL - ENGLISH: "<< endl;
		            cout << "Ingrese la palabra en español para traducir: \n"<< endl;
		            cin >> palabra;
		            cout << todo;
		            //t1.insert(palabra);
		            cout << "Palabra ingresada al arbol\n";
		            for(int i=0; i< palabra.length();i++){
		            	palabra[i] = tolower(palabra[i]);
		            	//cout << palabra[i];
					}
					cout << endl;
					//cout << palabra[0]<<endl;	
					inicial = palabra[0];
					switch(inicial){
						case 'a':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_a_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;		
							archivoIngles.open("palabras_a_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 'b':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_b_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_b_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}
						case 'c':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_c_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_c_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}
						case 'd':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_d_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_d_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}
						case 'e':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_e_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_e_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}
						case 'f':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_f_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_f_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}
						case 'g':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_g_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_g_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}
						case 'h':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_h_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_h_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}
						case 'i':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_i_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_i_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}	
						case 'j':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_j_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_j_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}	
						case 'k':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_k_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_k_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}	
						case 'l':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_l_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_l_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}	
						case 'm':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_m_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_m_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}	
						case 'n':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_n_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_n_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}
						case 'o':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_o_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_o_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}	
						case 'p':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_p_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_p_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}	
						case 'q':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_q_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_q_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}	
						case 'r':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_r_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_r_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}	
						case 's':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_s_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_s_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}	
						case 't':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_t_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_t_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}	
						case 'u':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_u_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_u_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}	
						case 'v':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_v_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_v_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}
						case 'w':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_w_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_w_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}		
						case 'x':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_x_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_x_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}	
						case 'y':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_y_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_y_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}	
						case 'z':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
							archivo.open("palabras_z_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabra1.c_str(),palabra.c_str()) != 0){
								getline(archivo, palabra1);
								cont++;
							}
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							archivoIngles.open("palabras_z_in.txt",ios::in);
							while (cont1 < cont){
								getline(archivoIngles, palabraIngles);
								cont1++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							getch();
							archivo.close();
							archivoIngles.close();													         
						break;
						}	
											
					}
					
					system("pause");
					valida = false;
					break;
		        }
		        case 2:
		        {
		        	string palabra,palabra1, palabraIngles;
		        	char inicial = ' ';
		            system("cls");
		            cout << "Translate ENGLISH - SPANISH: "<< endl;
		            cout << "Enter a word in spanish to translate: \n"<< endl;
		            cin >> palabra;
		            for(int i=0; i< palabra.length();i++){
		            	palabra[i] = tolower(palabra[i]);
		            	cout << palabra[i];
					}
					cout << endl;
					//cout << palabra[0]<<endl;
					
					inicial = palabra[0];
					switch(inicial){
						case 'a':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
												
							archivoIngles.open("palabras_a_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							
							
							archivo.open("palabras_a_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}
							
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							
							getch();
							
							
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 'b':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
												
							archivoIngles.open("palabras_b_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							
							
							archivo.open("palabras_b_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}
							
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							
							getch();
							
							
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 'c':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
												
							archivoIngles.open("palabras_c_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							
							
							archivo.open("palabras_c_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}
							
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							
							getch();
							
							
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 'd':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
												
							archivoIngles.open("palabras_d_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							
							
							archivo.open("palabras_d_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}
							
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							
							getch();
							
							
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 'e':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;								
							archivoIngles.open("palabras_e_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}		
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;	
							archivo.open("palabras_e_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}
							
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							
							getch();
							
							
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 'f':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
												
							archivoIngles.open("palabras_f_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							
							
							archivo.open("palabras_f_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}
							
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							
							getch();
							
							
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 'g':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
												
							archivoIngles.open("palabras_g_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							
							
							archivo.open("palabras_g_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}					
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;															getch();					
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 'h':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
												
							archivoIngles.open("palabras_h_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}					
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;					
							archivo.open("palabras_h_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}					
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;					
							getch();
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 'i':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
												
							archivoIngles.open("palabras_i_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							
							
							archivo.open("palabras_i_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}
							
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							
							getch();
							
							
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 'j':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
												
							archivoIngles.open("palabras_j_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							
							
							archivo.open("palabras_j_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}
							
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							
							getch();
							
							
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 'k':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
												
							archivoIngles.open("palabras_k_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							
							
							archivo.open("palabras_k_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}
							
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							
							getch();
							
							
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 'l':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
												
							archivoIngles.open("palabras_l_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							
							
							archivo.open("palabras_l_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}
							
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							
							getch();
							
							
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 'm':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
												
							archivoIngles.open("palabras_m_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							
							
							archivo.open("palabras_m_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}
							
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							
							getch();
							
							
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 'n':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
												
							archivoIngles.open("palabras_n_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							
							
							archivo.open("palabras_n_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}
							
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							
							getch();
							
							
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 'o':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
												
							archivoIngles.open("palabras_o_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							
							
							archivo.open("palabras_o_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}
							
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							
							getch();
							
							
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 'p':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
												
							archivoIngles.open("palabras_p_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							
							
							archivo.open("palabras_p_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}
							
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							
							getch();
							
							
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 'q':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
												
							archivoIngles.open("palabras_q_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							
							
							archivo.open("palabras_q_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}
							
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							
							getch();
							
							
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 'r':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
												
							archivoIngles.open("palabras_r_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							
							
							archivo.open("palabras_r_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}
							
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							
							getch();
							
							
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 's':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
												
							archivoIngles.open("palabras_s_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}
							
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							
							
							archivo.open("palabras_s_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}
							
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;
							
							
							getch();
							
							
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 't':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
												
							archivoIngles.open("palabras_t_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}					
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;					
							archivo.open("palabras_t_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}					
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;					
							getch();					
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 'u':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;										
							archivoIngles.open("palabras_u_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}					
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							archivo.open("palabras_u_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}					
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;					
							getch();					
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 'w':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;
												
							archivoIngles.open("palabras_w_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}					
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;
							
							archivo.open("palabras_w_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}					
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;					
							getch();										
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 'x':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;										
							archivoIngles.open("palabras_x_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}					
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;					
							archivo.open("palabras_x_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}					
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;					
							getch();					
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 'y':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;										
							archivoIngles.open("palabras_y_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}					
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;					
							archivo.open("palabras_y_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}					
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;					
							getch();					
							archivo.close();
							archivoIngles.close();												         
						break;
						}
						case 'z':
						{
							ifstream archivo, archivoIngles;
							int cont = 0, cont1 = 0;										
							archivoIngles.open("palabras_z_in.txt",ios::in);
							if(archivoIngles.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (strcmp(palabraIngles.c_str(),palabra.c_str()) != 0){
								getline(archivoIngles, palabraIngles);
								cont++;
							}					
							cout << "Palabra en Ingles: "<< palabraIngles << "\t" << endl;					
							archivo.open("palabras_z_es.txt",ios::in);
							if(archivo.fail()){
								cout << "No se pudo abrir";
								exit(1);
							}
							while (cont1 < cont){
								getline(archivo, palabra1);
								cont1++;
							}					
							cout << "Palabra en Español: " << palabra1.c_str() << "\t"<< endl;				
							getch();		
							archivo.close();
							archivoIngles.close();												         
						break;
						}				
					}
					system("pause");
					valida = false;
					break;
		            break;
		        }
		        case 3:
		        {
		        	system("cls");
					//t1.printAll();
		            getch();
		            break;
		        }
		        caso 4:{
					exit(0);
				}
        }
    }
    while(valida);
}

int menu(int x, int y, string a, string b, string c, string d)
{
    int cant, tempy;  // Vareable donde se almacenara el valor inicial de y
    char tecla;  // Aqui se almacenara las flechas o el enter
    bool aux = true;  // Para que se ejecute el ciclo
    ocultaCursor(false);
    cant = 4;  /*Poner cantidad de opciones*/
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
    gotoxy(x, y + 3);
    cout << "     " << d;

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
