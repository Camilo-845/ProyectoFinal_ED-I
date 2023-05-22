
using namespace std;

void imprimirCliente(Cliente *cabezaPtr){
	
	setlocale(LC_ALL, "");
	
	for(Cliente *iter = cabezaPtr; iter != NULL; iter = iter->sig){
		
		cout<<"          _____________________________________________________________________" << endl;
    	cout<<"         |                                                                     | " << endl;
		cout<<"            Los datos del cliente registrado con documento ("<<iter->cedula<<") son: "<<endl<<endl;
		cout<<"               Nombre: "<<iter->nombre<<endl;
		cout<<"               E-mail: "<<iter->email<<endl;
		cout<<"               Número: "<<iter->numero<<endl;
		cout<<"                Dirección: "<<iter->direccion<<endl;
		cout<<" 		    ------------------------                                         " << endl;
		cout<<" 		|                                                                    |" << endl;
    	cout<<" 		|____________________________________________________________________| " << endl;
    	cout<<endl;
	}
	
}

