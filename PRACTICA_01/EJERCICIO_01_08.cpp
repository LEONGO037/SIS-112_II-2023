// Materia: Programaci�n I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// N�mero de ejericio: 8
// Problema planteado: En el estacionamiento del Megacenter se cobra 7 Bs la primera hora, si pasa de una
//hora se cobra 5 Bs adicional por hora.
//Ingrese la cantidad de horas que un veh�culo est� estacionado y calcule cuanto debe pagar.
#include<iostream>
using namespace std;
int main ()
{
    int horas;
    cout<<"Ingrese la cantidad de horas que estuvo en el estacionamiento"<<endl;
    cin>>horas;
    //Se ve cuanto debe pagar por el estacionamiento
    if (horas==1)
        cout<<"Debe pagar 7 Bs"<<endl;
    else
        cout<<"Debe pagar "<<7+(horas-1)*5<<endl;
    return 0;
}
