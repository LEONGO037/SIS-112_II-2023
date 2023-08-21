// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 45
// Problema planteado: Calcular la suma de los cuadrados de los primeros 100 primeros numeros compuestos.
#include<iostream>
#include<cmath>
using namespace std;
//Funcion que calcula si el numero es compuesto o no
bool EsComupesto (int num)
{
    bool compuesto=false;
    for(int i=2;i<=num/2;i++)
    {
        if (num%i==0)
        {
           compuesto=true;
           break;
        }
    }
    return compuesto;
}
int main()
{
    int i=0, numero=4;
    long long int suma=0;
    while(i<100)
    {
        if(EsComupesto(numero)==true)
        {
            i++;
            suma+=pow(numero,2);
        }
        numero++;
    }
    cout<<"La suma de los cuadrados de los 100 primeros numeros compuestos es "<<suma<<endl;
    return 0;
}
