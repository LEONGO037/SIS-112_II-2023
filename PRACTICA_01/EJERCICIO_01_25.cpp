// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 25
// Problema planteado: Escribir un programa que permita adivinar un numero que sea genere internamente al
//azar, el cual esta en el rango de 0 a 50. El usuario debe adivinar este numero en base a
//aproximaciones, para lo cual se dispone de 5 intentos.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
 {
    // Generar un numero aleatorio entre 0 y 50
    srand(time(0));
    int numeroAleatorio = rand() % 51;
    int maximo=50, minimo=0, intento,i;
    for (i=1;i<6;i++)
    {
        cout<<"Estoy pensando en un numero entre "<<minimo<<" y "<<maximo<<endl;
        cout<<"Intento "<<i<<endl;
        cin>>intento;
        if (intento==numeroAleatorio)
        {
            cout<<"Felicidades, ganaste"<<endl;
            break;
        }
        else
        {
            if (intento<numeroAleatorio)
                minimo=intento;
            else
                maximo=intento;
        }
    }
    if (i==6)
        cout<<"Lo siento, perdiste"<<endl;
    return 0;
}

