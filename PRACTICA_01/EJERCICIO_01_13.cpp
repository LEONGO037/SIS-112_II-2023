// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 19/08/2023
// Fecha modificacion: 19/08/2023
// Numero de ejericio: 13
// Problema planteado: Indique la cantidad de dígitos que tiene un numero entero.
#include<iostream>
using namespace std;
int main()
{
    int numero, digitos=0;
    cout<<"Ingrese un numero"<<endl;
    cin>>numero;
    //Se ve cuantos digitos tiene el numero
    while(numero>0)
    {
        numero/=10;
        digitos++;
    }
    cout<<"El numero tiene "<<digitos<<" digitos"<<endl;
}
