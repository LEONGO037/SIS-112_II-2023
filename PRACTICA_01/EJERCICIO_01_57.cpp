// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 21/08/2023
// Fecha modificacion: 21/08/2023
// Numero de ejericio: 57
// Problema planteado: Encontrar cuadrados perfectos en el rango 1 a n
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int numero;
    cout<<"Ingrese un numero"<<endl;
    cin>>numero;
    cout<<"Los cuadrados perfectos son:"<<endl;
    //Halla los cuadrados perfectos
    for(int i=1;i<=numero;i++)
    {
        int raiz=sqrt(i);
        if ((raiz*raiz)==i)
            cout<<i<<endl;
    }
    return 0;
}
