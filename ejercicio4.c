#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
#include "funciones.h"

int main()
{
    char *nombres[MAX], buff[MAX];
    int cant_nombres, longitud;
    printf("Ingrese la cantidad de nombres que desee ingresar:\n");
    scanf(" %d", &cant_nombres);

    for (int i = 0; i < cant_nombres; i++)
    {
        printf("Ingrese un nombre:\n");
        scanf(" %s", buff);
        longitud = strlen(buff);
        nombres[i] = malloc((sizeof(char) * longitud) + 1);
        strcpy(nombres[i], buff);
    }
    
    mostrarPersonas(nombres, cant_nombres);
    liberar_memoria(nombres, cant_nombres);

    return 0;
}