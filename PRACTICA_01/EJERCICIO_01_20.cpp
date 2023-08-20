// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 19/08/2023
// Fecha modificacion: 19/08/2023
// Numero de ejericio: 20
// Problema planteado: Leer tres números enteros y si son diferentes entre sí determine con algún mensaje el menor.
#include<iostream>
using namespace std;
int main()
{
    int numero1, numero2, numero3;
    cout<<"Ingrese 3 numeros"<<endl;
    cin>>numero1>>numero2>>numero3;
    if (numero1==numero2 && numero2==numero3)
    {
        cout<<"Los 3 numeros son iguales"<<endl;
    }
    //Se ve cual numero es el menor
    else
    {
        if (numero1<numero2 && numero1<numero3)
            cout<<"El numero menor es "<<numero1<<endl;
        if (numero2<numero1 && numero2<numero3)
            cout<<"El numero menor es "<<numero2<<endl;
        if (numero3<numero1 && numero3<numero2)
            cout<<"El numero menor es "<<numero3<<endl;
    }
    return 0;
}
