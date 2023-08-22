// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 21/08/2023
// Fecha modificacion: 21/08/2023
// Numero de ejericio: 46
// Problema planteado: La empresa Limbo S.A., empresa de seguros tiene contratados a N vendedores. Cada uno hace tres ventas
// a la semana.
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
        //Se halla la suma de las 3 ventas
        for(int j=1;j<=3;j++)
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
