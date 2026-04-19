#ifndef FUNCIONES_H
#define FUNCIONES_H

void mostrarPersonas(char **nombre, int cant)
{
    for (int i = 0; i < cant; i++)
    {
        printf("%s\t", nombre[i]);
    }
    
}

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
        }
    }
    return -1;
}

void liberar_memoria(char **nombres, int cant)
{
    for (int i = 0; i < cant; i++)
    {
        free(nombres[i]);
    }
    
}

#endif