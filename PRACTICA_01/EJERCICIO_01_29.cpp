// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 29
// Problema planteado: En una llanteria se ha establecido una promocion de las llantas marca Ponchadas
#include<iostream>
using namespace std;
int main()
{
    int cantidad;
    cout<<"Ingrese cuantas llantas esta comprando"<<endl;
    cin>>cantidad;
    if (0<cantidad && cantidad<5)
    {
        cout<<"El precio de cada llanta es de 300 Bs"<<endl;
        cout<<"El total a pagar es de "<<cantidad*300<<" Bs"<<endl;
    }
    if (5<=cantidad && cantidad<=10)
    {
        cout<<"El precio de cada llanta es de 250 Bs"<<endl;
        cout<<"El total a pagar es de "<<cantidad*250<<" Bs"<<endl;
    }
    if (10<cantidad)
    {
        cout<<"El precio de cada llanta es de 200 Bs"<<endl;
        cout<<"El total a pagar es de "<<cantidad*200<<" Bs"<<endl;
    }
    return 0;
}
