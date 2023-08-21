// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 41
// Problema planteado: Un cierto número de obreros de una empresa reciben pagos semanales de dinero, en función a las
// horas trabajadas y una tarifa hora.
#include<iostream>
using namespace std;
int main()
{
    int obreros, horas, horasExtra;
    float  pagoHora, pagoGeneral=0, pagoNeto=0;
    cout<<"Ingrese la cantidad de obreros"<<endl;
    cin>>obreros;
    cout<<"Ingrese la tarifa por hora de trabajo"<<endl;
    cin>>pagoHora;
    for(int i=0;i<obreros;i++)
    {
        horasExtra=0;
        cout<<"Ingrese cuantas horas trabajo el obrero"<<endl;
        cin>>horas;
        if (horas>40)
        {
            horasExtra=horas-40;
            horas=40;
        }
        //Calcula el pago de cad obrero
        float pagototal=(horas*pagoHora)+(horasExtra*pagoHora*2.0);
        float pagoneto=(horas*pagoHora)-(horas*pagoHora/20.0)+(horasExtra*pagoHora*2.0);
        cout<<"El pago total del obrero es de "<<pagototal<<endl;
        cout<<"El pago neto del obrero es de "<<pagoneto<<endl;
        pagoGeneral+=pagototal;
        pagoNeto+=pagoneto;
    }
    cout<<"El pago general es de "<<pagoGeneral<<endl;
    cout<<"El pago neto es de "<<pagoNeto<<endl;
    cout<<"El descuento por prima es de "<<pagoGeneral-pagoNeto<<endl;
    return 0;
}
