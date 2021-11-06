#include <cmath>
#include <string>
#include <iostream>

using namespace std;

// Función que muestra por pantalla "Hola <nombre>":
void hello(string nombre)
{
    cout << "Hello " << nombre << endl;
}

int main(void)
{
    // Inicialización de variables:
    string nombre = "";
    int edad = 0;

    // Saludar a C++ xd
    cout << "Hola C++!" << endl;

    // Pedir al usuario por su nombre y edad
    cout << "Dame tu nombre: ";
    cin >> nombre;
    cout << "Dame tu edad: ";
    cin >> edad;

    // Saludar al usario por pantalla
    hello(nombre);
    // Mostrar cual será su edad en 20 años
    cout << "En 20 anios tendras " << edad + 20 << endl;

    return 0;
}