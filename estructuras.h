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

struct Detalle
{
	string producto;
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
	Factura *sig;
};

#include "funciones/funcionesProducto.h"
#include "funciones/funcionesCliente.h"
#include "funciones/funcionesDetalle.h"
