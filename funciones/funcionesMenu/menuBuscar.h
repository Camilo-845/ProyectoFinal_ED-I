
using namespace std;

void menuBuscar(){
	
    int respuesta;
	int info;
	setlocale(LC_ALL, "");
	
	
	do{
		cout<<"  __________________________________________________________________"<<endl;
		cout<<" |                                                                  |"<<endl;
		cout<<" |      Bienvenido al Menú de Búsqueda                              |"<<endl;
		cout<<" |    Elija una de las siguientes opciones:                         |"<<endl;
		cout<<" |                                                                  |"<<endl;
		cout<<" |    1. Buscar Cliente                                             |"<<endl;
		cout<<" |    2. Buscar Producto                                            |"<<endl;
		cout<<" |    3. Buscar Factura                                             |"<<endl;
		cout<<" |                                                                  |"<<endl;
		cout<<" |    Para salir del Menú de Búsqueda ingrese  -1                   |"<<endl;
		cout<<" |__________________________________________________________________|"<<endl;
		
		cout<<endl<<"Ingrese su opción: ";											
		cin>>respuesta;
		system("cls");
		switch(respuesta){
			case 1:{
				string cedula;
				cout<<" Digite la cedula del usurio a buscar: ";
				cin>>cedula;
				buscarCliente(cabezaCliente, cedula);
				imprimirCliente(cabezaCliente);
				break;
			}
			case 2:{
				string codigo;
				cout<<" Ingrese el codigo del producto a buscar: ";
				cin>>codigo;
				buscarProducto(cabezaProducto, codigo);
				imprimirProducto(cabezaProducto);
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
				cout<<"Opción invalida........"<<endl;
				break;
			} 
		}
		system("pause");
		system("cls");
	}while(respuesta != -1);
}
