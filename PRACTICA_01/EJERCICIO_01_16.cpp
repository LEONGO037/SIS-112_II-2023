// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 19/08/2023
// Fecha modificacion: 19/08/2023
// Numero de ejericio: 16
// Problema planteado: Leer un numero entero que represente un valor en segundos y convierta en: horas,
//minutos y segundos.
#include<iostream>
using namespace std;
int main()
{
    int segundos, horas, minutos;
    cout<<"Ingrese el tiempo en segundos"<<endl;
    cin>>segundos;
    //Se calcula cuantas horas representan
    if (segundos>=3600)
    {
        horas=segundos/3600;
        segundos=segundos-(horas*3600);
    }
    //Se calcula cuantos minutos representan
    if (segundos>=60)
    {
        minutos=segundos/60;
        segundos=segundos-(minutos*60);
    }
    cout<<"Son "<<horas<<":"<<minutos<<":"<<segundos<<endl;
    return 0;
}
