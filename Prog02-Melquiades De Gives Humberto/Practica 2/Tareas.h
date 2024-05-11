#ifndef TAREAS_H
#define TAREAS_H
#include<iostream>
using namespace std;

class Tareas
{
    private:
        string nomTarea;
        int horasInvertidas;
        int minutosInvertidos;
        string dificultad;
        string prioridadTarea;

    public:
        Tareas();
        Tareas(string);
        Tareas(string,string);
        Tareas(int,int);
        Tareas(string,int);
        Tareas(int);


        ~Tareas();
        string getNomTarea(void);
        void setNomTarea(string);

        int getHorasInvertidas(void);
        void setHorasInvertidas(int);

        int getMinutoInvertidos(void);
        void setMinutoInvertidos(int);

        string getDificultad(void);
        void setDificultad(string);

        string getPrioridadTarea(void);
        void setPrioridadTarea(string);
};

#endif // TAREAS_H
