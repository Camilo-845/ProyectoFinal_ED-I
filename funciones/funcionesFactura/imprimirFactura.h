void imprimirFactura(Factura *cabezaPtr)
{
    cout << "         _____________________________________________________________________" << endl;
    cout << "        |                                                                     | " << endl;
    cout << "            La informaci�n de la factura numero (" << cabezaPtr->numero << ") es: " << endl;
    cout << " 		     Fecha de venta:   " << cabezaPtr->fechaVenta->dia << "/" << cabezaPtr->fechaVenta->mes << "/" << cabezaPtr->fechaVenta->aniho << "                  " << endl;
    cout << " 		     Cliente:          " << cabezaPtr->cliente->nombre << "               " << endl;
    cout << " 		     Detalles:         " << endl;
    for (Detalle *iter = cabezaPtr->cabezaDetalle; iter != NULL; iter = iter->sig)
    {
        cout << "                       |    		    Codigo producto:    " << iter->codigoProducto << endl;
        cout << "                       |     		    Codigo cantidad:    " << iter->cantidad << endl;
        cout << "                       |     		    Codigo precio:      " << iter->precio << endl;
        cout << "                       |     		    Codigo subtotal:    " << iter->subtotal << endl;
        cout << "                       |     		    --------------------    " << endl;
    }
    cout << " 		    Total:             $" << cabezaPtr->total << endl;
    cout << " 		|                                                                    |" << endl;
    cout << " 		|____________________________________________________________________| " << endl;
    cout << endl;
}