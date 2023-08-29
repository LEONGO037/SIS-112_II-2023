// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 29/08/2023
// Fecha modificacion: 29/08/2023
// Numero de ejericio: 18
// Problema planteado: Programa que declare un vector de diez elementos enteros y pida n�meros para rellenarlo
// hasta que se llene el vector o se introduzca un n�mero negativo. Entonces se debe imprimir el
// vector (s�lo los elementos introducidos).
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    vector<int> Numero;
    int numerito;
    cout<<"Ingrese los elementos del vector"<<endl;
    for (int i=0;i<10;i++)
    {
        cin>>numerito;
        //Valida que no sea un numero negatico el que se esta ingresando
        if(numerito>=0)
            Numero.push_back(numerito);
        else
            break;
    }
    cout<<"El vector es:"<<endl;
    for(int i=0;i<Numero.size();i++)
        cout<<Numero[i]<<endl;
    return 0;
}
