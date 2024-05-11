#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include "CarritoDeCompras.h"  // Asegúrate de incluir el encabezado de CarritoDeCompras

class Cliente {
private:
    std::string nombre;
    int* edad;
    CarritoDeCompras* carrito;  // Puntero al carrito de compras asociado

public:
    Cliente();  // Constructor por defecto
    Cliente(const std::string& nombre, int edad);  // Constructor con parámetros
    ~Cliente(); // Destructor

    // Métodos de acceso (getters y setters)
    const std::string& getNombre() const;
    void setNombre(const std::string& nuevoNombre);

    int getEdad() const;
    void setEdad(int nuevaEdad);

    CarritoDeCompras* getCarrito() const;
    void setCarrito(CarritoDeCompras* nuevoCarrito);
};

#endif // CLIENTE_H
