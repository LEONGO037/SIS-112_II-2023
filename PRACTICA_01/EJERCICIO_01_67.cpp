// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 23/08/2023
// Fecha modificacion: 23/08/2023
// Numero de ejericio: 67
// Problema planteado:  Leer un número entero y determinar si la suma de sus dígitos distintos de cero forman
// un número primo, de ser así imprima el mensaje respectivo.
#include <iostream>
using namespace std;
//Funcion que determina si un numero es primo o no
bool esPrimo(int num)
{
    bool Primo=true;
    if (num <= 1)
        Primo=false;
    for (int i = 2; i<= num/2; ++i)
    {
        if (num % i == 0)
            Primo=false;
    }
    return Primo;
}
int main()
{
    int numero, sumadigitos=0;
    cout<<"Ingrese un numero"<<endl;
    cin>>numero;
    while(numero>0)
    {
        sumadigitos+=numero%10;
        numero/=10;
    }
    cout<<"La suma de sus digitos es "<<sumadigitos;
    if(esPrimo(sumadigitos))
        cout<<" y es primo"<<endl;
    else
        cout<<" y no es primo"<<endl;
    return 0;
}
