
using namespace std;

void imprimirProducto(Producto *cabezaPtr){
	
	setlocale(LC_ALL, "");
	
	for(Producto *iter = cabezaPtr; iter != NULL; iter = iter->sig){
		
		cout<<"         _____________________________________________________________________" << endl;
    	cout<<"        |                                                                     | " << endl;
		cout<<"            La informaci�n del producto con el c�digo ("<<iter->codigo<<") son: "<<endl<<endl;
		cout<<"               Descripci�n: "<<iter->descripcion<<endl;
		cout<<"               Valor Unitario: "<<iter->valorUnitario<<endl;
		cout<<"               stock: "<<iter->stock<<endl;
		cout << " 		|   ------------------------                                         |" << endl;
		cout << " 		|                                                                    |" << endl;
    	cout << " 		|____________________________________________________________________| " << endl;
    	cout<<endl;
	}
	
}
