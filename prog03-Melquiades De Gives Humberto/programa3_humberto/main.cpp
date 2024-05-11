#include "Cliente.h"
#include "CarritoDeCompras.h"
#include <iostream>

int main() {
    // Creaci�n de un Cliente
    Cliente cliente("Juan", 30);

    // Creaci�n de un CarritoDeCompras para el Cliente
    CarritoDeCompras* carrito = new CarritoDeCompras();
    carrito->agregarProducto("Producto1");
    carrito->agregarProducto("Producto2");

    // Asociaci�n del CarritoDeCompras con el Cliente
    cliente.setCarrito(carrito);

    // Acceso a la informaci�n del Cliente y su CarritoDeCompras
    std::cout << "Cliente: " << cliente.getNombre() << ", Edad: " << cliente.getEdad() << std::endl;
    std::cout << "Productos en el Carrito: ";
    for (int i = 0; i < cliente.getCarrito()->getCantidad(); ++i) {
        std::cout << cliente.getCarrito()->getProductos()[i] << ", ";
    }
    std::cout << std::endl;

    // Liberaci�n de memoria
    delete carrito;

    return 0;
}
