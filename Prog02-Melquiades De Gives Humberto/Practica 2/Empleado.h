#ifndef EMPLEADO_H
#define EMPLEADO_H
#include<iostream>
using namespace std;

class Empleado
{
    private:
        string nombre;
        int edad;
        long long int codigo;
        int antiguedad;
        int sueldoBase;

    public:
        Empleado();
        Empleado(string);
        Empleado(int);
        Empleado(string,int);
        Empleado(int,int);

        ~Empleado();

        string getNombre(void);
        void setNombre(string);

        int getEdad(void);
        void setEdad(int);

        int getCodigo(void);
        void setCodigo(int);

        int getAntiguedad(void);
        void setAntiguedad(int);

        int getSueldoBase(void);
        void setSueldoBase(int);

};

#endif // EMPLEADO_H
