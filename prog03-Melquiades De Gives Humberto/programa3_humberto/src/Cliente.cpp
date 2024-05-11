#include "Cliente.h"
#include <iostream>

Cliente::Cliente() {
    nombre = "";
    edad = new int(0);
    carrito = nullptr;  // Inicializa el puntero al carrito a nullptr
}

Cliente::Cliente(const std::string& nombre, int edad) {
    this->nombre = nombre;
    this->edad = new int(edad);
    carrito = nullptr;
}

Cliente::~Cliente() {
    delete edad;
    delete carrito;  // Libera la memoria del carrito si se ha asignado
}

const std::string& Cliente::getNombre() const {
    return nombre;
}

void Cliente::setNombre(const std::string& nuevoNombre) {
    nombre = nuevoNombre;
}

int Cliente::getEdad() const {
    return *edad;
}

void Cliente::setEdad(int nuevaEdad) {
    *edad = nuevaEdad;
}

CarritoDeCompras* Cliente::getCarrito() const {
    return carrito;
}

void Cliente::setCarrito(CarritoDeCompras* nuevoCarrito) {
    carrito = nuevoCarrito;
}
