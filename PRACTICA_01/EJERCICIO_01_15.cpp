// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 19/08/2023
// Fecha modificacion: 19/08/2023
// Numero de ejericio: 15
// Problema planteado: Escriba la sucesión de Fibonacci.
#include<iostream>
using namespace std;
int main()
{
    int cantidad, i=0, numero1=0, numero2=1, numero3;
    cout<<"Ingrese cuantos numeros de la sucesion de Fibonacci va a imprimir"<<endl;
    cin>>cantidad;
    cout<<"1"<<endl;
    //Se calcula e imprime la sucesion de Fibonacci
    while(i<cantidad-1)
    {
        numero3=numero1+numero2;
        numero1=numero2;
        numero2=numero3;
        cout<<numero3<<endl;
        i++;
    }
    return 0;
}
