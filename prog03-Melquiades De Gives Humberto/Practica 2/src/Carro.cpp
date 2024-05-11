#include "Carro.h"

Carro::Carro()
{
    marca="Toyota";
    anio=0;
    color="rojo";
    modelo="Corolla";
    //ctor
}

Carro::~Carro()
{
    cout<<"destructor: "<<marca<<endl;
}
Carro::Carro(string marca)
{
    this->marca=marca;
    anio=0;
    color="rojo";
    modelo="";
}
Carro::Carro(string _marca,int _anio)
{
    marca=_marca;
    anio=_anio;
    color="rojo";
    modelo="desconocido";
}

string Carro::getMarca(void)
{
    return marca;
}
void Carro::setMarca(string marca)
{
    this ->marca=marca;
}

int Carro::getAnio(void)
{
    return anio;
}
void Carro::setAnio(int _anio)
{
    anio=_anio;
}

string Carro::getModelo(void)
{
    return modelo;
}

void Carro::setModelo(string modelo)
{
    this ->modelo;
}

void Carro::encender(void)
{
    cout<<"Ruuuuuunnn!!!"<<endl;
}


