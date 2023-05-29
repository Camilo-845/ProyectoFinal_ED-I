
using namespace std;

void imprimirCliente (Cliente *cabezaPtr) {
	
	setlocale (LC_ALL, "");
	cout << "        ____________________________________________________________________" << endl;
    cout << "       |                                                                    | " << endl;
    if(cabezaPtr == NULL) {
    	
        cout << "       |   No se ha encontrado el usario.                             " << endl;
        cout << "       |   Porfavor intente nuevamente....                            " << endl;
    } else {
		
		cout << "            Los datos del cliente registrado con documento ("<<cabezaPtr->cedula<<") son: " << endl << endl;
		cout << "               Nombre: " << cabezaPtr->nombre << endl;
		cout << "               E-mail: " << cabezaPtr->email << endl;
		cout << "               Número: " << cabezaPtr->numero << endl;
		cout << "               Dirección: " << cabezaPtr->direccion << endl;
		cout << " 		    ------------------------                                         " << endl;
	}
	cout << "       |                                                                    |" << endl;
    cout << "       |____________________________________________________________________| " << endl;
    cout << endl;
	
}

