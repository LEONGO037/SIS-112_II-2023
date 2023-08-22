// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 21/08/2023
// Fecha modificacion: 21/08/2023
// Numero de ejericio: 56
// Problema planteado: Generar (para un orden n): Sea n=5:
// 1 0 1 0 1
// 0 1 0 1 0
// 1 0 1 0 1
// 0 1 0 1 0
// 1 0 1 0 1
#include<iostream>
using namespace std;
int main()
{
    int numero;
    cout<<"Ingrese un numero"<<endl;
    cin>>numero;
    cout<<"La secuencia es:"<<endl;
    //Genera la secuencia
    for(int i=0;i<numero;i++)
    {
        if (i%2==0)
        {
            for(int j=0;j<numero;j++)
            {
                if(j%2==0)
                    cout<<"1 ";
                else
                    cout<<"0 ";
            }
        }
        else
        {
            for(int j=0;j<numero;j++)
            {
                if(j%2==0)
                    cout<<"0 ";
                else
                    cout<<"1 ";
            }
        }
        cout<<endl;
    }
    return 0;
}
