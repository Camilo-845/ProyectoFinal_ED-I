
using namespace std;

void imprimirProducto(Producto *cabezaPtr){
	
	setlocale(LC_ALL, "");
	cout << "        ____________________________________________________________________" << endl;
    cout << "       |                                                                    | " << endl;
    if(cabezaPtr == NULL){
    	
        cout <<"       |   No se ha encontrado el producto.                           " << endl;
        cout <<"       |   Porfavor intente nuevamente....                            " << endl;
    }
	for(Producto *iter = cabezaPtr; iter != NULL; iter = iter->sig){
		
		cout<<"         ____________________________________________________________________" << endl;
    	cout<<"        |                                                                    | " << endl;
		cout<<"            La información del producto con el código ("<<iter->codigo<<") son: "<<endl<<endl;
		cout<<"               Descripción: "<<iter->descripcion<<endl;
		cout<<"               Valor Unitario: "<<iter->valorUnitario<<endl;
		cout<<"               stock: "<<iter->stock<<endl;
		cout<<"        |   ------------------------                                         |" << endl;
	}
	cout<<"       |                                                                    |" << endl;
    cout<<"       |____________________________________________________________________|" << endl;
    cout<<endl;
	
}
