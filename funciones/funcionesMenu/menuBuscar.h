
using namespace std;

void menuBuscar(){
	
    int respuesta;
	int info;
	setlocale(LC_ALL, "");
	
	
	do{
		cout<<"  __________________________________________________________________"<<endl;
		cout<<" |                                                                  |"<<endl;
		cout<<" |      Bienvenido al Men� de B�squeda                              |"<<endl;
		cout<<" |    Elija una de las siguientes opciones:                         |"<<endl;
		cout<<" |                                                                  |"<<endl;
		cout<<" |    1. Buscar Cliente                                             |"<<endl;
		cout<<" |    2. Buscar Producto                                            |"<<endl;
		cout<<" |    3. Buscar Factura                                             |"<<endl;
		cout<<" |                                                                  |"<<endl;
		cout<<" |    Para salir del Men� de B�squeda ingrese  -1                   |"<<endl;
		cout<<" |__________________________________________________________________|"<<endl;
		
		cout<<endl<<"Ingrese su opci�n: ";											
		cin>>respuesta;
		system("cls");
		switch(respuesta){
			case 1:{
				string cedula;
				cout<<" Digite la cedula del usurio a buscar: ";
				cin>>cedula;
				
				Cliente *iter = buscarCliente(cabezaCliente, cedula);
				imprimirCliente(iter);	
				break;
			}
			case 2:{
				string codigo;
				cout<<" Ingrese el c�digo del producto a buscar: ";
				cin>>codigo;
				
				Producto *iter = buscarProducto(cabezaProducto, codigo);
				imprimirProducto(iter);
				break;
			}
			case 3:{
				//esperando buscarFactura();
				//esperando imprimirFactura();
				break;
			}
			case -1 :{
				cout<<endl;
				cout<<"Saliendo...."<<endl;
				break;
			}
			default:{
				cout<<endl;
				cout<<"Opci�n invalida........"<<endl;
				break;
			} 
		}
		system("pause");
		system("cls");
	}while(respuesta != -1);
}
