
void crearFactura(Factura **cabezaPtr, Cliente **cabezaCliente, Producto **cabezaProducto)
{
	setlocale(LC_ALL, "");
    Detalle *cabezaDetalle = NULL;
    int respuesta = 1;
    unsigned long int codigo = 0;
    do{
        Factura *nuevo = new Factura;
        nuevo->sig = NULL;
        string cedulaCliente = "";

        if (*cabezaPtr == NULL){
        	
            nuevo->numero = codigo;
        }
        else{
        	
            Factura *iter = *cabezaPtr;
            for (; iter->sig != NULL; iter = iter->sig);
            nuevo->numero = iter->numero + 1;
        }
        time_t now = time(nullptr);

        // Obtener una estructura std::tm que representa el tiempo actual
        tm *timeinfo = localtime(&now);

        // Obtener el dia, mes y aniho
        int day = timeinfo->tm_mday;
        int month = timeinfo->tm_mon + 1;    // tm_mon comienza en 0 para enero
        int year = timeinfo->tm_year + 1900; // tm_year cuenta desde 1900

        Fecha *fechaActual = new Fecha;
        fechaActual->dia = day;
        fechaActual->mes = month;
        fechaActual->aniho = year;

        nuevo->fechaVenta = fechaActual;
        cin.ignore();
        Cliente *clienteEncontrado = NULL;
        do{
        	cout << "        ____________________________________________________________________"<<endl;
    		cout << "       |                                                                    | "<<endl;
            cout << "       |   Ingrese el número de cédula del cliente: ";

            cin >> cedulaCliente;
            cout << endl;
            clienteEncontrado = buscarCliente(*cabezaCliente, cedulaCliente);
            if (clienteEncontrado == NULL){
            	
            	cout << "        ------------------------- " << endl ;
                cout << "       |   Menú Crear Cliente: " << endl ;
                cout << "        ------------------------- " << endl ;
                crearCliente(cabezaCliente);
            }
        } while (clienteEncontrado == NULL);
        nuevo->cliente = clienteEncontrado;
        
        crearDetalle(&cabezaDetalle, cabezaProducto);
        
        nuevo->cabezaDetalle = cabezaDetalle;
        int total = 0;
        for (Detalle *iter = cabezaDetalle; iter != NULL; iter = iter->sig){
        	
            total += iter->subtotal;
        }
        if (*cabezaPtr == NULL){
        	
            *cabezaPtr = nuevo;
        }
        else{
            Factura *iter = *cabezaPtr;
            for (; iter->sig != NULL; iter = iter->sig);
            iter->sig = nuevo;
        }
        cout << endl;
		cout << "        ------------------------------------------------------------------------------------- " << endl ;
		cout << "       |   Ingrese (-1) para salir del menú, si desea generar una nueva factura ingrese (1): "; cin >> respuesta;
		cout << "       |_____________________________________________________________________________________|"<<endl;
    	cout << "       |_____________________________________________________________________________________| "<<endl;
		cout << endl; 
		system("pause");
        system("CLS");
    } while (respuesta != -1);
}
