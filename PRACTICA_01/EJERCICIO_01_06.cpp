// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 17/08/2023
// Fecha modificacion: 17/08/2023
// Numero de ejericio: 6
// Problema planteado: Numero primo
#include<iostream>
using namespace std;
int main ()
{
    int numero,i=2;
    bool resultado=true;
    cout<<"Ingrese un numero"<<endl;
    cin>>numero;
    //Se calcula que el numero se pueda dividir entre solo 2 numeros
    while(numero/2>i)
    {
        if (numero%i==0)
        {
            resultado=false;
            break;
        }
        else
            i++;
    }
    if (resultado)
        cout<<"El numero es primo"<<endl;
    else
        cout<<"El numero no es primo"<<endl;
    return 0;
}
