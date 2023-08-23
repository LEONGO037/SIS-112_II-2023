// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 22/08/2023
// Fecha modificacion: 22/08/2023
// Numero de ejericio: 59
// Problema planteado: Conjetura capicúa: Para obtener un número capicúa a partir de otro número se invierte el orden de sus cifras
// y se suman el número dado y el invertido. Este proceso se continúa las veces que sean necesarias hasta obtener un capicúa.
#include<iostream>
#include<string>
#include<sstream>
#include<cmath>
using namespace std;
int main()
{
    int numero1, numero2, capicua=0;
    cout<<"Ingrese 2 numeros"<<endl;
    cin>>numero1>>numero2;
    while(numero1<numero2)
    {
        int numerito=numero1,numero3=0;
        std::stringstream ss;
        ss<<numero1;
        string auxiliar = ss.str();
        int potencia=auxiliar.length()-1, digito;
        //Da la vuelta al numero
        while(numerito>0)
        {
            digito=numerito%10;
            numerito/=10;
            int num=digito*pow(10,potencia);
            numero3+=num;
            potencia--;
        }
        if(numero1==numero3)
        {
            cout<<"CAPICUA"<<endl;
            capicua++;
        }
        if(numero1+numero3>numero2)
            break;
        cout<<numero1<<" + "<<numero3<<" = "<<numero1+numero3<<endl;
        numero1+=numero3;

    }
    cout<<"En ese rango hay "<<capicua<<" numeros capicua"<<endl;
    return 0;
}
