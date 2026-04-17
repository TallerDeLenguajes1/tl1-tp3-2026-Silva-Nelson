#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define MAX 5

void mostrarPersonas(char **nombre, int cant);

int main()
{
    char *nombres[MAX];
    char buff[50];
    int longitud = 0;
    for (int i = 0; i < MAX; i++)
    {
        printf("Ingrese un nombre:\n");
        scanf("%s", buff);
        longitud = strlen(buff);
        nombres[i] = (char *) malloc(longitud * sizeof(char) + 1);
        strcpy(nombres[i], buff);
    }
    mostrarPersonas(nombres, MAX);

    return 0;
}

void mostrarPersonas(char **nombre, int cant)
{
    for (int i = 0; i < cant; i++)
    {
        printf("%s\t", nombre[i]);
    }
    
}

/*
char *puntero; -> guardaria una sola palabra
char **puntero; -> guardaria varias palabras
char *puntero; -> guarda solo la cantidad que tenga max
*/
