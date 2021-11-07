// Determina si un numero es primo o no
// Código original de Python por Octavio Navarro
// Código adaptado a C++ por Joaquín Badillo
// Última modificación 6 de Novimebre de 2021

#include <iostream>
#include <cmath>

using namespace std;

// Función que regresa verdadero si un número entero es primo o falso de lo contrario:
bool primo(int numero)
{
    // Los primos empiezan en 2, descartamos los enteros anteriores inmediatamente
    if (numero <=1)
    {
        return false;
    }

    // Creamos un contador para checar todos los números anteriores al dado
    int contador = 2;

    // Iteramos con el contador y buscamos si existe un divisor del número dado:
    while (contador < numero)
    {
        if (numero % contador == 0)
        {
            // Si existe un divisior el número no es primo
            return false;
        }
        contador++;
    }
    // Si acaba el loop => no encontramos divisores => el número es primo:
    return true;
}

int main(void)
{
    // Inicialización de la variable numero
    int numero = 0;

    // Le pedimos al usuario un número y lo guardamos en la variable
    cout << "Dame un número: ";
    cin >> numero;

    // Checamos si es primo y guardamos verdadero o falso en la variable es_primo
    bool es_primo = primo(numero);

    // Mostramos por pantalla si el número es primo o no:
    if (es_primo)
    {
        cout << "El número es primo" << endl;
    }
    else
    {
        cout << "El número no es primo" << endl;
    }

    return 0;
}