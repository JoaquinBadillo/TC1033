// Suma de números mientras el número sea diferente de cero
// Código original de Python por Octavio Navarro
// Código adaptado a C++ por Joaquín Badillo
// Última modificación 6 de Novimebre de 2021

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    // Inicialización de variables:
    int numero = 0;
    int suma = 0;

    // Se le pide al usuario un número y se añade a la suma acumulada
    do
    {
        cout << "Dame un numero (cero para terminar): ";
        cin >> numero;

        suma += numero; 
    } while (numero != 0); // Si el usuario da un 0, se acaba el do-while loop.
    
    // Cuando se termine el loop mostramos la suma acumulada:
    cout << "La suma es: " << suma << endl;

    return 0;
}