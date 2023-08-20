// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 28
// Problema planteado: Multiplicar dos números naturales, sin emplear el operador de la multiplicación,
// empleando sumas sucesivas
#include<iostream>
using namespace std;
int main()
{
    int numero1, numero2, resultado=0;
    cout<<"Ingrese 2 numeros que quiera multiplicar"<<endl;
    cin>>numero1>>numero2;
    //Sumamos el segundo numero la cantidad de veces del primer numero
    for(int i=0;i<numero1;i++)
        resultado+=numero2;
    cout<<"La multiplicacion es "<<resultado<<endl;
    return 0;
}
