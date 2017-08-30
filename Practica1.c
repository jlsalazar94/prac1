#include <stdio.h>
#include <stdlib.h>
#include "TADPilaEst.h"

void menu(pila*);

int main ()
{
	pila Opera,pila *ptr;
	ptr=&Opera;
	menu(Opera);
}

void menu(pila *Opera)
{
	int opcion;
	do
	{
		printf("1.-Ingresar nueva expresión:D\n");
		printf("2.-Validar parentesis\n");
		printf("3.-Transformar a posfijo\n");
		printf("4.-Evaluacion de la expresion en posfijo\n");
		printf("5.-Salir\n");
		scanf("%d",&opcion);
		switch()
		{
			case 1:
			for (int i = 0; i <100;i++)
			{
				Opera.arreglo[i]=0;
			}
			printf("Ingresar la expresión plox :D\n");
			gets(Opera.arreglo);
			break;
			case 2:
			for (int i = 0;(Opera.arreglo[i])!=0;i++)
			{
				push(ptr,Opera.arreglo[i]);
			}
			break;
			case 3:
			break;
			case 4:
			break;
			case 5:
			exit(0);
			break;
			default:
			printf("Seleccion no valida\n");
			break;
		}

	}
	while(0<opcion<6)

	
}


