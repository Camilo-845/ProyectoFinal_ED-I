
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
				//esperando comprarProducto();
				break;
			}
			case 2:{
				//esperando venderProducto();
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
