char *tipoProductos[] = {"Galletas", "Snack","Cigarrillos","Caramelos","Bebidas"};

struct Producto { 
    int ProductoID;//numerado en ciclo iterativo
    int Cantidad;//entre 1 y 10
    char *TipoProducto;//algun valor del arreglo tipo productos
    float PrecioUnitario;// entre 10 - 100
};

struct Cliente {   
    int ClienteID;// numerador en el ciclo iterativo
    char *NombreCliente;//ingresado por el usuario
    int CantidadProductosAPedir;//aleatorio entre 1 y 5
    struct Producto *productos; //el tamaño de este arreglo depende de la cantidad de prductos
};

/*
    Formula para generar valores:
    
    aleatorio = rand()%10; -> genera entre 0 y 9
    aleatorio = (rand()%10) + 1; -> genera entre 1 y 10 
*/