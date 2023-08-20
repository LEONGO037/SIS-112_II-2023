// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 35
// Problema planteado: Un supermercado decide efectuar una promocion de descuentos por el valor de las compras que
// efectuan sus clientes
#include<iostream>
using namespace std;
int main()
{
    int cliente, total=0.0, descuento1=0, descuento2=0, descuento3=0;
    cout<<"Ingrese la cantidad de clientes"<<endl;
    cin>>cliente;
    for(int i=0;i<cliente;i++)
    {
        float pago;
        cout<<"Ingrese cuanto debe pagar el cliente"<<endl;
        cin>>pago;
        //Aplicamos el descuento correspondiente
        if (0<pago && pago<100)
        {
            descuento1++;
            total+=pago;
            cout<<"El cliente no tiene descuento"<<endl;
        }
        if (100<=pago && pago<500)
        {
            descuento2++;
            pago=pago-pago/20.0;
            total+=pago;
            cout<<"Aplicando el 5% de descuento: "<<pago<<endl;
        }
        if(500<=pago)
        {
            descuento3++;
            pago=pago-pago*2.0/25.0;
            total+=pago;
            cout<<"Aplicando el 8% de descuento: "<<pago<<endl;
        }
    }
    cout<<"Se realizaron "<<cliente<<" ventas"<<endl<<"De las cuales:"<<endl;
    cout<<descuento1<<" no tenian descuento"<<endl;
    cout<<descuento2<<" tenian descuento del 5%"<<endl;
    cout<<descuento3<<" tenian descuento del 8%"<<endl;
    cout<<"La ganacia total es de "<<total<<" Bs"<<endl;
    return 0;
}
