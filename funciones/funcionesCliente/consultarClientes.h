
using namespace std;

void consultarClientes(Cliente *cabezaPtr)
{
	setlocale(LC_ALL, "");
    cout << " 		 __________________________________________________________________" << endl;
    cout << " 		|                                                                  | " << endl;
    if (cabezaPtr == NULL)
    {
        cout << " 		|   La lista de Clientes esta vacía                              " << endl;
    }
    for (; cabezaPtr != NULL; cabezaPtr = cabezaPtr->sig)
    {
        cout << " 		|   # Cédula:       " << cabezaPtr->cedula << "                  " << endl;
        cout << " 		|   Nombre:         " << cabezaPtr->nombre << "                  " << endl;
        cout << " 		|   Dirección:      " << cabezaPtr->direccion << "               " << endl;
        cout << " 		|   Número:         " << cabezaPtr->numero << "                  " << endl;
        cout << " 		|   E-mail:         " << cabezaPtr->email << "                   " << endl;
        cout << " 		|   ------------------------                                     " << endl;
    }
    cout << " 		|                                                                    " << endl;
    cout << " 		|__________________________________________________________________| " << endl;
    cout<<endl;
}
