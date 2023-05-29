
using namespace std;

void eliminarProducto (Producto **cabezaProducto, Factura *cabezaFacturas){
    // solo se eliminará un producto si no hay  referencia a este
    Producto *producto_anterior = NULL;
    bool bandera, saberSiBorreacab = false;
    Producto *producto = *cabezaProducto;
    while (producto != NULL) {
        bandera = false;
        // los ciclos se rompen cuando no hay mas elementos o cuando ya se encontro una referencia
        for (Factura *factura = cabezaFacturas; factura != NULL && bandera == false; factura = factura->sig) {
            for (Detalle *detalle = factura->cabezaDetalle; detalle != NULL && bandera == false; detalle = detalle->sig) {
                Producto *productoEncontrado = buscarProducto (producto, detalle->codigoProducto);
                if (productoEncontrado == producto) {
                    // si hay referencia
                    bandera = true;
                    break;
                }
            }
        }

        if (!bandera) {
            // si entro por este if es porque este producto no tuvo referencia
            if (producto == (*cabezaProducto)) {
                // por si el producto que se va a eliminar es la cabeza de productos
                *cabezaProducto = (*cabezaProducto)->sig;
                delete (producto);
                producto = *cabezaProducto;
                // para que no se dañe cuando hay un producto en la lista
                if (producto == NULL) {
                    return;
                }
            } else {
                // para eliminar un producto que no es cabeza
                producto_anterior->sig = producto->sig;
                delete (producto);
                producto = producto_anterior;
            }
        } else {
            producto = producto->sig;
        }

        producto_anterior = producto;
    }
}
