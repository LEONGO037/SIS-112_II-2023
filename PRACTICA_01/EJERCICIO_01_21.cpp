// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 21
// Problema planteado: Leer un numero n y tambien un intervalo de cerrado de valores (a,b), si el numero esta
//dentro del intervalo obtenga su cuadrado (n*n), si es menor que el limite inferior,
//obtenga su valor inverso (1/n), si esta por encima del intervalo obtenga su mitad (n/2).
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int numero, limiteI, limiteS;
    cout<<"Ingrese el numero"<<endl;
    cin>>numero;
    cout<<"Ingrese el limite inferior"<<endl;
    cin>>limiteI;
    cout<<"Ingrese el limite superior"<<endl;
    cin>>limiteS;
    //Vemos que condicion cumple el numero y calculamos la operacion correspondiente
    if (numero>=limiteI && numero<=limiteS)
        cout<<"El cuadrado es "<<pow(numero,2)<<endl;
    if (numero<limiteI)
        cout<<"El valor inverso es "<<1.0/numero<<endl;
    if (numero>limiteS)
        cout<<"La mitad del numero es "<<numero/2.0<<endl;
    return 0;
}
