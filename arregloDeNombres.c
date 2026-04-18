#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define MAX 5


int main()
{
    char *nombres[MAX], buff[50];
    int longitud = 0, opciones, id, resultado;
    for (int i = 0; i < MAX; i++)
    {
        printf("Ingrese un nombre:\n");
        scanf("%s", buff);
        longitud = strlen(buff);
        nombres[i] = (char *) malloc(longitud * sizeof(char) + 1);
        strcpy(nombres[i], buff);
    }

    mostrarPersonas(nombres, MAX);
    //usuario
    do
    {
        printf("\nDe que manera desea buscar a algun usuario:\n");
        printf("Opcion 1: Buscar por id\nOpcion 2: Buscar por nombre\n");
        scanf(" %d", &opciones);
        if (opciones < 0 || opciones > 2)
        {
            printf("Opcion no valida, intente nuevamente.\n");
        }
        
    } while (opciones < 0 || opciones > 2);
    
    
    switch (opciones)
    {
    case 1:
        printf("Ingrese el id del usuario a buscar:\n");
        scanf(" %d", &id);
        BuscaNombrePorId(nombres, id, MAX);
        break;
    case 2:
        printf("Ingrese el nombre del usuario:\n");
        scanf(" %s", buff);
        resultado = BuscaNombrePorPalabra(nombres, buff, MAX);
        if (resultado != -1)
        {
            printf("%s", nombres[resultado]);
        }
        break;
    }
    

    return 0;
}




/*
buff[50]-> a medida que ingresan los valores se van pisando
char *puntero; -> guardaria una sola palabra
char **puntero; -> guardaria varias palabras
char *puntero; -> guarda solo la cantidad que tenga max
strstr(cadena1, cadena2)-> analiza si una cadena esta dentro de la otra(pregunta si cadena1 esta dentro de cadena2)
si la encuentra, devuelve la direccion de memoria de la cadena, sino la encuentra devuelve null.
*/
