// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 17/08/2023
// Fecha modificacion: 19/08/2023
// Numero de ejericio: 2
// Problema planteado: Volumen de una esfera
#include<iostream>
#include<cmath>
#define Pi 3.14159
using namespace std;
int main ()
{
    int radio;
    double volumen;
    cout<<"Ingrese el radio de la esfera"<<endl;
    cin>>radio;
    volumen=(4.0/3)*Pi*pow(radio,3); //Calcula el volumen de la esfera
    cout<<"El volumen es "<<volumen<<endl;
    return 0;
}
