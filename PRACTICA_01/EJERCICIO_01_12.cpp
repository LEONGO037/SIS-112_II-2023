// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 19/08/2023
// Fecha modificacion: 19/08/2023
// Numero de ejericio: 12
// Problema planteado: Mostrar los primero 100 numero primos.
#include<iostream>
using namespace std;
//Funcion que determina si el numero es primo o no
bool EsPrimo(int num)
{
    bool Primo = true;
    for(int i=2;i<num/2;i++)
    {
        if (num%i==0)
            Primo = false;
    }
    return Primo;
}
int main()
{
    cout<<"Los primeros 100 numeros primos son:"<<endl;
    int num=2, j=0;
    while(j<=100)
    {
        if (EsPrimo(num))
        {
            cout<<num<<endl;
            j++;
        }
        num++;
    }
    return 0;
}
