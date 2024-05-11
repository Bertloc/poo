#ifndef CARRO_H
#define CARRO_H

#include <iostream>

using namespace std;

class Carro
{
    private:
        string marca;
        string modelo;

    public:
        //atributos
        string color;
        int anio;

        //metodos
        ~Carro();
        Carro();
        Carro(string);
        Carro(string,int);

        string getMarca(void);
        void setMarca(string);

        int getAnio(void);
        void setAnio(int);

        string getModelo(void);
        void setModelo(string);

        void encender(void);

};

#endif // CARRO_H
