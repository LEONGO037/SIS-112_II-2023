// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 22/08/2023
// Fecha modificacion: 22/08/2023
// Numero de ejericio: 60
// Problema planteado: Los cubos de Nicómaco. Considera la siguiente propiedad descubierta por Nicómaco de
// Gerasa: Sumando el primer impar, se obtiene el primer cubo. Sumando los dos
// siguientes se obtiene el segundo cubo. Sumando los tres siguientes, se obtiene el tercer cubo, etc.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int cantidad, impares=1, numero=1;
    cout<<"Ingrese la cantidad de cubos"<<endl;
    cin>>cantidad;
    for(int i=1;i<=cantidad;i++)
    {
        //Hace las sumas sucesivas
        int cubos=0;
        for(int j=0;j<numero;j++)
        {
            cout<<impares;
            cubos+=impares;
            if (j<numero-1)
                cout<<" + ";
            impares+=2;
        }
        cout<<" = "<<cubos<<endl;
        numero++;
    }
    return 0;
}
