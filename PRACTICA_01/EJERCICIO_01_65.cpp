// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 23/08/2023
// Fecha modificacion: 23/08/2023
// Numero de ejericio: 65
// Problema planteado:  Escribir un progama que acepte un número no mayor a dos dígitos y muestre el mismo de manera literal:
// Ej: 23 : Veintitrés
#include <iostream>
using namespace std;
void unidades (int num)
{
    switch(num)
    {
    case 1:
        cout<<"uno"<<endl;
        break;
    case 2:
        cout<<"dos"<<endl;
        break;
    case 3:
        cout<<"tres"<<endl;
        break;
    case 4:
        cout<<"cuatro"<<endl;
        break;
    case 5:
        cout<<"cinco"<<endl;
        break;
    case 6:
        cout<<"seis"<<endl;
        break;
    case 7:
        cout<<"siete"<<endl;
        break;
    case 8:
        cout<<"ocho"<<endl;
        break;
    case 9:
        cout<<"nueve"<<endl;
        break;
    default:
        cout<<""<<endl;
    }
}
int main()
{
    int numero;
    cout<<"Ingrese un numero de 2 cifras"<<endl;
    cin>>numero;
    if(numero<10)
        unidades(numero);
    //Los numeros del 11 al 15 son casos especiales
    else if (numero==11)
        cout<<"once"<<endl;
    else if (numero==12)
        cout<<"doce"<<endl;
    else if (numero==13)
        cout<<"trece"<<endl;
    else if (numero==14)
        cout<<"catorce"<<endl;
    else if (numero==15)
        cout<<"quince"<<endl;
    else if (numero<20)
    {
        cout<<"diesy";
        unidades(numero%10);
    }
    else if (numero==20)
        cout<<"veinte"<<endl;
    else if (numero<30)
    {
        cout<<"veinti";
        unidades(numero%10);
    }
    else if (numero==30)
        cout<<"treinta"<<endl;
    else if (numero<40)
    {
        cout<<"treinta y ";
        unidades(numero%10);
    }
    else if (numero==40)
        cout<<"cuarenta"<<endl;
    else if (numero<50)
    {
        cout<<"cuarenta y ";
        unidades(numero%10);
    }
    else if (numero==50)
        cout<<"cincuenta"<<endl;
    else if (numero<60)
    {
        cout<<"cincuenta y ";
        unidades(numero%10);
    }
    else if (numero==60)
        cout<<"sesenta"<<endl;
    else if (numero<70)
    {
        cout<<"sesenta y ";
        unidades(numero%10);
    }
    else if (numero==70)
        cout<<"setenta"<<endl;
    else if (numero<80)
    {
        cout<<"setenta y ";
        unidades(numero%10);
    }
    else if (numero==80)
        cout<<"ochenta"<<endl;
    else if (numero<90)
    {
        cout<<"ochenta y ";
        unidades(numero%10);
    }
    else if (numero==90)
        cout<<"noventa"<<endl;
    else if (numero<100)
    {
        cout<<"noventa y ";
        unidades(numero%10);
    }
    return 0;
}
