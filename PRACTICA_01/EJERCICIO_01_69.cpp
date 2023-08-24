// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 23/08/2023
// Fecha modificacion: 23/08/2023
// Numero de ejericio: 69
// Problema planteado:  Calcular el coeficiente binomial a partir de la lectura de dos números enteros, a partir de la relación:
#include <iostream>
using namespace std;
//Funcion que calcula el factorial
long long int Factorial(int num)
{
    long long int fact=1;
    for(int i=1;i<=num;i++)
        fact*=i;
    return fact;
}
int main()
{
    int numeroN, numeroM;
    float resultado;
    cout<<"Ingrese 2 numeros"<<endl;
    cin>>numeroN>>numeroM;
    resultado=(Factorial(numeroN))/(Factorial(numeroN-numeroM)*Factorial(numeroM));
    cout<<"El coeficiente binominal es "<<resultado<<endl;
    return 0;
}
