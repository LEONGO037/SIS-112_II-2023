// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 21/08/2023
// Fecha modificacion: 21/08/2023
// Numero de ejericio: 49
// Problema planteado: Dado un rango (A y B) de numeros enteros, obtener la cantidad de numeros pares que contiene dicho rango.
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
