
using namespace std;

void menuBuscar(){
    int respuesta;
	int info;
	setlocale (LC_ALL, "");
	
	do {
		cout << "  __________________________________________________________________"  <<endl;
		cout << " |                                                                  | " <<endl;
		cout << " |      Bienvenido al Menú de Búsqueda                              | " <<endl;
		cout << " |    Elija una de las siguientes opciones:                         | " <<endl;
		cout << " |                                                                  | " <<endl;
		cout << " |    1. Buscar Cliente                                             | " <<endl;
		cout << " |    2. Buscar Producto                                            | " <<endl;
		cout << " |    3. Buscar Factura                                             | " <<endl;
		cout << " |                                                                  | " <<endl;
		cout << " |    Para salir del Menú de Búsqueda ingrese  -1                   | " <<endl;
		cout << " |__________________________________________________________________| " <<endl;
		
		cout << endl << "Ingrese su opción: ";											
		cin >> respuesta;
		system ("cls");
		switch (respuesta) {
			case 1: {
				string cedula;
				cout << " Digite la cédula del usurio a buscar: ";
				cin >> cedula;
				
				Cliente *iter = buscarCliente (cabezaCliente, cedula);
				imprimirCliente (iter);	
				break;
			}
			case 2: {
				string codigo;
				cout << " Ingrese el código del producto a buscar: ";
				cin >> codigo;
				
				Producto *iter = buscarProducto (cabezaProducto, codigo);
				imprimirProducto (iter);
				break;
			}
			case 3: {
				int numero;
				cout << " Ingrese el número de la factura a buscar: ";
				cin >> numero;
					
				Factura *iter = buscarFactura (cabezaFactura, numero);
				imprimirFactura (iter);
				break;
			}
			case -1: {
				cout << endl;
				cout << "Saliendo...." << endl;
				break;
			}
			default: {
				cout << endl;
				cout << "Opción inválida........" << endl;
				break;
			} 
		}
		system ("pause");
		system ("cls");
	} while (respuesta != -1);
}
