
using namespace std;

void imprimirCliente(Cliente *cabezaPtr){
	
	setlocale(LC_ALL, "");
	cout << "        ____________________________________________________________________" << endl;
    cout << "       |                                                                    | " << endl;
    if(cabezaPtr == NULL){
    	
        cout <<"       |   No se ha encontrado el usario.                             " << endl;
        cout <<"       |   Porfavor intente nuevamente....                            " << endl;
    }
	
	for(Cliente *iter = cabezaPtr; iter != NULL; iter = iter->sig){
		
		cout<<"          _____________________________________________________________________" << endl;
    	cout<<"         |                                                                     | " << endl;
		cout<<"            Los datos del cliente registrado con documento ("<<iter->cedula<<") son: "<<endl<<endl;
		cout<<"               Nombre: "<<iter->nombre<<endl;
		cout<<"               E-mail: "<<iter->email<<endl;
		cout<<"               N�mero: "<<iter->numero<<endl;
		cout<<"               Direcci�n: "<<iter->direccion<<endl;
		cout<<" 		    ------------------------                                         " << endl;
	}
	cout<<"       |                                                                    |" << endl;
    cout<<"       |____________________________________________________________________| " << endl;
    cout<<endl;
	
}

