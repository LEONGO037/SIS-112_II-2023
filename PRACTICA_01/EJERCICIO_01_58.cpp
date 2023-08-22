// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 22/08/2023
// Fecha modificacion: 22/08/2023
// Numero de ejericio: 58
// Problema planteado: Generar:
// 121
// 12321
// 1234321
// 123454321
// 12345654321
// 1234567654321
// 123456787654321
// 12345678987654321
#include<iostream>
using namespace std;
int main()
{
    //Genera la secuencia
    for(int i=1;i<9;i++)
    {
        int j;
        for(j=1;j<=i;j++)
            cout<<j;
        while(j>=1)
        {
            cout<<j;
            j--;
        }
        cout<<endl;
    }
    return 0;
}
