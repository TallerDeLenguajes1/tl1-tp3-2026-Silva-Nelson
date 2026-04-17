#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <stdio.h>
#include <string.h>

// Cambiamos el nombre a la de ID
void BuscaNombrePorId(char **nombres, int id, int cant) {
    if (id >= 0 && id < cant) {
        printf("%s\n", nombres[id]);
    } else {
        printf("no se encontro el valor buscado\n");
    }
}

// Cambiamos el nombre a la de Palabra
int BuscaNombrePorPalabra(char **nombres, char palabra[], int cant) {
    for (int i = 0; i < cant; i++) {
        if (strstr(nombres[i], palabra) != NULL){
            return i;
        }else
        {
            return -1;
        }
    }
}

#endif