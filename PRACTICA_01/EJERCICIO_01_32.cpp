// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 32
// Problema planteado: Leer un numero entero y mostrarlo con las cifras al reves.
#include<iostream>
using namespace std;
int main()
{
    int numero;
    cout<<"Ingrese un numero"<<endl;
    cin>>numero;
    cout<<"El numero al reves es:"<<endl;
    //Damos la vuelta e imprimimos el numero
    while(numero>0)
    {
        cout<<numero%10;
        numero /=10;
    }
    return 0;
}
