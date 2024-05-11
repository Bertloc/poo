#ifndef EMPRESA_H
#define EMPRESA_H
#include<iostream>
#include "Tareas.h"
#include "Empleado.h"
using namespace std;

class Empresa
{
    private:
        string nombreEmpresa;
        int numEmpleados;
        int numTelefono;
        string correo;
        string sitioWeb;
        Empleado empleados;
        Tareas tareas;


    public:
        Empresa();
        Empresa(string);
        Empresa(string,string);
        Empresa(int);
        Empresa(string,int);
        Empresa(Empleado,Tareas);

        ~Empresa();

        string getNombreEmpresa(void);
        void setNombreEmpresa(string);

        int getNumEmpleados(void);
        void setNumEmpleados(int);

        int getNumTelefono(void);
        void setNumTelefono(int);

        string getCorreo(void);
        void setCorreo(string);

        string getSitioWeb(void);
        void setSitioWeb(string);

        Empleado getEmpleados(void);
        void setEmpleados(Empleado);

        Tareas getTareas(void);
        void setTareas(Tareas);




};

#endif // EMPRESA_H
