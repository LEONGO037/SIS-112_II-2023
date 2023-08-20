// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 33
// Problema planteado: Leer dos fechas y mostrar el numero de dias que hay de diferencia. Suponiendo todos los meses de 30 dias.
#include<iostream>
using namespace std;
int main()
{
    int dia1, dia2, mes1, mes2, anio1, anio2;
    cout<<"Ingrese la primera fecha (dd mm yyyy)"<<endl;
    cin>>dia1>>mes1>>anio1;
    cout<<"Ingrese la segunda fecha (dd mm yyyy)"<<endl;
    cin>>dia2>>mes2>>anio2;
    int dias=(30-dia1)+dia2, meses;
    //Calcula cuantos meses hay entre las 2 fechas
    if (anio1<anio2)
        meses=(12-mes1)+mes2-1;
    else
        meses=mes2-mes1-1;
    if (anio1+1<anio2)
        meses=meses+(12*(anio2-anio1));
    cout<<"La diferencia es de "<<dias+(meses*30)<<" dias"<<endl;
    return 0;
}
