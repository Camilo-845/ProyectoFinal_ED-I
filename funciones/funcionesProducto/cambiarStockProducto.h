
using namespace std;

void cambiarStockProducto (Producto *producto) {
	
	cout << "     ___________________________________________________________________________" << endl;
	cout << "    |                                                                           | " << endl;
	cout << "        La cantidad actual de unidades del producto es: " << producto->stock << endl;
	cout << "        Ingrese la cantidad de unidades adicionales del producto [" << producto->codigo << "] " << "(" << producto->descripcion << "): ";
	int unidadesAdicionales = 0;
	cin >> unidadesAdicionales;
	producto->stock = producto->stock + unidadesAdicionales;
	cout << "         ----------------------------------" << endl;
	cout << "        La nueva cantidad de unidades del producto es: " << producto->stock << endl;
	cout << "    |___________________________________________________________________________|" << endl << endl;
}
