// Materia: Programacion I, Paralelo 5
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 17/08/2023
// Fecha modificacion: 17/08/2023
// Nomero de ejericio: 5
// Problema planteado: Calcular la distancia entre dos puntos P1 y P2 localizados en un plano X Y
// raiz cuadrada ( (x2-x1) elevado 2 + (y2-y1) elevado 2 )
#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int x1,x2,y1,y2;
    float distacia;
    cout<<"Ingrese las coordenadas del punto 1"<<endl;
    cin>>x1>>y1;
    cout<<"Ingrese las coordenadas del punto 2"<<endl;
    cin>>x2>>y2;
    // Se calcula la distancia entre los puntos usando la formula
    distacia=sqrt(pow((x1-x2),2.0)+pow((y1-y2),2.0));
    cout<<"La distancia entre los puntos es "<<distacia<<endl;
    return 0;
}
