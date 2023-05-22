
using namespace std;

void consultarClientes(Cliente *cabezaPtr)
{
	setlocale(LC_ALL, "");
    cout << " 		 __________________________________________________________________" << endl;
    cout << " 		|                                                                  | " << endl;
    if (cabezaPtr == NULL)
    {
        cout << " 		|   La lista de Clientes esta vac�a                              " << endl;
    }
    for (; cabezaPtr != NULL; cabezaPtr = cabezaPtr->sig)
    {
        cout << " 		|   # C�dula:       " << cabezaPtr->cedula << "                  " << endl;
        cout << " 		|   Nombre:         " << cabezaPtr->nombre << "                  " << endl;
        cout << " 		|   Direcci�n:      " << cabezaPtr->direccion << "               " << endl;
        cout << " 		|   N�mero:         " << cabezaPtr->numero << "                  " << endl;
        cout << " 		|   E-mail:         " << cabezaPtr->email << "                   " << endl;
        cout << " 		|   ------------------------                                     " << endl;
    }
    cout << " 		|                                                                    " << endl;
    cout << " 		|__________________________________________________________________| " << endl;
    cout<<endl;
}
