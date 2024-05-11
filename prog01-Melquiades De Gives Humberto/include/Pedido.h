#ifndef PEDIDO_H
#define PEDIDO_H
#include <iostream>
using namespace std;

class Pedido
{
    public:
        ///atributos
        int num_pedido;
        float total;
        int fecha_pedido;

        ///metodos
        Pedido();//constructor
        void confirmar(void);
        void agregar(void);
        void eliminar(void);

    protected:

    private:
};

#endif // PEDIDO_H
