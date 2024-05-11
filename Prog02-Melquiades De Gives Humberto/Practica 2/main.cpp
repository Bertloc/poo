#include <iostream>
#include "Empleado.h"
#include "Tareas.h"
#include "Empresa.h"
using namespace std;
void listtareas();
void listempleados();
void unicaEmpresa();
int main()
{
    cout<<"\t*TAREA*\n"<<endl;
    listtareas();
    cout<<"\n--------------------------------------------------"<<endl;
    cout<<"\t*EMPLEADO*\n"<<endl;
    listempleados();
    cout<<"\n--------------------------------------------------"<<endl;
    cout<<"\t*EMPRESA*\n"<<endl;
    unicaEmpresa();
    return 0;
}

void listtareas()
{
    Tareas t1;
    t1.setNomTarea("Reprobar");
    cout<<"Nombre de la tarea: "<<t1.getNomTarea()<<endl;
    cout<<"Prioridad: "<<t1.getPrioridadTarea()<<endl;
    cout<<"Nivel de dificultad: "<<t1.getDificultad()<<endl;
    cout<<"Tiempo invertido: "<<t1.getHorasInvertidas()<<" horas con "<<t1.getMinutoInvertidos()<<" minutos"<<endl;
}
void listempleados()
{
    Empleado emp1;
    cout<<"Nombre: "<<emp1.getNombre()<<endl;
    cout<<"Antiguedad: "<<emp1.getAntiguedad()<<" years"<<endl;
    cout<<"Codigo: "<<emp1.getCodigo()<<endl;
    emp1.setSueldoBase(2000);
    cout<<"Sueldo: "<<emp1.getSueldoBase()<<"$"<<endl;
}
void unicaEmpresa()
{
    Empresa uni;
    cout<<"Nombre empresa: "<<uni.getNombreEmpresa()<<endl;
    cout<<"Numero de empleados: "<<uni.getNumEmpleados()<<endl;
    cout<<"Telefono empresarial: "<<uni.getNumTelefono()<<endl;
    cout<<"Sitio web: "<<uni.getSitioWeb()<<endl;
    cout<<"Correo electronico: "<<uni.getCorreo()<<endl;
    cout<<"\n      *TURNO MATUTINO*\n"<<endl;

    ///llamo datos de las clase por medio de la clase principal
    cout<<"Nombre de empleado: "<<uni.getEmpleados().getNombre()<<endl;
    cout<<"Experiencia: "<<uni.getEmpleados().getAntiguedad()<<" years"<<endl;
    cout<<"Tarea asignada: "<<uni.getTareas().getNomTarea()<<endl;
    cout<<"Prioridad: "<<uni.getTareas().getPrioridadTarea()<<endl;
}
