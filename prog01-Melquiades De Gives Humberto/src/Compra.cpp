#include "Compra.h"

Compra::Compra()
{
    //ctor
}

void Compra::agregar(void)
{
    cout<<"El producto a agregar es:"<<producto_id<<endl;
}

void Compra::eliminar(void)
{
    cout<<"Se quito el siguiente producto de compra:"<<producto_id<<endl;

}

void Compra::pagar(void)
{
    cout<<"Ingrese el metodo de pago"<<endl;
}

