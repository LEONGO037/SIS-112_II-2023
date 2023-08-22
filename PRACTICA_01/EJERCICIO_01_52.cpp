// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 21/08/2023
// Fecha modificacion: 21/08/2023
// Numero de ejericio: 52
// Problema planteado: Obtener xy utilizando productos sucesivos, tanto x como y son enteros positivos o negativos.
#include<iostream>
#include<cmath>
using namespace std;
//Funcion que calcula la potencia
int Potencia(int num1, int num2)
{
    num2=abs(num2);
    int resultado=1;
    for(int i=0;i<num2;i++)
        resultado*=num1;
    return resultado;
}
int main()
{
    int numero1, numero2;
    cout<<"Ingrese la base"<<endl;
    cin>>numero1;
    cout<<"Ingrese el exponente"<<endl;
    cin>>numero2;
    if (numero2>0)
        cout<<"El resultado de la potencia es "<<Potencia(numero1,numero2)<<endl;
    if (numero2<0)
        cout<<"El resultado de la potencia es "<<1.0/Potencia(numero1,numero2)<<endl;
    if (numero2==0)
        cout<<"El resultado de la potencia es 1"<<endl;
    return 0;
}
