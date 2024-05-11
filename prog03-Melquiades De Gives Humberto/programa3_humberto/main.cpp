#include "Cliente.h"
#include "CarritoDeCompras.h"
#include <iostream>

int main() {
    // Creación de un Cliente
    Cliente cliente("Juan", 30);

    // Creación de un CarritoDeCompras para el Cliente
    CarritoDeCompras* carrito = new CarritoDeCompras();
    carrito->agregarProducto("Producto1");
    carrito->agregarProducto("Producto2");

    // Asociación del CarritoDeCompras con el Cliente
    cliente.setCarrito(carrito);

    // Acceso a la información del Cliente y su CarritoDeCompras
    std::cout << "Cliente: " << cliente.getNombre() << ", Edad: " << cliente.getEdad() << std::endl;
    std::cout << "Productos en el Carrito: ";
    for (int i = 0; i < cliente.getCarrito()->getCantidad(); ++i) {
        std::cout << cliente.getCarrito()->getProductos()[i] << ", ";
    }
    std::cout << std::endl;

    // Liberación de memoria
    delete carrito;

    return 0;
}
