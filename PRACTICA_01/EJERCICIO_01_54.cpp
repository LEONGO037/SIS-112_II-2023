// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 21/08/2023
// Fecha modificacion: 21/08/2023
// Numero de ejericio: 54
// Problema planteado: Hallar la raiz cuadrada de un numero por aproximaciones, utilizar: (Algoritmo Babilonico)
#include<iostream>
using namespace std;
int main()
{
    int numeroA=1, auxiliar;
    float numero;
    cout<<"Ingrese un numero"<<endl;
    cin>>numero;
    //Halla el valor a para la formula
    while (true)
    {
        auxiliar=numeroA*numeroA;
        if(auxiliar>numero)
            break;
        numeroA++;
    }
    cout<<"La raiz cuadradada es "<<(numero+numeroA*numeroA)/(2*numeroA)<<" por el algoritmo babilonico"<<endl;
    return 0;
}
