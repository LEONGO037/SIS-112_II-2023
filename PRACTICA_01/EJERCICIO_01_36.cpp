// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 36
// Problema planteado: Dadas las edades y alturas de n alumnos, mostrar la edad y la estatura media, la
// cantidad de alumnos mayores de 18 anios, y la cantidad de alumnos que miden mas de 1.75 cm
#include<iostream>
using namespace std;
int main()
{
    int alumnos, edad, altura, mayores18=0, altos175=0;
    float edadmedia=0.0, alturamedia=0.0;
    cout<<"Ingrese la cantidad de alumnos"<<endl;
    cin>>alumnos;
    for(int i=0;i<alumnos;i++)
    {
        cout<<"Ingrese la edad del alumno"<<endl;
        cin>>edad;
        cout<<"Ingrese la altura del alumno (en cm)"<<endl;
        cin>>altura;
        edadmedia+=edad;
        alturamedia+=altura;
        if (edad>18)
            mayores18++;
        if (altura>175)
            altos175++;
    }
    //Calcula e imprime el promedio de altura y edad
    cout<<"La edad media es "<<edadmedia/alumnos<<endl;
    cout<<"La altura media es "<<alturamedia/alumnos<<endl;
    cout<<"Hay "<<mayores18<<" alumnos mayores de 18 anios"<<endl;
    cout<<"Hay "<<altos175<<" alumnos que miden mas de 175 cm"<<endl;
    return 0;
}
