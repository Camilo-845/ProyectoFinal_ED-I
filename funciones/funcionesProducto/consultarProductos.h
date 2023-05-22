
void consultarProductos(Producto *cabezaPtr)
{
    cout << " 		 __________________________________________________________________" << endl;
    cout << " 		|                                                                  | " << endl;
    if (cabezaPtr == NULL)
    {
        cout << " 		|   La lista de Clientes esta vacia                              " << endl;
    }
    for (; cabezaPtr != NULL; cabezaPtr = cabezaPtr->sig)
    {
        cout << " 		|   Codigo:              " << cabezaPtr->codigo << "                  " << endl;
        cout << " 		|   Descripcion:         " << cabezaPtr->descripcion << "                  " << endl;
        cout << " 		|   valor Unitario:      $ " << cabezaPtr->valorUnitario << "               " << endl;
        cout << " 		|   stock:               " << cabezaPtr->stock << "                  " << endl;
        cout << " 		|   ------------------------                                     " << endl;
    }
    cout << " 		|                                                                    " << endl;
    cout << " 		|__________________________________________________________________| " << endl;
}