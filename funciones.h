#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <stdio.h>
#include <string.h>


int BuscarNombre(char **nombres, char palabra[], int cant) {
    for (int i = 0; i < cant; i++) {
        if (strstr(nombres[i], palabra) != NULL)
        {
            return i;
        }else
        {
            return -1;   
        }       
    }
}

#endif