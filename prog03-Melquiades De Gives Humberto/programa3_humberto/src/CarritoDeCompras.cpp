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
        // Si el carrito est� lleno, se podr�a implementar una estrategia para aumentar la capacidad.
        // En este ejemplo, simplemente se ignora la adici�n si el carrito est� lleno.
        std::cout << "El carrito est� lleno. No se pudo agregar el producto." << std::endl;
    }
}
