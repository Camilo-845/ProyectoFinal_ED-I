
using namespace std;

void crearCliente(Cliente **cabezaPtr){
	int respuesta = 1;
	
	do{
		Cliente *nuevo = new Cliente;
		nuevo->sig = NULL;
		
		cout<<"Digite su cedula: ";
		cin>>nuevo->cedula;
		Cliente *validacionCliente = buscarCliente(*cabezaPtr, nuevo->cedula);
		if(validacionCliente != NULL){
			
			do{
				cout<<"Esta cedula ya esta registrada ingrese una nueva cedula: ";
				cin>>nuevo->cedula;
			}
			while(buscarCliente(*cabezaPtr, nuevo->cedula) != NULL);
		}
		
		cout<<"Ingrese su Nombre y Apellido: ";
		cin.ignore();
    	getline(cin, nuevo->nombre);
    	cout<<endl;
    	
    	cout<<"Ingrese su dirección: ";
		cin>>nuevo->direccion;
		
		cout<<"Ingrese su numero telefonico: ";
		cin>>nuevo->numero;
		
		cout<<"Ingrese su corre electronico: ";
		cin>>nuevo->email;
		
		if(*cabezaPtr == NULL){								
			*cabezaPtr = nuevo;
		}
		else{
			Cliente *iter = *cabezaPtr;
			for(;iter->sig != NULL; iter = iter->sig );
			iter->sig = nuevo;
		}
		
		system("CLS");
		cout<<endl;
		cout<<"Ingrese (-1) para salir del menu si desea agregar un nuevo producto ingrese (1): ";
		cin>>respuesta;
	}
	while(respuesta != -1);	
}
