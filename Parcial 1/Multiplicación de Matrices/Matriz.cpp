#include <iostream>
#include <stdlib.h>
#include "Matriz.h" 
using namespace std;

void Matriz::ingresarMatriz()
{
	int num=0;
	
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            num= rand()%21;
			matrizA[i][j]=num;
        }
    }
    
    cout << "Matriz numero 1: \n"<<endl;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout << matrizA[i][j]<<" ";
        }
        cout << endl<< endl;
    }
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            num=rand()%21;
			matrizB[i][j]=num;
        }
    }
    
    cout << "\nMatriz numero 2: \n"<<endl;
	for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout << matrizB[i][j]<<" ";
        }
        cout << endl<< endl;
    }
}

void Matriz::multiplicarMatriz()
{
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            matrizR[i][j]=0;
            for (k=0; k<3; k++)
            {
                matrizR[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}

void Matriz::imprimirMatriz()
{
    
	cout << "\nLa matriz resultante es: \n"<<endl;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout << matrizR[i][j]<<" ";
        }
        cout << endl<< endl;
    }
}
