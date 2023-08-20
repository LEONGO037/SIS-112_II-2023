// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 20/08/2023
// Fecha modificacion: 20/08/2023
// Numero de ejericio: 24
// Problema planteado: Leer un numero entero y muestre la suma de sus dos primeros digitos.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int numero,i=0;
    std::vector<int> Digitos;
    cout << "Ingrese un numero entero "<<endl;
    cin >> numero;
    //Separamos cada digito del numero
    while(numero>0)
    {
        Digitos.push_back(numero%10);
        numero /=10;
        i++;
    }
    if (i>=2)
        cout<<"La suma de los 2 primeros digitos es "<<Digitos[i-1]+Digitos[i-2]<<endl;
    else
        cout<<"El numero debe tener al menos 2 digitos"<<endl;
    return 0;
}
