#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
using namespace std;

class Cliente
{
    public:
        ///atributos
        string nombre;
        string direccion;
        int telefono;

        ///metodos
        Cliente();//constructor
        void acceder_registro(void);
        void actualizar_direccion(void);



    protected:

    private:
};

#endif // CLIENTE_H
