#include "Empleado.h"

Empleado::Empleado()
{
    nombre="Jose Perez";
    edad=30;
    codigo=23379465;
    antiguedad=14;
    sueldoBase=6000;
    //ctor
}
Empleado::~Empleado()
{
    //dtor
}

Empleado::Empleado(string nombre)
{
    this->nombre=nombre;
}

Empleado::Empleado(int codigo)
{
    this->codigo=codigo;
}

Empleado::Empleado(string nombre,int sueldoBase)
{
    this->nombre=nombre;
    this->sueldoBase=sueldoBase;
}

Empleado::Empleado(int edad,int antiguedad)
{
    this->edad=edad;
    this->antiguedad=antiguedad;
}

//*****************************************************************************************************

string Empleado::getNombre(void)
{
    return nombre;
}
void Empleado::setNombre(string nombre)
{
    this->nombre=nombre;
}


int Empleado::getEdad(void)
{
    return edad;
}
void Empleado::setEdad(int edad)
{
    this->edad=edad;
}


int Empleado::getCodigo(void)
{
    return codigo;
}
void Empleado::setCodigo(int codigo)
{
    this->codigo=codigo;
}


int Empleado::getAntiguedad(void)
{
    return antiguedad;
}
void Empleado::setAntiguedad(int antiguedad)
{
    this->antiguedad=antiguedad;
}


int Empleado::getSueldoBase(void)
{
    return sueldoBase;
}
void Empleado::setSueldoBase(int sueldoBase)
{
    this->sueldoBase=sueldoBase;
}
