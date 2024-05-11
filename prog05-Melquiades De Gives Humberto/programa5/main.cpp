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

    virtual void transform() = 0; // M�todo virtual puro
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

// Subclase para la transformaci�n del Ranger Rojo
class RedTransformation : public Transformation {
public:
    RedTransformation(string name) : Transformation(name, "Red") {}
};

// Subclase para la transformaci�n del Ranger Azul
class BlueTransformation : public Transformation {
public:
    BlueTransformation(string name) : Transformation(name, "Blue") {}
};


// Herencia M�ltiple (Formaci�n de Diamante)

// Clase derivada con herencia m�ltiple
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

    // Fase 2: Herencia M�ltiple (Formaci�n de Diamante)
    cout << "Herencia Multiple (Formacion de Diamante)" << endl;
    DiamanteFormation diamondRanger("Ranger");

    // Accediendo a los m�todos transform() de las clases base usando herencia m�ltiple
    diamondRanger.RedTransformation::transform();
    diamondRanger.BlueTransformation::transform();

    return 0;
}
