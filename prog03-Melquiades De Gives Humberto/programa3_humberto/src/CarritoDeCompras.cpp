#include "CarritoDeCompras.h"
#include <iostream>

CarritoDeCompras::CarritoDeCompras() {
    capacidad = 5; // Capacidad inicial del carrito
    productos = new std::string[capacidad];
    cantidad = 0;
}

CarritoDeCompras::~CarritoDeCompras() {
    delete[] productos;
}

const std::string* CarritoDeCompras::getProductos() const {
    return productos;
}

int CarritoDeCompras::getCantidad() const {
    return cantidad;
}

void CarritoDeCompras::agregarProducto(const std::string& producto) {
    if (cantidad < capacidad) {
        productos[cantidad++] = producto;
    } else {
        // Si el carrito está lleno, se podría implementar una estrategia para aumentar la capacidad.
        // En este ejemplo, simplemente se ignora la adición si el carrito está lleno.
        std::cout << "El carrito está lleno. No se pudo agregar el producto." << std::endl;
    }
}
