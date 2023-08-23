// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 21/08/2023
// Fecha modificacion: 22/08/2023
// Numero de ejericio: 47
// Problema planteado: Un negocio de Cosmeticos de belleza, contratara a n vendedoras para la venta de sus productos.
#include<iostream>
using namespace std;
int main()
{
    int empleado;
    float sueldo, bono;
    cout<<"Ingrese la cantidad de empleados"<<endl;
    cin>>empleado;
    for (int i=0;i<empleado;i++)
    {
        int anios;
        float venta, ventatotal=0.0;
        cout<<"Ingrese el sueldo"<<endl;
        cin>>sueldo;
        cout<<"Ingrese cuantos anios lleva trabajando"<<endl;
        cin>>anios;
        if(2<=anios && anios<=4)
            sueldo+=(sueldo*0.05);
        if(5<=anios && anios<=7)
            sueldo+=(sueldo*0.11);
        if(8<=anios && anios<=10)
            sueldo+=(sueldo*0.18);
        if(11<=anios && anios<=14)
            sueldo+=(sueldo*0.26);
        if(15<=anios && anios<=19)
            sueldo+=(sueldo*0.34);
        if(20<=anios && anios<=24)
            sueldo+=(sueldo*0.42);
        if(25<=anios)
            sueldo+=(sueldo*0.5);
        //Se halla la suma de las 10 ventas
        for(int j=1;j<=10;j++)
        {
            cout<<"Ingrese el precio de la venta "<<j<<endl;
            cin>>venta;
            ventatotal+=venta;
        }
        cout<<"Su comision por ventas es de "<<ventatotal*0.1<<endl;
        cout<<"Su sueldo total contando la comision y su bono por antiguedad es de "<<sueldo+(ventatotal*0.1)<<endl;
    }
    return 0;
}
