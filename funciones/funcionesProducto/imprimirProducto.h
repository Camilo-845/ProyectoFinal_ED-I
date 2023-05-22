
using namespace std;

void imprimirProducto(Producto *cabezaPtr){
	
	setlocale(LC_ALL, "");
	cout << "        ____________________________________________________________________" << endl;
    cout << "       |                                                                    | " << endl;
    if(cabezaPtr == NULL){
    	
        cout <<"       |   No se ha encontrado el producto.                           " << endl;
        cout <<"       |   Porfavor intente nuevamente....                            " << endl;
    }
	else{
		
		cout<<"            La informaci�n del producto con el c�digo ("<<cabezaPtr->codigo<<") es: "<<endl<<endl;
		cout<<"               Descripci�n: "<<cabezaPtr->descripcion<<endl;
		cout<<"               Valor Unitario: $"<<cabezaPtr->valorUnitario<<endl;
		cout<<"               stock: "<<cabezaPtr->stock<<endl;
		cout<<"           ------------------------                                          " << endl;	
	}	

	cout<<"       |                                                                    |" << endl;
    cout<<"       |____________________________________________________________________|" << endl;
    cout<<endl;
	
}
