
using namespace std;

void cambiarPrecioProducto (Producto *producto) {
	cout << "     __________________________________________________________________" <<endl;
	cout << "    |                                                                  | " <<endl;
	cout << "        El precio actual del producto es: $" << producto->valorUnitario << endl;
	cout << "        Ingrese el nuevo precio del producto [" << producto->codigo << "] " << "(" << producto->descripcion << "): ";
	cin >> producto->valorUnitario;
	cout << "         ----------------------------------" << endl;
	cout << "        El nuevo precio del producto es: $" << producto->valorUnitario << endl;
	cout << "    |__________________________________________________________________|" << endl << endl;
	system ("pause");
}
