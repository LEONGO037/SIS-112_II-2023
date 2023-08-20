// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 39
// Problema planteado: Escriba un programa para leer dos valores enteros distintos entre si, de tal forma que
// si el primer número es mayor al segundo, genere una serie descendente, caso
// contrario muestre una serie ascendente, el factor de incremento o decremento es la unidad.
#include<iostream>
using namespace std;
int main()
{
    int numero1, numero2;
    cout<<"Ingrese 2 numeros"<<endl;
    cin>>numero1>>numero2;
    if(numero1!=numero2)
    {
        //Se elige cual serie se va a imprimir
        if (numero1>numero2)
        {
            for(int i=0;i<=numero1-numero2;i++)
                cout<<numero1-i<<endl;
        }
        else
        {
            for(int i=0;i<=numero2-numero1;i++)
                cout<<numero1+i<<endl;
        }
    }
    else
        cout<<"Los numeros son iguales"<<endl;
    return 0;
}
