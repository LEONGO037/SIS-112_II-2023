// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 23
// Problema planteado: Elabore un programa en el que dado un entero n > 1, calcule e imprima los elementos
//correspondientes a la conjetura de Ullman (en honor al matematico Ullman)
#include<iostream>
using namespace std;
int main()
{
    int numero;
    cout<<"Ingrese un numero mayor a 1"<<endl;
    cin>>numero;
    cout<<"Aplicando la conjetura de Ullman"<<endl;
    //Aplicamos la conjetura de Ullman
    while(numero>1)
    {
        if (numero%2==0)
            numero=numero/2;
        else
            numero=(numero*3)+1;
        cout<<numero<<endl;
    }
    return 0;
}
