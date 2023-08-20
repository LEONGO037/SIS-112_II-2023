// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 40
// Problema planteado: Disponemos de una máquina que puede dar cambios con 5 tipos de monedas distintas: 5 Bs. 1 Bs. 0.50 Bs.
// 0.20 Bs. y 0.10 Bs.. Realizar el programa en el que dado el precio del artículo y la cantidad en bolivianos entregada por el
// consumidor nos indique el cambio a entregar empleando el menor número posible de monedas.
#include<iostream>
using namespace std;
int main()
{
    float precio, dinero, cambio;
    int moneda5=0, moneda1=0, moneda05=0, moneda02=0, moneda01=0;
    cout<<"Ingrese el precio del producto"<<endl;
    cin>>precio;
    cout<<"Ingrese cuanto dinero dio el consumidor"<<endl;
    cin>>dinero;
    cambio=dinero-precio;
    cambio*=10;
    //Se calcula cuantas monedas de cada valor se deben devolver
    if (cambio>=50)
    {
        moneda5=cambio/50;
        cambio=cambio-moneda5*50;
    }
    if (cambio>=10)
    {
        moneda1=cambio/10;
        cambio=cambio-moneda1*10;
    }
    if (cambio>=5)
    {
        moneda05=cambio/5;
        cambio=cambio-moneda05*5;
    }
    if (cambio>=2)
    {
        moneda02=cambio/2;
        cambio=cambio-moneda02*2;
    }
    if (cambio==1)
    {
        moneda01=1;
    }
    cout<<"Se deben dar "<<moneda5<<" moneda(s) de 5 Bs"<<endl;
    cout<<"Se deben dar "<<moneda1<<" moneda(s) de 1 Bs"<<endl;
    cout<<"Se deben dar "<<moneda05<<" moneda(s) de 0.50 Bs"<<endl;
    cout<<"Se deben dar "<<moneda02<<" moneda(s) de 0.20 Bs"<<endl;
    cout<<"Se deben dar "<<moneda01<<" moneda(s) de 0.10 Bs"<<endl;
    return 0;
}
