// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 21/08/2023
// Fecha modificacion: 21/08/2023
// Numero de ejericio: 51
// Problema planteado: Dados dos números enteros, realizar el algoritmo que calcule el cociente y el resto. El
// metodo para obtener el cociente y el resto es por restas sucesivas
#include<iostream>
using namespace std;
int main()
{
    int numero1, numero2, cociente=0;
    cout<<"Ingrese 2 numeros que desee dividir"<<endl;
    cin>>numero1>>numero2;
    while(numero2<=numero1)
    {
        cociente++;
        numero1-=numero2;
    }
    cout<<"El cociente es "<<cociente<<" y el resto es "<<numero1<<endl;
    return 0;
}
