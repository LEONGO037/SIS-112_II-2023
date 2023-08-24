// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 23/08/2023
// Fecha modificacion: 23/08/2023
// Numero de ejericio: 66
// Problema planteado:  Leer un valor que represente una cierta cantidad de dinero, escribir un algoritmo que
// permita convertir el dicho valor en billetes y monedas, de tal forma que sea la menor
// cantidad de billetes y monedas a convertir
#include <iostream>
using namespace std;
int main()
{
    int dinero;
    cout<<"Ingrese la cantidad de dinero"<<endl;
    cin>>dinero;
    cout<<"Son:"<<endl;
    //Calcula la cantidad de billetes o monedas de cada tipo
    if(dinero>=200)
    {
        cout<<dinero/200<<" billete(s) de 200 Bs"<<endl;
        dinero-=((dinero/200)*200);
    }
    if(dinero>=100)
    {
        cout<<dinero/100<<" billete(s) de 100 Bs"<<endl;
        dinero-=((dinero/100)*100);
    }
    if(dinero>=50)
    {
        cout<<dinero/50<<" billete(s) de 50 Bs"<<endl;
        dinero-=((dinero/50)*50);
    }
    if(dinero>=10)
    {
        cout<<dinero/10<<" billete(s) de 10 Bs"<<endl;
        dinero-=((dinero/10)*10);
    }
    if(dinero>=5)
    {
        cout<<dinero/5<<" moneda(s) de 5 Bs"<<endl;
        dinero-=((dinero/5)*5);
    }
    if(dinero>=1)
    {
        cout<<dinero<<" moneda(s) de 1 Bs"<<endl;
    }
}
