// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 30
// Problema planteado: Calcular la siguiente sucesión
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int numero;
    float suma=0.0, termino;
    cout<<"Ingrese para cuantos terminos desea hallar la sumatoria de la serie"<<endl;
    cin>>numero;
    //Calcula la sumatoria de la serie
    for(int i=1;i<=numero;i++)
    {
        termino=pow(-1,(i+1))*(i+1)/i;
        suma+=termino;
    }
    cout<<"La sumatoria es "<<fixed<<setprecision(6)<<suma<<endl;
    return 0;
}
