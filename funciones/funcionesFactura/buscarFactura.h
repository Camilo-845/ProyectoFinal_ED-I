Factura *buscarFactura(Factura *cabezaPtr, int numero)
{
    for (; cabezaPtr != NULL; cabezaPtr = cabezaPtr->sig)
    {
        if (numero == cabezaPtr->numero)
        {
            return cabezaPtr;
        }
    }
    return NULL;
}