#include "Persona.h"

Persona::Persona()
{
    nombre="Mariana";
    edad=0;
    direccion="Revolucion";
    sangre="A+";
    //ctor
}

Persona::~Persona()
{
    cout<<"destructor: "<<nombre<<endl;
}
Persona::Persona(string nombre)
{
    this->nombre=nombre;
    edad=0;
    direccion="Revolucion";
    sangre="O-";
}
Persona::Persona(string _nombre,int _edad)
{
    nombre=_nombre;
    edad=_edad;
    direccion="desconocido";
    sangre="O-";
}

string Persona::getNombre(void)
{
    return nombre;
}
void Persona::setNombre(string nombre)
{
    this ->nombre=nombre;
}

int Persona::getEdad(void)
{
    return edad;
}
void Persona::setEdad(int _edad)
{
    edad=_edad;
}

string Persona::getDireccion(void)
{
    return direccion;
}

void Persona::setDireccion(string direccion)
{
    this ->direccion;
}

string Persona::getSangre(void)
{
    return sangre;
}

void Persona::setSangre(string sangre)
{
    this ->sangre;
}

void Persona::hablar(void)
{
    cout<<"Holaaaaaa!!!"<<endl;
}

void Persona::indicar(void)
{
    cout<<"Por aqui es mi casa, vamos!!!"<<endl;
}
