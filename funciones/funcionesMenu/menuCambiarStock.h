
using namespace std;

void menuCambiarStock(){
	
    int respuesta;
	int info;
	setlocale(LC_ALL, "");
	
	
	do{
		cout<<"  __________________________________________________________________"<<endl;
		cout<<" |                                                                  |"<<endl;
		cout<<" |      Bienvenido al Menú Cambiar Stock                            |"<<endl;
		cout<<" |    Elija una de las siguientes opciones:                         |"<<endl;
		cout<<" |                                                                  |"<<endl;
		cout<<" |    1. Comprar Producto                                           |"<<endl;
		cout<<" |    2. Vender Producto                                            |"<<endl;
		cout<<" |                                                                  |"<<endl;
		cout<<" |    Para salir del Menú Stock ingrese  -1                         |"<<endl;
		cout<<" |__________________________________________________________________|"<<endl;
		
		cout<<endl<<"Ingrese su opción: ";											
		cin>>respuesta;
		system("cls");
		switch(respuesta){
			case 1:{
				string codigo;
				cout<<" Ingrese el código del producto a buscar: ";
				cin>>codigo;
				
				Producto *iter = buscarProducto(cabezaProducto, codigo);
				if(iter != NULL){
					cambiarStockProducto(iter);	
				}
				else{
					cout<<"  El código del producto no se encuentra registrado."<<endl;
					cout<<"  Porfavor registre el nuevo artículo...";
					crearProducto(&cabezaProducto);
				}
				break;
			}
			case 2:{
				crearFactura(&cabezaFactura, &cabezaCliente, &cabezaProducto);
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
