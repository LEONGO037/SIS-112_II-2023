// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 21/08/2023
// Fecha modificacion: 21/08/2023
// Numero de ejericio: 50
// Problema planteado: Escribe una función que tome 3 parámetros: dos de tipo enteros y uno de tipo carácter.
// La función deberá sumar, restar, multiplicar o dividir los valores de los dos primeros
// parámetros dependiendo del código indicado en el tercer parámetro, y devolver el resultado.
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
