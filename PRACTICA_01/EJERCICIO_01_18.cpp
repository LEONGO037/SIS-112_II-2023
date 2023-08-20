// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 19/08/2023
// Fecha modificacion: 19/08/2023
// Numero de ejericio: 18
// Problema planteado: Escribir un programa que calcule el volumen de una piramide recta de base cuadrada.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float volumen, lado, altura;
    cout<<"Ingrese el lado"<<endl;
    cin>>lado;
    cout<<"Ingrese la altura"<<endl;
    cin>>altura;
    //Calcula el volumen
    volumen=(pow(lado,2)*altura)/3.0;
    cout<<"El volumen de la piramide es "<<volumen<<endl;
    return 0;
}
