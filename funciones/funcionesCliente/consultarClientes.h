
void consultarClientes(Cliente *cabezaPtr)
{
    cout << " 		 __________________________________________________________________" << endl;
    cout << " 		|                                                                  | " << endl;
    if (cabezaPtr == NULL)
    {
        cout << " 		|   La lista de Clientes esta vacia                              " << endl;
    }
    for (; cabezaPtr != NULL; cabezaPtr = cabezaPtr->sig)
    {
        cout << " 		|   # Cedula:       " << cabezaPtr->cedula << "                  " << endl;
        cout << " 		|   Nombre:         " << cabezaPtr->nombre << "                  " << endl;
        cout << " 		|   Direccion:      " << cabezaPtr->direccion << "               " << endl;
        cout << " 		|   Numero:         " << cabezaPtr->numero << "                  " << endl;
        cout << " 		|   E-mail:         " << cabezaPtr->email << "                   " << endl;
        cout << " 		|   ------------------------                                     " << endl;
    }
    cout << " 		|                                                                    " << endl;
    cout << " 		|__________________________________________________________________| " << endl;
}