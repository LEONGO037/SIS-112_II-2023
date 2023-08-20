// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 37
// Problema planteado: Obtenga el factorial de un numero entero sin emplear el producto.
#include<iostream>
using namespace std;
int main()
{
    int numero, factorial=1;
    cout<<"Ingrese el numero del que desea saber el factorial"<<endl;
    cin>>numero;
    //Calcula el factorial
    for(int i=1;i<numero;i++)
    {
        int auxiliar=factorial;
        for(int j=0;j<i;j++)
            factorial+=auxiliar;
    }
    cout<<"El factorial es "<<factorial<<endl;
    return 0;
}
