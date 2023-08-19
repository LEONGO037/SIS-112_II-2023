// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 17/08/2023
// Fecha modificacion: 17/08/2023
// Numero de ejericio: 1
// Problema planteado: area de un triangulo
#include<iostream>
using namespace std;
int main ()
{
    int base, altura;
    double area;
    cout<<"Ingrese la base y altura del triangulo"<<endl;
    cin>>base>>altura;
    area=base*altura/2.0; //Calcula el area del triangulo
    cout<<"El area es "<<area<<endl;
    return 0;
}
