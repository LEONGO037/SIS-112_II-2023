// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 42
// Problema planteado: En una granja se requiere determinar el promedio de calidad de las n gallinas que hay
// en la granja. La calidad de cada gallina se obtiene segun la formula:
// Calidad = (peso de la gallina * altura de la gallina)/Numero de huevos que pone
#include<iostream>
using namespace std;
int main()
{
    int cantidad;
    float promedio=0.0;
    cout<<"Ingrese la cantidad de gallinas"<<endl;
    cin>>cantidad;
    for(int i=0;i<cantidad;i++)
    {
        float peso, altura, calidad;
        int huevos;
        cout<<"Ingrese el peso de la gallina"<<endl;
        cin>>peso;
        cout<<"Ingrese la altura de la gallina"<<endl;
        cin>>altura;
        cout<<"Ingrese la cantidad de huevos que pone"<<endl;
        cin>>huevos;
        //Calcula la calidad de cada gallina
        calidad=(peso*altura)/huevos;
        promedio+=calidad;
    }
    cout<<"El promedio de calidad es "<<promedio/cantidad<<endl;
    return 0;
}
