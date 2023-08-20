// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 21
// Problema planteado: En una fabrica de computadoras se planea ofrecer a los clientes un descuento que
//dependera del numero de computadoras que compre. Si las computadoras son menos
//de cinco se les dara un 10% de descuento sobre el total de la compra; si el numero de
//computadoras es mayor o igual a cinco pero menos de diez se le otorga un 20% de
//descuento; y si son 10 o mas se les da un 40% de descuento. El precio de cada
//computadora es un valor que el usuario ingrese desde el teclado.
#include<iostream>
using namespace std;
int main()
{
    int precio;
    float cantidad;
    cout<<"Ingrese el precio de cada computadora"<<endl;
    cin>>precio;
    cout<<"Ingrese la cantidad de computadoras"<<endl;
    cin>>cantidad;
    //Vemos en que categoria de descuento entra
    if (cantidad>0 && cantidad<5)
        cout<<"El precio es "<<(cantidad*precio)-(cantidad*precio/10.0)<<" aplicando un 10% de descuento"<<endl;
    if (cantidad>=5 && cantidad<10)
        cout<<"El precio es "<<(cantidad*precio)-(cantidad*precio/5.0)<<" aplicando un 20% de descuento"<<endl;
    if (cantidad>=10)
        cout<<"El precio es "<<(cantidad*precio)-(cantidad*precio*2.0/5.0)<<" aplicando un 40% de descuento"<<endl;
    return 0;
}
