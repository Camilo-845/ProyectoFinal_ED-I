#include <iostream>

Detalle *crearDetalle(string producto, int cantidad, int precio, int subtotal)
{
    Detalle *nuevo = new Detalle();
    nuevo->producto = producto;
    nuevo->cantidad = cantidad;
    nuevo->precio = precio;
    nuevo->subtotal = subtotal;
    nuevo->sig = NULL;
    return nuevo;
}