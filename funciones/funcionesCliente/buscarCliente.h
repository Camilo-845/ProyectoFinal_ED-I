
using namespace std;

Cliente *buscarCliente(Cliente *cabezaPtr, string cedula){
	
	for(Cliente *iter = cabezaPtr; iter != NULL; iter = iter->sig){
		
		if(cedula == iter->cedula){
			
			return iter;
		}
	}
	return NULL;
}
