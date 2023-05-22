
void crearFactura(Factura **cabezaPtr, Cliente **cabezaCliente, Producto **cabezaProducto)
{
    Detalle *cabezaDetalle = NULL;
    int respuesta = 1;
    unsigned long int codigo = 0;
    do
    {
        Factura *nuevo = new Factura;
        nuevo->sig = NULL;
        string cedulaCliente = "";

        if (*cabezaPtr == NULL)
        {
            nuevo->numero = codigo;
        }
        else
        {
            Factura *iter = *cabezaPtr;
            for (; iter->sig != NULL; iter = iter->sig)
            {
            };
            nuevo->numero = iter->numero + 1;
        }
        time_t now = time(nullptr);

        // Obtener una estructura std::tm que representa el tiempo actual
        tm *timeinfo = localtime(&now);

        // Obtener el día, mes y año
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
        do
        {
            cout << "Ingrese el numero de cedula del cliente:";

            cin >> cedulaCliente;
            cout << endl;
            clienteEncontrado = buscarCliente(*cabezaCliente, cedulaCliente);
            if (clienteEncontrado == NULL)
            {
                cout << "Crear cliente: " << endl;
                crearCliente(cabezaCliente);
            }
        } while (clienteEncontrado == NULL);
        nuevo->cliente = clienteEncontrado;
        crearDetalle(&cabezaDetalle, cabezaProducto);
        nuevo->cabezaDetalle = cabezaDetalle;
        int total = 0;
        for (Detalle *iter = cabezaDetalle; iter != NULL; iter = iter->sig)
        {
            total += iter->subtotal;
        }
        if (*cabezaPtr == NULL)
        {
            *cabezaPtr = nuevo;
        }
        else
        {
            Factura *iter = *cabezaPtr;
            for (; iter->sig != NULL; iter = iter->sig)
                ;
            iter->sig = nuevo;
        }
        system("CLS");
        cout << "Ingrese (-1) para salir del menu, si desea añadir otra Factura ingrese (1): ";
        cin >> respuesta;
    } while (respuesta != -1);
}