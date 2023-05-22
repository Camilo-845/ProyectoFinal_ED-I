
void crearDetalle(Detalle **cabezaPtr, Producto **cabezaProducto)
{
    int respuesta = 1;
    do{
        Detalle *nuevo = new Detalle;
        nuevo->sig = NULL;
        string codigoProducto = "";
        
        cout << "       ------------------------- " << endl ;
        cout << "       |   Menú Crear Detalle: " << endl ;
        cout << "       ------------------------- " << endl ;
        cout << "       |    Ingrese el código de Producto" << endl;
        cout << "       |     (Formato -> 'AR0000'): ";
        cin.ignore();
        cin >> codigoProducto;
        Producto *productoEncontrado = buscarProducto(*cabezaProducto, codigoProducto);
        if (productoEncontrado != NULL){
        	
            nuevo->codigoProducto = "AR" + codigoProducto;
            cout << "       |    Ingrese la cantidad de artículos: " << endl;
            if (productoEncontrado->stock == 0){
            	
                cout << "       |     (No hay artículos disponibles)" << endl;
                system("pause");
            }
            else{
            	
                do{
                    cout << "       |     (Debe ser una cantidad mayor a '0'y menor a "<<productoEncontrado->stock<<" : " ;
                    cin >> nuevo->cantidad;
                    
                } while (nuevo->cantidad <= 0 || nuevo->cantidad > productoEncontrado->stock);
                productoEncontrado->stock -= nuevo->cantidad;
                nuevo->precio = productoEncontrado->valorUnitario;
                nuevo->subtotal = nuevo->precio * nuevo->cantidad;

                if (*cabezaPtr == NULL){
                    *cabezaPtr = nuevo;
                }
                else{
                    Detalle *iter = *cabezaPtr;
                    for (; iter->sig != NULL; iter = iter->sig);
                    iter->sig = nuevo;
                }
            }
        }
        else{
            cout << "       |    (Producto no encontrado o Código invalido)" << endl;
            system("pause");
        }
        
        cout << endl;
		cout << "        ------------------------------------------------------------------------------------- " << endl ;
		cout << "       |   Ingrese (-1) para continuar: "; cin >> respuesta;
		cout << "       |_____________________________________________________________________________________|"<<endl;
    	cout << "       |_____________________________________________________________________________________| "<<endl;
		cout << endl; 
		system("pause");
        system("CLS");
    } while (respuesta != -1);
}
