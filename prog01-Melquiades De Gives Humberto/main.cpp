#include <iostream>
#include <Cliente.h>
#include <Compra.h>
#include <Pedido.h>
using namespace std;

void carrito_compras();
void confirmar_pedido();

int main()
{
    carrito_compras();
    cout<<"\n*****************************************************************"<<endl<<endl;
    confirmar_pedido();
    cout<<"\n*****************************************************************\n"<<endl<<endl;

    return 0;
}

void carrito_compras()
{
    Compra uno;
    uno.cantidad=40;
    uno.cliente_id=1509;
    uno.fecha_creacion=2024;

    uno.pagar();

    Cliente Uno;
    Uno.nombre="Roberto";
    Uno.direccion="Medrano";
    Uno.telefono=9211389513;

    ///Uno.acceder_registro();




}

void confirmar_pedido()
{
    Pedido uNo;
    uNo.num_pedido=9;
    uNo.total=1678;
    uNo.fecha_pedido=2024;

    uNo.confirmar();

}
