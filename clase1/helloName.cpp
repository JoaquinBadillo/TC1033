#include <cmath>
#include <string>
#include <iostream>

using namespace std;

void hello(string nombre)
{
    cout << "Hello " << nombre << endl;
}

int main(void)
{
    string nombre = "";
    int edad = 0;

    cout << "Hola C++!" << endl;

    cout << "Dame tu nombre: ";
    cin >> nombre;

    cout << "Dame tu edad: ";
    cin >> edad;

    hello(nombre);
    cout << "En 20 anios tendras " << edad + 20 << endl;
}