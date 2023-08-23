// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 23/08/2023
// Fecha modificacion: 23/08/2023
// Numero de ejericio: 62
// Problema planteado: En una guardería hay 25 niños de 1, 2 y 3 años. Los niños de 1 año consumen 6 pañales
// al día, los niños de 2 años consumen 3 pañales diarios y los niños de 3 años consumen
// 2 pañales diarios. Se desea conocer el consumo total de pañales diarios.
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
