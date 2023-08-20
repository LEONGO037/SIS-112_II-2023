// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 19/08/2023
// Fecha modificacion: 19/08/2023
// Numero de ejericio: 12
// Problema planteado: Indique la cantidad de dígitos que tiene un numero entero.
#include<iostream>
using namespace std;
int main()
{
    int numero, suma=0, cantidad=0;
    //Uso do-while para que haga la accion por lo menos una vez
    do
    {
        cout<<"Ingrese un numero"<<endl;
        cin>>numero;
        suma+=numero;
        cantidad++;
    }while(numero!=0);
    cout<<"El promedio es "<<suma/(cantidad-1.0)<<endl;
    return 0;
}
