#include <iostream>
#include <string>

using namespace std;

class Omnitrix {
private:
    string nombre;
    string tipo;
    int cantidadDeAliens;

public:
    // Constructor sin argumentos
    Omnitrix() : nombre(""), tipo(""), cantidadDeAliens(0) {}

    // Constructor con argumentos
    Omnitrix(const string& nombre, const string& tipo, int cantidadDeAliens) : nombre(nombre), tipo(tipo), cantidadDeAliens(cantidadDeAliens) {}

    // Getters y Setters
    string getNombre() const {
        return nombre;
    }

    void setNombre(const string& nuevoNombre) {
        nombre = nuevoNombre;
    }

    string getTipo() const {
        return tipo;
    }

    void setTipo(const string& nuevoTipo) {
        tipo = nuevoTipo;
    }

    int getCantidadDeAliens() const {
        return cantidadDeAliens;
    }

    void setCantidadDeAliens(int nuevaCantidad) {
        cantidadDeAliens = nuevaCantidad;
    }

    // Sobrecarga de operadores de flujo
    friend ostream& operator<<(ostream& os, const Omnitrix& omnitrix) {
        os << "Nombre: " << omnitrix.nombre << ", Tipo: " << omnitrix.tipo << ", Cantidad de aliens: " << omnitrix.cantidadDeAliens;
        return os;
    }

    friend istream& operator>>(istream& is, Omnitrix& omnitrix) {
        cout << "Ingrese el nombre del Omnitrix: ";
        is >> omnitrix.nombre;
        cout << "Ingrese el tipo de Omnitrix: ";
        is >> omnitrix.tipo;
        cout << "Ingrese la cantidad de aliens en el Omnitrix: ";
        is >> omnitrix.cantidadDeAliens;
        return is;
    }
};

int main() {
    Omnitrix omnitrix1("Omnitrix 1", "Clasico", 10);
    Omnitrix omnitrix2("Omnitrix 2", "NUEVO", 15);

    // Usando operadores de flujo
    cout << "Omnitrix 1: " << omnitrix1 << endl;
    cout << "Omnitrix 2: " << omnitrix2 << endl;

    // Ingresando un nuevo Omnitrix usando el operador de flujo >>
    Omnitrix omnitrix3;
    cin >> omnitrix3;
    cout << "Nuevo Omnitrix ingresado: " << omnitrix3 << endl;

    return 0;

}
