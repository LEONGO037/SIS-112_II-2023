// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 19/08/2023
// Fecha modificacion: 19/08/2023
// Numero de ejericio: 17
// Problema planteado: Leer un valor en bolivianos y convierta a Euros, Dólares y Libras Esterlinas.
#include<iostream>
using namespace std;
int main()
{
    float bolivianos;
    cout<<"Ingrese el valor en bolivianos"<<endl;
    cin>>bolivianos;
    //Un euro equivale a 7.51 bs
    cout<<"El valor en euros es "<<bolivianos/7.51<<endl;
    //Un dolar equvale a 6.89 bs
    cout<<"El valor en dolares es "<<bolivianos/6.89<<endl;
    //Una libra esterlina equivale a 8.78 bs
    cout<<"El valor en libras esterlinas es "<<bolivianos/8.78<<endl;
    return 0;
}
