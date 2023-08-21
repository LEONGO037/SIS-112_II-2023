// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 43
// Problema planteado: Obtener el promedio de numeros enteros positivos introducidos por teclado, el
// algoritmo se detiene cuando se lea un numero negativo o cero.
#include<iostream>
using namespace std;
int main()
{
    int numero, i=0;
    double suma=0.0;
    do
    {
        cout<<"Ingrese un numero"<<endl;
        cin>>numero;
        //Filtro para solo sumar los positivos
        if (numero>0)
        {
            suma+=numero;
            i++;
        }
    }while(numero>0);
    cout<<"El promedio es "<<suma/i;
    return 0;
}
