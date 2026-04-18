char *tiposProductos[]={“Galletas”,”Snack”,”Cigarrillos”,”Caramelos”,”Bebidas”};  
struct Producto { 
    int ProductoID;//numero en ciclo iterativo       
    int Cantidad;//entre 1 y 10
    char *TipoProducto;   // Algún valor del arreglo TiposProductos       
    float PrecioUnitario; // entre 10 - 100 
};  
struct Cliente {   
    int ClienteID;               
    char *NombreCliente;         
// Numerado en el ciclo iterativo 
// Ingresado por usuario 
    int CantidadProductosAPedir; // (aleatorio entre 1 y 5) 
    Producto *Productos;     
//El tamaño de este arreglo depende de la variable 
// “CantidadProductosAPedir”  
}; 