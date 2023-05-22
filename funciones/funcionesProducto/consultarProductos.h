
using namespace std;

void consultarProductos(Producto *cabezaPtr)
{
	setlocale(LC_ALL, "");
    cout << " 		 __________________________________________________________________" << endl;
    cout << " 		|                                                                  | " << endl;
    if(cabezaPtr == NULL){
    	
        cout << " 		|   La lista de Productos esta vac�a                              " << endl;
    }
    for(; cabezaPtr != NULL; cabezaPtr = cabezaPtr->sig){
    	
        cout << " 		|   C�digo:              " << cabezaPtr->codigo << "                  " << endl;
        cout << " 		|   Descripci�n:         " << cabezaPtr->descripcion << "                  " << endl;
        cout << " 		|   valor Unitario:      $ " << cabezaPtr->valorUnitario << "               " << endl;
        cout << " 		|   stock:               " << cabezaPtr->stock << "                  " << endl;
        cout << " 		|   ------------------------                                     " << endl;
    }
    cout << " 		|                                                                    " << endl;
    cout << " 		|__________________________________________________________________| " << endl;
    cout<<endl;
}
