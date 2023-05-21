#include "estructuras.h"
#include <wchar.h>
#include <locale.h>


using namespace std;


int main() {
	
    int respuesta;
	int info;
	setlocale(LC_ALL, "");
	
	do{
		cout<<" 	                                                                        "<<endl;
		cout<<"                                                                             "<<endl;
		cout<<" 		 __________________________________________________________________" <<endl;
		cout<<" 		|                                                                  | "<<endl;
		cout<<" 		|      Bienvenido al menú principal                                | "<<endl;
		cout<<" 		|    Elija una de las siguientes opciones:                         | "<<endl;
		cout<<" 		|                                                                  | "<<endl;
		cout<<" 		|    1. Agregar Producto                                           | "<<endl;
		cout<<" 		|    2. Cambiar el Precio                                          | "<<endl;
		cout<<" 		|    3. Menu Cambiar stock: (comprar/vender)                       | "<<endl;
		cout<<" 		|    4. Eliminar producto                                          | "<<endl;
		cout<<" 		|    5. Menu Consultar : (Clientes/Productos/Facturas)             | "<<endl;
		cout<<" 		|    6. Menu Buscar :  (Cliente/Producto/Factura)                  | "<<endl;
		cout<<" 		|                                                                  | "<<endl;
		cout<<" 		|    Para salir ingrese -1                                         | "<<endl;
		cout<<" 		|__________________________________________________________________| "<<endl;
		
		cout<<endl<<"	Ingrese su opción: ";											
		cin>>respuesta;
		system("cls");
		cout<<endl;
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
			}*/
			case 3:{
				menuCambiarStock();
				break;
			}
			/*case 4:{
				cout<<"Digite el valor a eliminar: ";
				cin>>info;
				eliminarPrimeraAparicion(&cabeza, info);
				break;
			}
			*/
			case 5:{
				menuConsultar();
				break;
			}
			/*
			case 6:{
				ordenarPorInsercion(&cabeza);
				break;
			}
			*/
			case -1 :{
				cout<<endl;
				cout<<"Saliendo...."<<endl;
				system("pause");
				break;
			}
			default:{
				cout<<endl;
				cout<<"Opción invalida........"<<endl;
				system("pause");
				break;
			} 
		}
		system("cls");
	}while(respuesta != -1);
	
	return 0;
}

