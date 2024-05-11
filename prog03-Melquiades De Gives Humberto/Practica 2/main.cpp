#include <iostream>
#include <vector>
#include <string>

class FormaAlienigena {
public:
    std::string nombre;
    std::string habilidad;

    // Constructor predeterminado
    FormaAlienigena() {}

    FormaAlienigena(const std::string& nombre, const std::string& habilidad)
        : nombre(nombre), habilidad(habilidad) {}

    void mostrarInformacion() const {
        std::cout << "Forma Alienígena: " << nombre << ", Habilidad: " << habilidad << std::endl;
    }
};

class Omnitrix {
private:
    std::vector<FormaAlienigena> formasDisponibles;
    FormaAlienigena formaActual;

public:
    // Constructor predeterminado
    Omnitrix() {}

    void agregarForma(const std::string& nombre, const std::string& habilidad) {
        FormaAlienigena nuevaForma(nombre, habilidad);
        formasDisponibles.push_back(nuevaForma);
        std::cout << "¡Nueva forma alienígena agregada al Omnitrix!" << std::endl;
    }

    void seleccionarForma(int indice) {
        if (indice >= 0 && indice < formasDisponibles.size()) {
            formaActual = formasDisponibles[indice];
            std::cout << "¡Has seleccionado la forma alienígena " << formaActual.nombre << "!" << std::endl;
        } else {
            std::cout << "Índice no válido. Por favor, selecciona una forma válida." << std::endl;
        }
    }

    void mostrarFormaActual() const {
        std::cout << "Forma Actual del Omnitrix: ";
        if (!formaActual.nombre.empty()) {
            formaActual.mostrarInformacion();
        } else {
            std::cout << "Ninguna forma seleccionada." << std::endl;
        }
    }
};

int main() {
    Omnitrix omnitrix;

    char opcion;
    do {
        std::cout << "\n--- Menú del Omnitrix ---" << std::endl;
        std::cout << "1. Agregar nueva forma alienígena\n";
        std::cout << "2. Seleccionar forma alienígena\n";
        std::cout << "3. Mostrar forma actual\n";
        std::cout << "4. Salir\n";
        std::cout << "Ingrese su opción (1-4): ";
        std::cin >> opcion;

        switch (opcion) {
            case '1': {
                std::string nombre, habilidad;
                std::cout << "Ingrese el nombre de la forma alienígena: ";
                std::cin.ignore(); // Limpiar el buffer de entrada antes de getline
                std::getline(std::cin, nombre);
                std::cout << "Ingrese la habilidad de la forma alienígena: ";
                std::getline(std::cin, habilidad);
                omnitrix.agregarForma(nombre, habilidad);
                break;
            }
            case '2': {
                int indice;
                std::cout << "Ingrese el índice de la forma alienígena que desea seleccionar: ";
                std::cin >> indice;
                omnitrix.seleccionarForma(indice);
                break;
            }
            case '3':
                omnitrix.mostrarFormaActual();
                break;
            case '4':
                std::cout << "Saliendo del Omnitrix. ¡Hasta luego!\n";
                break;
            default:
                std::cout << "Opción no válida. Por favor, ingrese un número del 1 al 4.\n";
        }
    } while (opcion != '4');

    return 0;
}
