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
    float sueldo=2362.0, total=0.0;
    cout<<"Ingrese la cantidad de empleados"<<endl;
    cin>>empleado;
    for (int i=0;i<empleado;i++)
    {
        int anios;
        float venta;
        cout<<"Ingrese cuantos anios lleva trabajando"<<endl;
        cin>>anios;
        cout<<"Ingrese cuantos productos vendio"<<endl;
        cin>>venta;
        venta*=1000.0;
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
        cout<<"Su sueldo es de "<<sueldo<<endl;
        cout<<"Su comision por ventas es de "<<venta*0.1<<endl;
        cout<<"Su sueldo total contando la comision y su bono por antiguedad es de "<<sueldo+(venta*0.1)<<endl;
        total+=(sueldo+(venta*0.1));
    }
    cout<<"El total a pagar es "<<total;
    return 0;
}
