#include <iostream>
#include <string>

using namespace std;

// Clase base
class Ranger {
protected:
    string nombre;
    string color;
    int generacion;

public:
    Ranger(const string& nombre, const string& color, int generacion)
        : nombre(nombre), color(color), generacion(generacion) {}

    virtual void saludar() const = 0;
    virtual void realizarAccion() const = 0;
    virtual void transformar() const = 0;
    virtual void realizarAtaqueEspecial() const = 0;
};

// Clases derivadas
class MightyMorphinRanger : public Ranger {
public:
    MightyMorphinRanger(const string& nombre)
        : Ranger(nombre, "Rojo", 1) {}

    void saludar() const override {
        cout << "¡Hola! ¡Soy " << nombre << ", el Ranger " << color << " de la Generación " << generacion << "!" << endl;
    }

    void realizarAccion() const override {
        cout << nombre << " realiza una acción básica." << endl;
    }

    void transformar() const override {
        cout << nombre << " se transforma en un Ranger Mighty Morphin." << endl;
    }

    void realizarAtaqueEspecial() const override {
        cout << nombre << " realiza el ataque especial 'Tirar de la cuerda'." << endl;
    }
};

class ZeoRanger : public Ranger {
public:
    ZeoRanger(const string& nombre)
        : Ranger(nombre, "Azul", 2) {}

    void saludar() const override {
        cout << "¡Hola! ¡Soy " << nombre << ", el Ranger " << color << " de la Generación " << generacion << "!" << endl;
    }

    void realizarAccion() const override {
        cout << nombre << " realiza una acción avanzada." << endl;
    }

    void transformar() const override {
        cout << nombre << " se transforma en un Zeo Ranger." << endl;
    }

    void realizarAtaqueEspecial() const override {
        cout << nombre << " realiza el ataque especial 'Onda de energía'." << endl;
    }
};

class SpaceRanger : public Ranger {
public:
    SpaceRanger(const string& nombre)
        : Ranger(nombre, "Plateado", 3) {}

    void saludar() const override {
        cout << "¡Hola! ¡Soy " << nombre << ", el Ranger " << color << " de la Generación " << generacion << "!" << endl;
    }

    void realizarAccion() const override {
        cout << nombre << " realiza una acción intergaláctica." << endl;
    }

    void transformar() const override {
        cout << nombre << " se transforma en un Space Ranger." << endl;
    }

    void realizarAtaqueEspecial() const override {
        cout << nombre << " realiza el ataque especial 'Rayo estelar'." << endl;
    }
};

int main() {
    MightyMorphinRanger ranger1("Jason");
    ZeoRanger ranger2("Tommy");
    SpaceRanger ranger3("Andros");

    ranger1.saludar();
    ranger1.realizarAccion();
    ranger1.transformar();
    ranger1.realizarAtaqueEspecial();

    ranger2.saludar();
    ranger2.realizarAccion();
    ranger2.transformar();
    ranger2.realizarAtaqueEspecial();

    ranger3.saludar();
    ranger3.realizarAccion();
    ranger3.transformar();
    ranger3.realizarAtaqueEspecial();

    return 0;
}
