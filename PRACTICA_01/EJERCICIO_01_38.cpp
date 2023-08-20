// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 38
// Problema planteado: En el anio 2009 el pais A tiene una poblacion de 25 millones y el pais B de 19.9
// millones. Las tasas de crecimiento de la poblacion son de 2% y 3% respectivamente.
//Desarrollar un programa para saber en que anio la poblacion del pais B supera a la de A.
#include<iostream>
using namespace std;
int main()
{
    float paisA=25.0, paisB=19.9;
    int anio=2009;
    //Se inclrementa el crecimiento de la poblacion y se suma cada anio
    while(paisA>paisB)
    {
        paisA+=paisA/50.0;
        paisB+=paisB*3.0/100.0;
        anio++;
    }
    cout<<"La poblacion del pais B superara a la del pais A el anio "<<anio<<endl;
    return 0;
}
