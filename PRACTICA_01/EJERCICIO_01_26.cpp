// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 26
// Problema planteado: En una tienda comercial, las amas de casa compran diversos artículos de primera necesidad
#include<iostream>
using namespace std;
int main()
{
    int cantidad;
    float precio, total=0.0;
    //El ciclo solo termina caundo ya no se quieren ingresar mas productos
    while (true)
    {
        cout<<"Ingrese el precio del producto"<<endl;
        cin>>precio;
        cout<<"Ingrese la cantidad del producto"<<endl;
        cin>>cantidad;
        total += (cantidad*precio);
        int nuevo;
        cout<<"Desea ingresar otro producto?"<<endl<<"1. Si"<<endl<<"2. No"<<endl;
        cin>>nuevo;
        if (nuevo==2)
            break;
    }
    cout<<"El total a pagar es "<<total<<endl;
    return 0;
}
