// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 21/08/2023
// Fecha modificacion: 21/08/2023
// Numero de ejericio: 48
// Problema planteado: Dado un rango (A y B) de numeros enteros, obtener la cantidad de numeros pares que contiene dicho rango.
#include<iostream>
using namespace std;
int main()
{
    int numero1, numero2, maximo, minimo, pares=0;
    cout<<"Ingrese 2 numeros"<<endl;
    cin>>numero1>>numero2;
    //Calcula cual es el menor para hacer el ciclo
    if (numero1<numero2)
    {
        minimo=numero1;
        maximo=numero2;
    }
    else
    {
        minimo=numero2;
        maximo=numero1;
    }
    while(minimo<maximo)
    {
        if((minimo+1)%2==0 && minimo+1<maximo)
            pares++;
        minimo++;
    }
    cout<<"Dentro del rango "<<numero1<<" "<<numero2<<" hay "<<pares<<" numeros pares"<<endl;
    return 0;
}
