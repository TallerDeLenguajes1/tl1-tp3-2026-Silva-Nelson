char *tipoProductos[] = {"Galletas", "Snack","Cigarrillos","Caramelos","Bebidas"};

typedef struct{ 
    int productoID;//numerado en ciclo iterativo
    int cantidad;//entre 1 y 10
    char *tipoProducto;//algun valor del arreglo tipo productos
    float precioUnitario;// entre 10 - 100
}Producto;

typedef struct{   
    int clienteID;// numerador en el ciclo iterativo
    char *nombreCliente;//ingresado por el usuario
    int cantidadProductosAPedir;//aleatorio entre 1 y 5
    Producto *productos; //el tamaño de este arreglo depende de la cantidad de prductos
}Cliente;

//  FUNCIONES
void cargarClientes(Cliente *cliente, int cant)
{
    char buff[50];
    int cantProducto, longitud;
    for (int i = 0; i < cant; i++)
    {
        cliente[i].clienteID = i;
        printf("Ingrese el nombre del cliente :\n");
        scanf(" %s", buff);
        longitud = strlen(buff);
        cliente[i].nombreCliente = (char *) malloc(longitud * sizeof(char) + 1);
        strcpy(cliente[i].nombreCliente, buff);

        cantProducto = (rand()%5) + 1;
        cliente[i].cantidadProductosAPedir = cantProducto;
        cliente[i].productos = malloc(sizeof(Producto) * cantProducto);

        for (int j = 0; j < cantProducto; j++)
        {
            cliente[i].productos[j].productoID = j;
            cliente[i].productos[j].cantidad = (rand()%10) + 1;   
            
            cliente[i].productos[j].tipoProducto = tipoProductos[(rand()%5)];
            
            cliente[i].productos[j].precioUnitario = (float)((rand()%91) + 10);
        }
    }
}

float costoTotal(Cliente *cliente, int cant, char producto[])
{
    float costo;
    for (int i = 0; i < cant; i++)
    {
        for (int j = 0; j < cliente[i].cantidadProductosAPedir; j++)
        {
            if (strcmp(cliente[i].productos[j].tipoProducto, producto) == 0)
            {
                costo = (float)cliente[i].productos[j].cantidad * (float)cliente[i].productos[j].precioUnitario;
            }
        }        
    }
    
    return(costo);
}

void mostrarProductos(Cliente *cliente, int cant)
{
    float costo;
    for (int i = 0; i < cant; i++)
    {
        printf("\n****** CLIENTE NUMERO %d ******\n", i+1);
        printf("NOMBRE DEL CLIENTE : %s\n", cliente[i].nombreCliente);
        printf("CANTIDAD DE PRODUCTOS : %d\n", cliente[i].cantidadProductosAPedir);
        
        for (int j = 0; j < cliente[i].cantidadProductosAPedir; j++)
        {
            printf("\n--- PRODUCTO NUMERO %d ---\n", j+1);
            printf("NOMBRE DEL PRODUCTO : %s\n", cliente[i].productos[j].tipoProducto);
            printf("PRECIO DEL PRODUCTO : %.2f\n", cliente[i].productos[j].precioUnitario);
            printf("CANTIDAD : %d\n", cliente[i].productos[j].cantidad);
            costo = costoTotal(cliente, cant, cliente[i].productos[j].tipoProducto);
            printf("COSTO TOTAL : %.2f\n", costo);
        }
        
    }
    
}

void liberarMemoria(Cliente *cliente, int cant)
{
    for (int i = 0; i < cant; i++)
    {
        free(cliente[i].productos);
        free(cliente[i].nombreCliente);
    }
    free(cliente);
}


/*
    Formula para generar valores:
    
    aleatorio = rand()%10; -> genera entre 0 y 9
    aleatorio = (rand()%10) + 1; -> genera entre 1 y 10 
    rand() % (Cantidad de valores posibles) + (Valor inicial)
*/