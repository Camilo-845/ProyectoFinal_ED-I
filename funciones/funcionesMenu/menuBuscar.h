
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
				//esperando buscarCliente();
				//esperando imprimirCliente();
				break;
			}
			case 2:{
				//esperando buscarProducto();
				//esperando imprimirProducto();
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
