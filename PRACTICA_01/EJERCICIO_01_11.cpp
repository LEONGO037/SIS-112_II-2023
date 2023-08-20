// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 19/08/2023
// Fecha modificacion: 19/08/2023
// Numero de ejericio: 11
// Problema planteado: Se tiene el pago de un docente de la UCB de planilla permanente y planilla contrato
//civil. Se paga por categoría de acuerdo con la siguiente tabla.
#include <iostream>
using namespace std;
//Funcion que calcula el pago total del docente
int PagoTotal(int horas,int planillas, int planilla1, int planilla2)
{
    int pago;
    if (planillas==1)
        pago=(horas*150)+(horas*150*planilla1/100);
    else
        pago=(horas*150)+(horas*150*planilla2/100);
    return pago;
}
int main()
{
    int horas, planilla;
    char categoria;
    cout<<"Ingrese la cantidad de horas que trabaja el docente"<<endl;
    cin>>horas;
    cout<<"Ingrese a que categoria pertenece (A),(B),(C)"<<endl;
    cin>>categoria;
    cout<<"Ingrese si pertene a Planilla Permanente (1) o a Planilla Contrato Civil (2)"<<endl;
    cin>>planilla;
    categoria=toupper(categoria);
    switch (categoria)
    {
    case 'A':
        cout<<PagoTotal(horas,planilla,25,18)<<endl;
        break;
    case 'B':
        cout<<PagoTotal(horas,planilla,20,14)<<endl;
        break;
    case 'C':
        cout<<PagoTotal(horas,planilla,15,12)<<endl;
        break;
    default:
        cout<<"Categoria no valida"<<endl;
        break;
    }
    return 0;
}
