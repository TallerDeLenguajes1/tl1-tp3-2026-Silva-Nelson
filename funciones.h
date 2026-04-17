void BuscarNombre(char **nombres, int id, int cant) {
    if (id >= 0 && id < cant) {
        printf("%s\n", nombres[id]);
    } else {
        printf("no se encontro el valor buscado\n");
    }
}