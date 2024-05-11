#ifndef CARRITO_DE_COMPRAS_H
#define CARRITO_DE_COMPRAS_H

#include <string>

class CarritoDeCompras {
private:
    std::string* productos;
    int capacidad;
    int cantidad;

public:
    CarritoDeCompras();  // Constructor por defecto
    ~CarritoDeCompras(); // Destructor

    // Métodos de acceso (getters y setters)
    const std::string* getProductos() const;
    int getCantidad() const;

    void agregarProducto(const std::string& producto);
};

#endif // CARRITO_DE_COMPRAS_H
