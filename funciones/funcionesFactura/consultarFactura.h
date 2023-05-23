
void consultarFactura(Factura *cabezaPtr)
{
    cout<<"          __________________________________________________________________"<<endl;
    cout<<"         |                                                                  |"<<endl;
    if (cabezaPtr == NULL)
    {
        cout<<"         |   La lista de Facturas esta vacia                              "<<endl;
    }
    for (; cabezaPtr != NULL; cabezaPtr = cabezaPtr->sig)
    {
        cout<<"         |   # numero:       "<<cabezaPtr->numero<<"                  "<<endl;
        cout<<"         |   Fecha de venta: "<<cabezaPtr->fechaVenta->dia<<"/"<<cabezaPtr->fechaVenta->mes<<"/"<<cabezaPtr->fechaVenta->aniho<<"                  "<<endl;
        cout<<"         |   Cliente:      "<<cabezaPtr->cliente->nombre<<"               "<<endl;
        cout<<"         |   Detalles:         "<<endl;
        for (Detalle *iter = cabezaPtr->cabezaDetalle; iter != NULL; iter = iter->sig)
        {
            cout<<"         |             -Codigo producto:    "<<iter->codigoProducto<<endl;
            cout<<"         |             -Cantidad:    "<<iter->cantidad<<endl;
            cout<<"         |             -Precio:      $"<<iter->precio<<endl;
            cout<<"         |             -Subtotal:    $"<<iter->subtotal<<endl;
            cout<<"          -------------------------------------    "<<endl;
        }
        cout<<"         |     Total:         $"<<cabezaPtr->total<<"                   "<<endl;
        cout<<"          --------------------------------------                        "<<endl;
    }
    cout<<"         |                                                                    "<<endl;
    cout<<"         |__________________________________________________________________| "<<endl;
    cout<<endl;
}
