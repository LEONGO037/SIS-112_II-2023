// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 23/08/2023
// Fecha modificacion: 23/08/2023
// Numero de ejericio: 64
// Problema planteado:  Leer un numero entero positivo y ordene sus dígitos del menor al mayor, la resultado es otro numero entero.
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int numero,indice=0, numeronuevo=0;
    vector <int> Digito;
    cout<<"Ingrese un numero"<<endl;
    cin>>numero;
    while(numero>0)
    {
        Digito.push_back(numero%10);
        numero/=10;
        indice++;
    }
    //Usando el metodo burbuja ordenamos el vector
    for(int j=0;j<indice;j++)
    {
        for(int k=0;k<indice;k++)
        {
            if(Digito[k]>Digito[k+1])
            {
                int auxiliar=Digito[k+1];
                Digito[k+1]=Digito[k];
                Digito[k]=auxiliar;
            }
        }
    }
    for(int i=0;i<indice;i++)
    {
        numeronuevo*=10;
        numeronuevo+=Digito[i];
    }
    cout<<"El nuevo numero es "<<numeronuevo<<endl;
}
