// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 21/08/2023
// Fecha modificacion: 21/08/2023
// Numero de ejericio: 49
// Problema planteado: Escribir un programa que muestre en pantalla, con los encabezados correspondientes,
// el capital (Cn) y los intereses ganados por un capital C0 depositado a un interes
// compuesto I durante N anos.
#include<iostream>
using namespace std;
int main()
{
    float capital, interes;
    int anios;
    cout<<"Ingrese el capital"<<endl;
    cin>>capital;
    float auxiliar=capital;
    cout<<"Ingrese el interes (en %)"<<endl;
    cin>>interes;
    cout<<"Ingrese la cantidad de anios"<<endl;
    cin>>anios;
    interes/=100;
    //Calcula el interes total
    for(int i=0;i<anios;i++)
        capital += (capital*interes);
    cout<<"El capital es "<<capital<<endl;
    cout<<"El interes generado es "<<capital-auxiliar<<endl;
    return 0;
}
