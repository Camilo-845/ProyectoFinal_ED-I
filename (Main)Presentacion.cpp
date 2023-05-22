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
		cout<<" 		|      Bienvenido al Menú Principal                                | "<<endl;
		cout<<" 		|    Elija una de las siguientes opciones:                         | "<<endl;
		cout<<" 		|                                                                  | "<<endl;
		cout<<" 		|    1. Agregar Producto                                           | "<<endl;
		cout<<" 		|    2. Cambiar el Precio                                          | "<<endl;
		cout<<" 		|    3. Menu Cambiar stock: (comprar/vender)                       | "<<endl;
		cout<<" 		|    4. Eliminar producto                                          | "<<endl;
		cout<<" 		|    5. Menú Consultar : (Clientes/Productos/Facturas)             | "<<endl;
		cout<<" 		|    6. Menú Buscar :  (Cliente/Producto/Factura)                  | "<<endl;
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
			case 2:{
				string codigo;
				cout<<" Ingrese el codigo del producto a buscar: ";
				cin>>codigo;
				
				Producto *iter = buscarProducto(cabezaProducto, codigo);
				if(iter != NULL){
					cambiarPrecioProducto(iter);	
				}
				else{
					cout<<"El codigo ingresado no se encuentra en nuestra base de datos."<<endl;
					cout<<"Porfavor intente nuevamente...";
				}
				break;
			}
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
			case 6:{
				menuBuscar();
				break;
			}
			case -1 :{
				cout<<endl;
				cout<<"   Saliendo...."<<endl;
				cout<<"   ";system("pause");
				break;
			}
			default:{
				cout<<endl;
				cout<<"   Opción invalida........"<<endl;
				cout<<"   ";system("pause");
				break;
			} 
		}
		system("cls");
	}while(respuesta != -1);
	
	return 0;
}

