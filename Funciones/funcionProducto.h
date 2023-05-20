
Producto *crearProducto(string codigo, string descripcion, int valorUnitario, int stock)
{
    Producto *nuevo = new Producto();
    nuevo->codigo = codigo;
    nuevo->descripcion = descripcion;
    nuevo->valorUnitario = valorUnitario;
    nuevo->stock = stock;
    return nuevo;
}