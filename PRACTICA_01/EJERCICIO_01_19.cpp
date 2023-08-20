// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 19/08/2023
// Fecha modificacion: 19/08/2023
// Numero de ejericio: 19
// Problema planteado: Convertir coordenadas polares en rectangulares.
#include<iostream>
#include<cmath>
#define Pi 3.14159
using namespace std;
int main()
{
    float radio, angulo, x, y;
    cout<<"Ingrese el radio"<<endl;
    cin>>radio;
    cout<<"Ingrese el angulo"<<endl;
    cin>>angulo;
    //Convertimos el angulo a radianes
    angulo=angulo*Pi/180;
    x=radio*std::cos(angulo);
    y=radio*std::sin(angulo);
    cout<<"Las coordenadas rectangulares son: ("<<x<<","<<y<<")"<<endl;
    return 0;
}
