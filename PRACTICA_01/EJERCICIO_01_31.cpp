// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 31
// Problema planteado: Leer dos numeros y verificar si uno es multiplo del otro o no lo es
#include<iostream>
using namespace std;
int main()
{
    int numero1, numero2;
    cout<<"Ingrese 2 numeros"<<endl;
    cin>>numero1>>numero2;
    //Verificamos si los numeros son multiplos entre si
    if (numero1%numero2==0)
        cout<<"El numero "<<numero1<<" es multiplo de "<<numero2<<endl;
    else
    {
        if (numero2%numero1==0)
            cout<<"El numero "<<numero2<<" es multiplo de "<<numero1<<endl;
        else
            cout<<"Ninguno de los 2 numeros es multiplo del otro"<<endl;
    }
    return 0;
}
