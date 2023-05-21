#include <string>
#include <iostream>

using namespace std;

struct Fecha
{
	int dia;
	int mes;
	int aniho;
};

struct Cliente
{
	string cedula;
	string nombre;
	string direccion;
	int numero;
	string email;
	Cliente *sig;
};

struct Producto
{
	string codigo;
	string descripcion;
	int valorUnitario;
	int stock;
	Producto *sig;
};

struct Detalle{
	string codigoProducto;
	int cantidad;
	int precio;
	int subtotal;
	Detalle *sig;
};

struct Factura
{
	unsigned long int numero;
	Fecha fechaVenta;
	Cliente *cliente;
	Detalle *cabezaDetalle;
	int total;
	Factura *sig;
};

Cliente *cabezaCliente = NULL;
Producto *cabezaProducto = NULL;
Detalle *cabezaDetalle = NULL;
Factura *cabezaFactura = NULL;
	
#include "funciones/funcionesProducto.h"
#include "funciones/funcionesCliente.h"
#include "funciones/funcionesDetalle.h"
#include "funciones/funcionesMenu.h"
