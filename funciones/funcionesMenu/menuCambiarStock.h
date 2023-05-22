
using namespace std;

void menuCambiarStock(){
	
    int respuesta;
	int info;
	setlocale(LC_ALL, "");
	
	
	do{
		cout<<"  __________________________________________________________________"<<endl;
		cout<<" |                                                                  |"<<endl;
		cout<<" |      Bienvenido al Men� Cambiar Stock                            |"<<endl;
		cout<<" |    Elija una de las siguientes opciones:                         |"<<endl;
		cout<<" |                                                                  |"<<endl;
		cout<<" |    1. Comprar Producto                                           |"<<endl;
		cout<<" |    2. Vender Producto                                            |"<<endl;
		cout<<" |                                                                  |"<<endl;
		cout<<" |    Para salir del Men� Stock ingrese  -1                         |"<<endl;
		cout<<" |__________________________________________________________________|"<<endl;
		
		cout<<endl<<"Ingrese su opci�n: ";											
		cin>>respuesta;
		system("cls");
		switch(respuesta){
			case 1:{
				string codigo;
				cout<<" Ingrese el c�digo del producto a buscar: ";
				cin>>codigo;
				
				Producto *iter = buscarProducto(cabezaProducto, codigo);
				if(iter != NULL){
					cambiarStockProducto(iter);	
				}
				else{
					cout<<"  El c�digo del producto no se encuentra registrado."<<endl;
					cout<<"  Porfavor registre el nuevo art�culo...";
					crearProducto(&cabezaProducto);
				}
				system("pause");
				break;
			}
			case 2:{
				crearFactura(&cabezaFactura, &cabezaCliente, &cabezaProducto);
				system("pause");
				break;
			}
			case -1 :{
				cout<<endl;
				cout<<"Saliendo...."<<endl;
				system("pause");
				break;
			}
			default:{
				cout<<endl;
				cout<<"Opci�n invalida........"<<endl;
				system("pause");
				break;
			} 
		}
		system("cls");
	}while(respuesta != -1);
}
