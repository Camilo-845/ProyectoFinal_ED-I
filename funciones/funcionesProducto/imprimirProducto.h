
using namespace std;

void imprimirProducto(Producto *cabezaPtr){
	
	setlocale(LC_ALL, "");
	
	for(Producto *iter = cabezaPtr; iter != NULL; iter = iter->sig){
		
		cout<<"         _____________________________________________________________________" << endl;
    	cout<<"        |                                                                     | " << endl;
		cout<<"            La información del producto con el código ("<<iter->codigo<<") son: "<<endl<<endl;
		cout<<"               Descripción: "<<iter->descripcion<<endl;
		cout<<"               Valor Unitario: "<<iter->valorUnitario<<endl;
		cout<<"               stock: "<<iter->stock<<endl;
		cout << " 		|   ------------------------                                         |" << endl;
		cout << " 		|                                                                    |" << endl;
    	cout << " 		|____________________________________________________________________| " << endl;
    	cout<<endl;
	}
	
}
