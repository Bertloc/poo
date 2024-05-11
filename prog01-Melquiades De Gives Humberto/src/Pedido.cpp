#include "Pedido.h"

Pedido::Pedido()
{
    //ctor
}
void Pedido::confirmar(void)
{
    cout<<"Confirmacion del pedido:"<<num_pedido<<"con un total de:"<<total<<endl;
}

void Pedido::agregar(void)
{
    cout<<"Agregue un nuevo producto"<<endl;

}

void Pedido::eliminar(void)
{
    cout<<"¿Que producto desea eliminar?"<<endl;
}

