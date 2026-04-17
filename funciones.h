#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <stdio.h>
#include <string.h>

void BuscarNombre(char **nombres, int id, int cant) {
    if (id < 0 || id > cant)
    {
        printf("No se encuentra el nombre\n");
    }else
    {
        printf("%s\n", nombres[id]);
    }
}

int BuscarNombre(char **nombres, char palabra[], int cant) {
    for (int i = 0; i < cant; i++) {
        if (strstr(nombres[i], palabra) != NULL) return i;
    }
    return -1;
}

#endif