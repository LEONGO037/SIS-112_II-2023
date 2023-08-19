// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 17/08/2023
// Fecha modificacion: 17/08/2023
// Numero de ejericio: 4
// Problema planteado: Conversion de temperatura de grados centigrado a Kelvin
#include<iostream>
#define K 273.15
using namespace std;
int main ()
{
    double centigrado;
    cout<<"Ingrese la temperatura en grados centigrados"<<endl;
    cin>>centigrado;
    //Se calcula e imprime la temperatura
    cout<<"La temperatura en grados kelvin es "<<centigrado+K<<endl;
    return 0;
}
