
using namespace std;

void crearCliente(Cliente **cabezaPtr)
{
	int respuesta = 1;

	do
	{
		Cliente *nuevo = new Cliente;
		nuevo->sig = NULL;

		cout << "       |   Confirme la c�dula del cliente: ";
		cin >> nuevo->cedula;
		Cliente *validacionCliente = buscarCliente(*cabezaPtr, nuevo->cedula);
		if (validacionCliente != NULL){

			do{
				cout << "       |   Esta c�dula ya esta registrada, porfavor ingrese una nueva c�dula: ";
				cin >> nuevo->cedula;
				
			} while (buscarCliente(*cabezaPtr, nuevo->cedula) != NULL);
		}

		cout << "       |   Ingrese su Nombre y Apellido: ";
		cin.ignore();
		getline(cin, nuevo->nombre);

		cout << "       |   Ingrese su direcci�n: ";
		cin.ignore();
		getline(cin, nuevo->direccion);

		cout << "       |   Ingrese su n�mero telef�nico: ";
		cin >> nuevo->numero;

		cout << "       |   Ingrese su correo electr�nico: ";
		cin >> nuevo->email;

		if (*cabezaPtr == NULL)
		{
			*cabezaPtr = nuevo;
		}
		else
		{
			Cliente *iter = *cabezaPtr;
			for (; iter->sig != NULL; iter = iter->sig);
			iter->sig = nuevo;
		}

		cout << endl;
		cout << "        ------------------------------------------------------------------------------------- " << endl ;
		cout << "       |   Ingrese (-1) para salir del men�, si desea agregar un nuevo cliente ingrese (1): "; cin >> respuesta;
		cout << "       |_____________________________________________________________________________________|"<<endl;
    	cout << "       |_____________________________________________________________________________________| "<<endl;
		cout<<endl;
		system("pause");
		system("CLS");
	} while (respuesta != -1);
}
