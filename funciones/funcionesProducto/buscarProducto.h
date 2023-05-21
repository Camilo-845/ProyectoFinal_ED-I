
Producto *buscarProducto(Producto *cabezaPtr, string codigo)
{
    for (; cabezaPtr != NULL; cabezaPtr = cabezaPtr->sig)
    {
        string codigoProducto = "AR" + codigo;
        if (codigoProducto == cabezaPtr->codigo)
        {
            return cabezaPtr;
        }
    }
    return NULL;
}