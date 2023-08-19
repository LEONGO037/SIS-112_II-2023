// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// Numero de ejericio: 3
// Problema planteado: Promedio de notas, escriba un programa que lea N notas y saque le promedio general.
#include<iostream>
using namespace std;
int main ()
{
    int cantidad;
    double suma=0.0;
    cout<<"Ingrese la cantidad de alumnos"<<endl;
    cin>>cantidad;
    //Se suma todas las notas
    for(int i=0;i<cantidad;i++)
    {
        int nota;
        cout<<"Ingrese la nota del alumno"<<endl;
        cin>>nota;
        suma=suma+nota;
    }
    cout<<"Promedio: "<<suma/cantidad<<endl;
    return 0;
}
