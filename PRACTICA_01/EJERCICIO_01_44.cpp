// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 44
// Problema planteado: La comercial La Estrella del Sur vende n productos en un dia, de los cuales factura al precio de cada uno
// con un IVA del 13% y si el monto final se excede en 2500 Bs, se aplica un descuento del 5%. Obtener la suma total de las ventas
// realizadas en el dia y calcular el pago del IVA del 13% al servicio de Impuestos Nacionales.
#include<iostream>
using namespace std;
int main()
{
    int cantidad;
    float precio, total=0.0;
    cout<<"Ingrese la cantidad de productos"<<endl;
    cin>>cantidad;
    for(int i=0;i<cantidad;i++)
    {
        cout<<"Ingrese el precio del producto "<<endl;
        cin>>precio;
        total+=precio;
    }
    cout<<"El total de ventas es de "<<total<<endl;
    if(total>2500)
    {
        total-=(total*0.05);
        cout<<"El total de ventas con descuneto del 5% es de "<<total<<endl;
    }
    //Calcula e imprime el impuesto IVA
    cout<<"El impuesto IVA es de "<<total*0.13<<endl;
    return 0;
}
