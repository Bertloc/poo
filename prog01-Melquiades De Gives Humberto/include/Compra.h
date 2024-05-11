#ifndef COMPRA_H
#define COMPRA_H
#include <iostream>
using namespace std;

class Compra
{
    public:

        ///atributos
        int cantidad;
        int cliente_id;
        int producto_id;
        int fecha_creacion;

        ///metodos
        Compra();///constructor
        void agregar(void);
        void eliminar(void);
        void pagar(void);



    protected:

    private:
};

#endif // COMPRA_H
