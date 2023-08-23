// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 23/08/2023
// Fecha modificacion: 23/08/2023
// Numero de ejericio: 61
// Problema planteado: Sean los datos m y n enteros positivos, Elabore un diagrama de flujo para calcular el
// Máximo Común Divisor y el Mínimo Común Múltiplo de m y n.
#include <iostream>
using namespace std;
// Funcion para calcular el maximo comun divisor usando el algoritmo de Euclides
int mcd(int num1, int num2)
{
    while (num2 != 0)
    {
        int auxiliar = num2;
        num2 = num1 % num2;
        num1 = auxiliar;
    }
    return num1;
}
// Funcion para calcular el minimo comun múltiplo usando el mcd
int mcm(int num1, int num2)
{
    return (num1 * num2) / mcd(num1, num2);
}
int main()
 {
    int numero1, numero2;
    cout<<"Ingrese 2 numeros "<<endl;
    cin>>numero1>>numero2;
    if (numero1>numero2)
    {
        cout<<"El minimo comun multiplo es "<<mcm(numero1,numero2)<<endl;
        cout<<"El maximo comun divisor es "<<mcd(numero1,numero2)<<endl;
    }
    else
    {
        cout<<"El minimo comun multiplo es "<<mcm(numero2,numero1)<<endl;
        cout<<"El maximo comun divisor es "<<mcd(numero2,numero1)<<endl;
    }
    return 0;
}

