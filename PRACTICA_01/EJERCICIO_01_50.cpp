// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 21/08/2023
// Fecha modificacion: 21/08/2023
// Numero de ejericio: 49
// Problema planteado: Escribir un programa que muestre en pantalla, con los encabezados correspondientes,
// el capital (Cn) y los intereses ganados por un capital C0 depositado a un interes
// compuesto I durante N anos.
#include<iostream>
#include<cctype>
using namespace std;
//Funcion que hace la operacion que indique
float Operaciones(int num1, int num2, char caracter)
{
    float resultado;
    switch(caracter)
    {
    case 'A':
        resultado=num1+num2;
        break;
    case 'B':
        resultado=num1-num2;
        break;
    case 'C':
        resultado=num1*num2;
        break;
    case 'D':
        {
            float auxilar1=num1*1.0, auxiliar2=num2*1.0;
            resultado=auxilar1/auxiliar2;
            break;
        }
    default:
        break;
    }
    return resultado;
}
int main()
{
    int numero1, numero2;
    char caracter;
    cout<<"Ingrese 2 numeros"<<endl;
    cin>>numero1>>numero2;
    cout<<"Ingrese que operacion desea realizar"<<endl<<"A. Suma"<<endl<<"B. Resta"<<endl<<"C. Multiplicacion"<<endl<<"D. Division"<<endl;
    cin>>caracter;
    caracter=toupper(caracter);
    cout<<"El resultado es "<<Operaciones(numero1,numero2,caracter)<<endl;
    return 0;
}
