// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 17/08/2023
// Fecha modificacion: 17/08/2023
// Numero de ejericio: 7
// Problema planteado: Numero amigo
#include<iostream>
using namespace std;
//Funcion que suma los divisores de los numeros
int SumaDivisores(int num)
{
    int sumita=0;
    for (int i=1;i<=num/2;i++)
    {
        if(num%i==0)
            sumita=sumita+i;
    }
    return sumita;
}
int main ()
{
    int numero1, numero2;
    cout<<"Ingrese 2 numeros"<<endl;
    cin>>numero1>>numero2;
    if (SumaDivisores(numero1)==numero2 && numero1==SumaDivisores(numero2))
        cout<<"Son numeros amigos"<<endl;
    else
        cout<<"No son numeros amigos"<<endl;
    return 0;
}
