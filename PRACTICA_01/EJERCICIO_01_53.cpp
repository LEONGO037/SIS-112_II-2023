// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 21/08/2023
// Fecha modificacion: 21/08/2023
// Numero de ejericio: 53
// Problema planteado: Escriba un programa que permita al usuario obtener los valores de las funciones trigonometricas
#include<iostream>
#include<cmath>
#define Pi 3.14159
using namespace std;
int main()
{
    float angulo;
    cout<<"Ingrese el angulo"<<endl;
    cin>>angulo;
    //Halla las funciones trigonometricas
    cout<<"El seno es "<<sin((angulo*Pi)/180.0)<<endl;
    cout<<"El coseno es "<<cos((angulo*Pi)/180.0)<<endl;
    cout<<"El tangente es "<<tan((angulo*Pi)/180.0)<<endl;
    cout<<"El arcoseno es "<<asin((angulo*Pi)/180.0)<<endl;
    cout<<"El arcocoseno es "<<acos((angulo*Pi)/180.0)<<endl;
    cout<<"El arcotangente es "<<atan((angulo*Pi)/180.0)<<endl;
    return 0;
}
