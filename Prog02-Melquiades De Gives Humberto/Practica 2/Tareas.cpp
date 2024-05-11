#include "Tareas.h"

Tareas::Tareas()
{
    nomTarea="Tarea 1";
    horasInvertidas=24;
    minutosInvertidos=50;
    dificultad="Media";
    prioridadTarea="Urgente";
    //ctor
}

Tareas::~Tareas()
{

    //dtor
}

Tareas::Tareas(string nomTarea)
{
    this->nomTarea=nomTarea;
}
Tareas::Tareas(string dificultad,string prioridadTarea)
{
    this->dificultad=dificultad;
    this->prioridadTarea=prioridadTarea;
}

Tareas::Tareas(string nomTarea,int horasInvertidas)
{
    this->nomTarea=nomTarea;
    this->horasInvertidas=horasInvertidas;
}

Tareas::Tareas(int horasInvertidas,int minutosInvertidos)
{
    this->horasInvertidas=horasInvertidas;
    this->minutosInvertidos=minutosInvertidos;
}

Tareas::Tareas(int prioridadTarea)
{
    this->prioridadTarea=prioridadTarea;
}


//*****************************************************************************************************

string Tareas::getNomTarea(void)
{
    return nomTarea;
}
void Tareas::setNomTarea(string nomTarea)
{
    this->nomTarea=nomTarea;
}


int Tareas::getHorasInvertidas(void)
{
    return horasInvertidas;
}
void Tareas::setHorasInvertidas(int horasInvertidas)
{
    this->horasInvertidas=horasInvertidas;
}


int Tareas::getMinutoInvertidos(void)
{
    return minutosInvertidos;
}
void Tareas::setMinutoInvertidos(int minutosInvertidos)
{
    this->minutosInvertidos=minutosInvertidos;
}


string Tareas::getDificultad(void)
{
    return dificultad;
}
void Tareas::setDificultad(string dificultad)
{
    this->dificultad=dificultad;
}


string Tareas::getPrioridadTarea(void)
{
    return prioridadTarea;
}
void Tareas::setPrioridadTarea(string prioridadTarea)
{
    this->prioridadTarea=prioridadTarea;
}
