// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 21/08/2023
// Fecha modificacion: 21/08/2023
// Numero de ejericio: 55
// Problema planteado: Generar las secuencias:
// 1 2 3 4 …………..n
// 1 2 3 4….. n-1
#include<iostream>
using namespace std;
int main()
{
    int numero, auxiliar;
    cout<<"Ingrese un numero"<<endl;
    cin>>numero;
    auxiliar=numero;
    cout<<"La secuencia es:"<<endl;
    //Genera la secuencia
    for(int i=0;i<auxiliar;i++)
    {
        for(int j=1;j<=numero;j++)
            cout<<j<<" ";
        numero--;
        cout<<endl;
    }
    return 0;
}
