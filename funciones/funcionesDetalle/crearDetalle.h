
void crearDetalle(Detalle **cabezaPtr, Producto *cabezaProducto)
{
    int respuesta = 1;
    do
    {
        Detalle *nuevo = new Detalle;
        nuevo->sig = NULL;
        string codigoProducto = "";

        cout << "Ingrese el codigo de Producto" << endl;
        cout << "(Formato -> '0000'): ";
        cin.ignore();
        cin >> codigoProducto;
        Producto *productoEncontrado = buscarProducto(cabezaProducto, codigoProducto);
        if (productoEncontrado != NULL)
        {
            nuevo->producto = "AR" + codigoProducto;
            cout << "Ingrese la cantidad de articulos" << endl;
            do
            {
                cout << "(Debe ser una cantidad mayor a '0'): ";
                cin >> nuevo->cantidad;
                cout << endl;
            } while (nuevo->cantidad <= 0);

            nuevo->precio = productoEncontrado->valorUnitario;
            nuevo->subtotal = nuevo->precio * nuevo->cantidad;

            if (*cabezaPtr == NULL)
            {
                *cabezaPtr = nuevo;
            }
            else
            {
                Detalle *iter = *cabezaPtr;
                for (; iter->sig != NULL; iter = iter->sig)
                    ;
                iter->sig = nuevo;
            }
        }
        else
        {
            cout << "Producto no encontrado o Codigo invalido" << endl;
            system("pause");
        }
        system("CLS");
        cout << "Ingrese (-1) para salir del menu, si desea añadir otro producto ingrese (1): ";
        cin >> respuesta;
    } while (respuesta != -1);
}