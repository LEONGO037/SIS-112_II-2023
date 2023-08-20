// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 27
// Problema planteado: Crear un programa que indique si un numero es perfecto o no
#include<iostream>
using namespace std;
//Funcion que saca la suma de los divisores
int SumaDivisores(int num)
{
    int sumita=0;
    for(int i=1;i<=num/2;i++)
    {
        if (num%i==0)
            sumita+=i;
    }
    return sumita;
}
int main()
{
    int numero;
    cout<<"Ingrese un numero"<<endl;
    cin>>numero;
    if (SumaDivisores(numero)==numero)
        cout<<"Es un numero perfecto"<<endl;
    else
        cout<<"No es un numero perfecto"<<endl;
    return 0;
}
