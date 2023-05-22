
using namespace std;

void consultarProductos(Producto *cabezaPtr)
{
	setlocale(LC_ALL, "");
    cout << " 		 __________________________________________________________________" << endl;
    cout << " 		|                                                                  | " << endl;
    if(cabezaPtr == NULL){
    	
        cout << " 		|   La lista de Productos esta vacía                              " << endl;
    }
    for(; cabezaPtr != NULL; cabezaPtr = cabezaPtr->sig){
    	
        cout << " 		|   Código:              " << cabezaPtr->codigo << "                  " << endl;
        cout << " 		|   Descripción:         " << cabezaPtr->descripcion << "                  " << endl;
        cout << " 		|   valor Unitario:      $ " << cabezaPtr->valorUnitario << "               " << endl;
        cout << " 		|   stock:               " << cabezaPtr->stock << "                  " << endl;
        cout << " 		|   ------------------------                                     " << endl;
    }
    cout << " 		|                                                                    " << endl;
    cout << " 		|__________________________________________________________________| " << endl;
    cout<<endl;
}
