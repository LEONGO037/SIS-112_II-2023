// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 23/08/2023
// Fecha modificacion: 23/08/2023
// Numero de ejericio: 62
// Problema planteado: En una guarder�a hay 25 ni�os de 1, 2 y 3 a�os. Los ni�os de 1 a�o consumen 6 pa�ales
// al d�a, los ni�os de 2 a�os consumen 3 pa�ales diarios y los ni�os de 3 a�os consumen
// 2 pa�ales diarios. Se desea conocer el consumo total de pa�ales diarios.
#include <iostream>
using namespace std;
int main()
{
    int paniales=0;
    for(int i=0;i<25;i++)
    {
        int edad;
        cout<<"Ingrese la edad del ninio (1, 2 o 3)"<<endl;
        cin>>edad;
        //Suma la cantidad de paniales que se usa cada ninio
        switch(edad)
        {
        case 1:
            paniales+=6;
            break;
        case 2:
            paniales+=3;
            break;
        case 3:
            paniales+=2;
            break;
        default:
            cout<<"Valor no valido"<<endl;
        }
    }
    cout<<"A diario se usan "<<paniales<<" paniales"<<endl;
    return 0;
}
