#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

using namespace std;

class Persona
{
    private:
        string direccion;
        string sangre;

    public:
        //atributos
        string nombre;
        int edad;

        //metodos
        ~Persona();
        Persona();
        Persona(string);
        Persona(string,int);

        string getNombre(void);
        void setNombre(string);

        int getEdad(void);
        void setEdad(int);

        string getDireccion(void);
        void setDireccion(string);

        string getSangre(void);
        void setSangre(string);

        void hablar(void);
        void indicar(void);


};

#endif // PERSONA_H
