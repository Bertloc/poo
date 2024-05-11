#include <iostream>
#include <string>

class Alien {
private:
    std::string name;
    int power;
    int speed;

public:
    // Constructor
    Alien(std::string n, int p, int s) : name(n), power(p), speed(s) {}

    // Getters
    std::string getName() { return name; }
    int getPower() { return power; }
    int getSpeed() { return speed; }

    // Setters
    void setName(std::string n) { name = n; }
    void setPower(int p) { power = p; }
    void setSpeed(int s) { speed = s; }

    // Sobrecarga de operadores
    Alien operator+(const Alien& a) {
        return Alien(name + " & " + a.name, power + a.power, speed + a.speed);
    }

    Alien operator-(const Alien& a) {
        return Alien(name + " - " + a.name, power - a.power, speed - a.speed);
    }

    Alien operator*(const Alien& a) {
        return Alien(name + " * " + a.name, power * a.power, speed * a.speed);
    }

    Alien operator/(const Alien& a) {
        if (a.power != 0 && a.speed != 0) {
            return Alien(name + " / " + a.name, power / a.power, speed / a.speed);
        } else {
            std::cout << "División por cero no es permitida.";
            return *this;
        }
    }

    // Sobrecarga de operadores de flujo
    friend std::ostream& operator<<(std::ostream& os, const Alien& a);
    friend std::istream& operator>>(std::istream& is, Alien& a);
};

std::ostream& operator<<(std::ostream& os, const Alien& a) {
    os << "Nombre: " << a.name << ", Poder: " << a.power << ", Velocidad: " << a.speed;
    return os;
}

std::istream& operator>>(std::istream& is, Alien& a) {
    is >> a.name >> a.power >> a.speed;
    return is;
}

int main() {
    Alien heatblast("Heatblast", 100, 50);
    Alien fourarms("Fourarms", 200, 30);

    Alien combined = heatblast + fourarms;
    std::cout << combined << std::endl;

    return 0;
}
