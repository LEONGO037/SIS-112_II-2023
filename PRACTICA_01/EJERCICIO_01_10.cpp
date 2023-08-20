// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 19/08/2023
// Fecha modificacion: 19/08/2023
// Numero de ejericio: 10
// Problema planteado: Realice un programa que detecte si una letra ingresada el vocal o consonante. Si no es
//ninguna letra que diga que es caracter especial.
#include <iostream>
using namespace std;
int main()
{
    char letra;
    cout << "Ingrese una letra"<<endl;
    cin >> letra;
    //Se verifica que sea una letra del alfabeto
    if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
        // Convertir a minúscula para simplificar la comparación
        char letraMinuscula = tolower(letra);
        if (letraMinuscula == 'a' || letraMinuscula == 'e' || letraMinuscula == 'i' ||
            letraMinuscula == 'o' || letraMinuscula == 'u') {
            cout << "La letra ingresada es una vocal." << endl;
        } else {
            cout << "La letra ingresada es una consonante." << endl;
        }
    } else {
        cout << "La letra ingresada es un carácter especial." << endl;
    }
    return 0;
}
