
using namespace std;

Producto* buscarProducto (Producto* cabezaPtr, const string codigo) {
	
    for (Producto* iter = cabezaPtr; iter != NULL; iter = iter->sig) {
        if (codigo == iter->codigo) {
            return iter;
        }
    }
    return NULL;
}

