
using namespace std;

void imprimirCliente(Cliente *cabezaPtr){
	
	for(Cliente *iter = cabezaPtr; iter != NULL; iter = iter->sig){
		
		cout<<"Los datos del cliente registrado con documento ("<<iter->cedula<<") son: "<<endl<<endl;
		cout<<"Nombre : "<<iter->nombre<<endl;
		cout<<"Correo Electronico: "<<iter->email<<endl;
		cout<<"Numero Telefonico: "<<iter->numero<<endl;
		cout<<"Dirección: "<<iter->direccion<<endl;
	}
	
}

