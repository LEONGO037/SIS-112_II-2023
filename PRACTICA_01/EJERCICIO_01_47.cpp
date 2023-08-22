// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 21/08/2023
// Fecha modificacion: 21/08/2023
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
        float venta, ventatotal=0.0;
        cout<<"Ingrese el sueldo"<<endl;
        cin>>sueldo;
        //Se halla la suma de las 10 ventas
        for(int j=1;j<=10;j++)
        {
            cout<<"Ingrese el precio de la venta "<<j<<endl;
            cin>>venta;
            ventatotal+=venta;
        }
        cout<<"Su comision por ventas es de "<<ventatotal*0.1<<endl;
        cout<<"Su sueldo total contando la comision es de "<<sueldo+(ventatotal*0.1)<<endl;
    }
    return 0;
}
