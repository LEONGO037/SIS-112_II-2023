// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 34
// Problema planteado: Generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49,..., para n terminos
#include<iostream>
using namespace std;
int main()
{
    int terminos, secuencia=1;
    cout<<"Ingrese la cantidad de terminos"<<endl;
    cin>>terminos;
    cout<<1<<endl;
    //Genera la secuencia
    for (int i=0;i<terminos;i++)
    {
        cout<<secuencia<<endl;
        if (secuencia>=10)
        {
            int digitos=secuencia;
            while(digitos>0)
            {
                secuencia+=digitos%10;
                digitos/=10;
            }
        }
        else
            secuencia+=secuencia;
    }
    return 0;
}
