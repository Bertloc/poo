#include "Empresa.h"
#include "Tareas.h"
#include "Empleado.h"

Empresa::Empresa()
{
    nombreEmpresa=" HALA";
    numEmpleados=5;
    numTelefono=9211389513;
    correo="hala@gmail.com";
    sitioWeb="www.hala.com";


    //ctor
}

Empresa::~Empresa()
{
    cout<<"\n--------------------------------------------------"<<endl;
    cout<<"\t\t  |--ADIOS--|"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    //dtor
}

Empresa::Empresa(string nombreEmpresa)
{
    this->nombreEmpresa=nombreEmpresa;
}

Empresa::Empresa(string correo,string sitioWeb)
{
    this->correo=correo;
    this->sitioWeb=sitioWeb;
}

Empresa::Empresa(int numTelefono)
{
    this->numTelefono=numTelefono;
}

Empresa::Empresa(string nombreEmpresa,int numEmpleados)
{
    this->nombreEmpresa=nombreEmpresa;
    this->numEmpleados=numEmpleados;
}

Empresa::Empresa(Empleado empleados,Tareas tareas)
{
    this->empleados=empleados;
    this->tareas=tareas;
}

//*****************************************************************************************************

string Empresa::getNombreEmpresa(void)
{
    return nombreEmpresa;
}
void Empresa::setNombreEmpresa(string nombreEmpresa)
{
    this->nombreEmpresa=nombreEmpresa;
}


int Empresa::getNumEmpleados(void)
{
    return numEmpleados;
}
void Empresa::setNumEmpleados(int numEmpleados)
{
    this->numEmpleados=numEmpleados;
}


int Empresa::getNumTelefono(void)
{
    return numTelefono;
}
void Empresa::setNumTelefono(int numTelefono)
{
    this->numTelefono=numTelefono;
}


string Empresa::getCorreo(void)
{
    return correo;
}
void Empresa::setCorreo(string correo)
{
    this->correo=correo;
}


string Empresa::getSitioWeb(void)
{
    return sitioWeb;
}
void Empresa::setSitioWeb(string sitioWeb)
{
    this->sitioWeb=sitioWeb;
}


Empleado Empresa::getEmpleados(void)
{
    return empleados;
}
void Empresa::setEmpleados(Empleado empleados)
{
    this->empleados=empleados;
}


Tareas Empresa::getTareas(void)
{
    return tareas;
}
void Empresa::setTareas(Tareas tareas)
{
    this->tareas=tareas;
}
