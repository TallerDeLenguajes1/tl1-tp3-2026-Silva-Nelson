#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "funciones2.h"
#define MAX 50

int main()
{
    int cantClientes;
    Cliente *clientes;
    char buff[50];
    float costo;

    printf("Ingrese la cantidad de clientes:\n");
    scanf(" %d", &cantClientes);
    clientes = (Cliente *) malloc(sizeof(Cliente) * cantClientes);
    srand(time(NULL));
    cargarClientes(clientes, cantClientes);
    mostrarProductos(clientes, cantClientes);
    liberarMemoria(clientes, cantClientes);

    return 0;
}