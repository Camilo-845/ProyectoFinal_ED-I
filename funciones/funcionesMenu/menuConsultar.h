
using namespace std;

void menuConsultar(){
	
    int respuesta;
	int info;
	setlocale(LC_ALL, "");
	
	
	do{
		cout<<"  __________________________________________________________________"<<endl;
		cout<<" |                                                                  |"<<endl;
		cout<<" |      Bienvenido al Men� de Consulta                              |"<<endl;
		cout<<" |    Elija una de las siguientes opciones:                         |"<<endl;
		cout<<" |                                                                  |"<<endl;
		cout<<" |    1. Consultar Clientes                                         |"<<endl;
		cout<<" |    2. Consultar Productos                                        |"<<endl;
		cout<<" |    3. Consultar Facturas                                         |"<<endl;
		cout<<" |                                                                  |"<<endl;
		cout<<" |    Para salir del Men� de Consulta ingrese  -1                   |"<<endl;
		cout<<" |__________________________________________________________________|"<<endl;
		
		cout<<endl<<"Ingrese su opci�n: ";											
		cin>>respuesta;
		system("cls");
		switch(respuesta){
			case 1:{
				consultarClientes(cabezaCliente);
				break;
			}
			case 2:{
				consultarProductos(cabezaProducto);
				break;
			}
			case 3:{
				//esperando consultarFacturas();
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
