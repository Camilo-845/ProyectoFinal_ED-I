#include <sstream>
#include <iomanip>

using namespace std;

string incrementarCodigo(const string& codigo) {
	
    string prefijo = codigo.substr(0, codigo.size() - 4);  // Extraer el prefijo 
    string numeroStr = codigo.substr(codigo.size() - 4);   // Extraer el número 

    // Convertir el número a entero
    int numero;
    stringstream ss(numeroStr);
    ss >> numero;

    // Incrementar el número
    numero++;

    // Convertir el número de vuelta a una cadena con relleno de ceros
    stringstream nuevoNumeroStr;
    nuevoNumeroStr << setw(4) << setfill('0') << numero;

    // Combinar el prefijo con el nuevo número
    string nuevoCodigo = prefijo + nuevoNumeroStr.str();

    return nuevoCodigo;
}

void crearProducto(Producto **cabezaPtr){
	int respuesta = 1;
	string codigo = "AR0000";
	
	do{
		Producto *nuevo = new Producto;
		nuevo->sig = NULL;
		
		if(*cabezaPtr == NULL){
			nuevo->codigo = codigo;
		}
		else{
			Producto *iter = *cabezaPtr;
			for(;iter->sig != NULL; iter = iter->sig );
			nuevo->codigo = incrementarCodigo(iter->codigo);
		}
		
		cout<<"      ___________________________________________________________________________________"<<endl;
		cout<<"     |                                                                                   |"<<endl;
		cout<<"           Ingrese la descripción del producto: ";
		cin.ignore();
    	getline(cin, nuevo->descripcion);
    	cout<<endl;
		
		cout<<"           Ingrese el valor unitario del producto"<<endl;
		do{
			cout<<"            (Debe ser una cantidad mayor a '0'): ";
			cin>>nuevo->valorUnitario;
			cout<<endl;
		}
		while(nuevo->valorUnitario <= 0);
		
		cout<<"           Ingrese el número de artículos disponibles"<<endl;
		do{
			cout<<"            (Debe ser una cantidad mayor a '0'): ";
			cin>>nuevo->stock;
			cout<<endl;
		}
		while(nuevo->stock <= 0);
		
		if(*cabezaPtr == NULL){								
			*cabezaPtr = nuevo;
		}
		else{
			Producto *iter = *cabezaPtr;
			for(;iter->sig != NULL; iter = iter->sig );
			iter->sig = nuevo;
		}
		
		cout<<"     |_____________________________________________________________________________________|"<<endl;
		cout<<"     |  Ingrese (-1) para salir del menú, si desea agregar un nuevo producto ingrese (1): "; cin>>respuesta;
		cout<<"      -------------------------------------------------------------------------------------"<<endl;
		system("pause");
		system("CLS");
	}
	while(respuesta != -1);	
}

