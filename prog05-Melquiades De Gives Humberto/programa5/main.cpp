#include <iostream>
#include <string>

using namespace std;

// Herencia Simple (Lineal)

// Clase madre: Morpher
class Morpher {
protected:
    string rangerName;
public:
    Morpher(string name) : rangerName(name) {}

    virtual void transform() = 0; // Método virtual puro
};

// Clase base: Transformation
class Transformation : public Morpher {
protected:
    string color;
public:
    Transformation(string name, string clr) : Morpher(name), color(clr) {}

    void transform() override {
        cout << rangerName << " transforms into " << color << " Ranger!" << endl;
    }
};

// Subclase para la transformación del Ranger Rojo
class RedTransformation : public Transformation {
public:
    RedTransformation(string name) : Transformation(name, "Red") {}
};

// Subclase para la transformación del Ranger Azul
class BlueTransformation : public Transformation {
public:
    BlueTransformation(string name) : Transformation(name, "Blue") {}
};


// Herencia Múltiple (Formación de Diamante)

// Clase derivada con herencia múltiple
class DiamanteFormation : public RedTransformation, public BlueTransformation {
public:
    DiamanteFormation(string name) : RedTransformation(name), BlueTransformation(name) {}
};

int main() {
    // Fase 1: Herencia Simple (Lineal)
    cout << "Herencia Simple (Lineal)" << endl;
    RedTransformation redRanger("Jason");
    BlueTransformation blueRanger("Billy");

    redRanger.transform();
    blueRanger.transform();

    cout << endl;

    // Fase 2: Herencia Múltiple (Formación de Diamante)
    cout << "Herencia Multiple (Formacion de Diamante)" << endl;
    DiamanteFormation diamondRanger("Ranger");

    // Accediendo a los métodos transform() de las clases base usando herencia múltiple
    diamondRanger.RedTransformation::transform();
    diamondRanger.BlueTransformation::transform();

    return 0;
}
