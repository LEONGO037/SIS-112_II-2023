// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 23/08/2023
// Fecha modificacion: 23/08/2023
// Numero de ejericio: 63
// Problema planteado:  Leer un valor numérico y convertirlo a un número romano (1-9999)
#include <iostream>
using namespace std;
int main()
{
    int numero;
    cout<<"Ingrese un numero"<<endl;
    cin>>numero;
    cout<<"El numero en romano es"<<endl;
    while(numero>0)
    {
        //Hasta el 4000 esta asi para imprimir la barrita que representa el mil
        if(numero>=9000)
        {
            cout<<"__"<<endl;
            cout<<"IX";
            numero-=9000;
        }
        else if(numero>=8000)
        {
            cout<<"____"<<endl;
            cout<<"VIII";
            numero-=8000;
        }
        else if(numero>=7000)
        {
            cout<<"___"<<endl;
            cout<<"VII";
            numero-=7000;
        }
        else if(numero>=6000)
        {
            cout<<"__"<<endl;
            cout<<"VI";
            numero-=6000;
        }
        else if(numero>=5000)
        {
            cout<<"_"<<endl;
            cout<<"V";
            numero-=5000;
        }
        else if(numero>=4000)
        {
            cout<<"__"<<endl;
            cout<<"IV";
            numero-=4000;
        }
        else if(numero>=1000)
        {
            cout<<"M";
            numero-=1000;
        }

        else if(numero>=900)
        {
            cout<<"CM";
            numero-=900;
        }
        else if(numero>=500)
        {
            cout<<"D";
            numero-=500;
        }
        else if(numero>=400)
        {
            cout<<"CD";
            numero-=400;
        }
        else if(numero>=100)
        {
            cout<<"C";
            numero-=100;
        }
        else if(numero>=90)
        {
            cout<<"XC";
            numero-=90;
        }
        else if(numero>=50)
        {
            cout<<"L";
            numero-=50;
        }
        else if(numero>=40)
        {
            cout<<"XL";
            numero-=40;
        }
        else if(numero>=10)
        {
            cout<<"X";
            numero-=10;
        }
        else if(numero>=9)
        {
            cout<<"IX";
            numero-=9;
        }
        else if(numero>=5)
        {
            cout<<"V";
            numero-=5;
        }
        else if(numero>=4)
        {
            cout<<"IV";
            numero-=4;
        }
        else if(numero>=1)
        {
            cout<<"I";
            numero-=1;
        }
    }
    return 0;
}
