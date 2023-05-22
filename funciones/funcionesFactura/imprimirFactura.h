

void imprimirFactura(Factura *cabezaPtr) {
	
    setlocale(LC_ALL, "");
    cout << "        ____________________________________________________________________" << endl;
    cout << "       |                                                                    | " << endl;
    if (cabezaPtr == NULL) {
        cout << "       |   No se ha encontrado la factura.                           " << endl;
        cout << "       |   Por favor intente nuevamente....                            " << endl;
    }

    for (Factura *iter = cabezaPtr; iter != NULL; iter = iter->sig) {
        cout << "        _____________________________________________________________________" << endl;
        cout << "       |                                                                     | " << endl;
        cout << "           La información de la factura número (" << iter->numero << ") es: " << endl;
        cout << "             Fecha de venta:   " << iter->fechaVenta->dia << "/" << iter->fechaVenta->mes << "/" << iter->fechaVenta->aniho << "                  " << endl;
        cout << "             Cliente:          " << iter->cliente->nombre << "               " << endl;
        cout << "             Detalles:         " << endl << endl;

        for (Detalle *jiter = iter->cabezaDetalle; jiter != NULL; jiter = jiter->sig) {
            cout << "-Código producto:    " << jiter->codigoProducto << endl;
            cout << "-Cantidad:    " << jiter->cantidad << endl;
            cout << "-Precio:      $" << jiter->precio << endl;
            cout << "-Subtotal:    $" << jiter->subtotal << endl;
            cout << " ------------------------    " << endl;
        }
        cout << "             Total:             $" << iter->total << endl;
    }
    cout << "       |                                                                    |" << endl;
    cout << "       |____________________________________________________________________| " << endl;
    cout << endl;
}

