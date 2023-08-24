// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 23/08/2023
// Fecha modificacion: 23/08/2023
// Numero de ejericio: 68
// Problema planteado:  Escribir un algoritmo que permita generar 50 números al azar en el rango (1-99) y
// determine cuántos de estos elementos son números primos.
// Inge no me funciona en el Codeblocks pero si en el onlineGDB
#include <iostream>
#include <random>
using namespace std;
//Funcion que determina si un numero es primo o no
bool esPrimo(int num)
{
    bool Primo=true;
    if (num <= 1)
        Primo=false;
    for (int i = 2; i<= num/2; ++i)
    {
        if (num % i == 0)
            Primo=false;
    }
    return Primo;
}
int main ()
{
    for(int i=0;i<50;i++)
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(1, 99);
        // Generar un número aleatorio entre 1 y 99
        int numeroAleatorio = dis(gen);
        cout<<numeroAleatorio;
        if(esPrimo(numeroAleatorio))
            cout<<" Es primo"<<endl;
        else
            cout<<endl;
    }
    return 0;
}
