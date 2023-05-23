

void imprimirFactura(Factura *factura) {
	
    setlocale(LC_ALL, "");

    if (factura == NULL) {
    	cout << "        ____________________________________________________________________" << endl;
    	cout << "       |                                                                    | " << endl;
        cout << "       |   No se ha encontrado la factura.                           " << endl;
        cout << "       |   Por favor intente nuevamente....                            " << endl;
    }

    
    cout << "        _____________________________________________________________________" << endl;
    cout << "       |                                                                     | " << endl;
    cout << "       |    La información de la factura número (" << factura->numero << ") es: " << endl;
    cout << "       |      Fecha de venta:   " << factura->fechaVenta->dia << "/" << factura->fechaVenta->mes << "/" << factura->fechaVenta->aniho << "                  " << endl;
    cout << "       |      Cliente:          " << factura->cliente->nombre << "               " << endl;
    cout << "       |      Detalles:         " << endl << endl;

    for (Detalle *iter = factura->cabezaDetalle; iter != NULL; iter = iter->sig) {
    	
        cout << "       |       -Código producto:    " << iter->codigoProducto << endl;
        cout << "       |       -Cantidad:    " << iter->cantidad << endl;
        cout << "       |       -Precio:      $" << iter->precio << endl;
        cout << "       |       -Subtotal:    $" << iter->subtotal << endl;
        cout << "        ------------------------------------    " << endl;
    }
    
    cout << "             Total:           $" << factura->total << endl;
    cout << "        -------------------------------------------------------------------- "<<endl;
    cout << "       |                                                                    |" << endl;
    cout << "       |____________________________________________________________________| " << endl;
    cout << endl;
}

