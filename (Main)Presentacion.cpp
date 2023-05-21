#include "estructuras.h"
#include <wchar.h>
#include <locale.h>


using namespace std;


int main() {
	
    int respuesta;
	int info;
	setlocale(LC_ALL, "");
	
	Cliente *cabezaCliente = NULL;
	Producto *cabezaProducto = NULL;
	Detalle *cabezaDetalle = NULL;
	Factura *cabezaFactura = NULL;
	
	
	do{
		cout<<"  __________________________________________________________________"<<endl;
		cout<<" |                                                                  |"<<endl;
		cout<<" |      Bienvenido al menú principal                                |"<<endl;
		cout<<" |    Elija una de las siguientes opciones:                         |"<<endl;
		cout<<" |                                                                  |"<<endl;
		cout<<" |    1. Agregar Producto                                           |"<<endl;
		cout<<" |    2. Cambiar el Precio                                          |"<<endl;
		cout<<" |    3. Cambiar el stock** (comprar/vender)                        |"<<endl;
		cout<<" |    4. Eliminar producto                                          |"<<endl;
		cout<<" |    5. Consultar**                                                |"<<endl;
		cout<<" |    5.1. Imprimir cliente                                         |"<<endl;
		cout<<" |    5.2 Imprimir producto                                         |"<<endl;
		cout<<" |    5.3. Imprimir factura                                         |"<<endl;
		cout<<" |    6. Buscar**                                                   |"<<endl;
		cout<<" |    6.1. Buscar Por codigo cliente                                |"<<endl;
		cout<<" |    6.2  Buscar por codigo producto                               |"<<endl;
		cout<<" |    6.3. Buscar por numero de registro factura                    |"<<endl;
		cout<<" |                                                                  |"<<endl;
		cout<<" |    Para salir ingrese -1                                         |"<<endl;
		cout<<" |__________________________________________________________________|"<<endl;
		
		cout<<endl<<"Ingrese su opción: ";											
		cin>>respuesta;
		system("cls");
		switch(respuesta){
			case 1:{
				crearProducto(&cabezaProducto);
				break;
			}
			/*case 2:{
				cout<<"Digite el valor a insertar: ";
				cin>>info;
				insertarPorCola(&cabeza, info);
				break;
			}
			case 3:{
				invertirLista(&cabeza);
				break;
			}
			case 4:{
				cout<<"Digite el valor a eliminar: ";
				cin>>info;
				eliminarPrimeraAparicion(&cabeza, info);
				break;
			}
			case 5:{
				cout<<"Digite el valor a eliminar en toda la lista: ";
				cin>>info;
				eliminarPrimerasApariciones(&cabeza, info);
				break;
			}
			case 6:{
				ordenarPorInsercion(&cabeza);
				break;
			}
			case 7:{
				cout<<"La lista es:"<<endl;
				imprimirLista(cabeza);
				break;
			}
			case 8:{
				cout<<"Digite el valor a eliminar en toda la lista: ";
				cin>>info;
				eliminarPrimerasApariciones(&cabeza, info);
				break;
			}
			case 9:{
				ordenarPorInsercion(&cabeza);
				break;
			}
			case 10:{
				cout<<"La lista es:"<<endl;
				imprimirLista(cabeza);
				break;
			*/
			case -1 :{
				cout<<"Saliendo...."<<endl;
				break;
			}
			default:{
				cout<<"Opción invalida........"<<endl;
				break;
			} 
		}
	system("pause");
	system("cls");
	}while(respuesta != -1);
	return 0;
}

