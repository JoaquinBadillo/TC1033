// Adivinar un número
// Código original de Python por Octavio Navarro
// Código adaptado a C++ por Joaquín Badillo
// Última modificación 6 de Novimebre de 2021

#include <iostream>
#include <cmath>

#include <iomanip>
#include <ctime>

using namespace std;

void juego_adivinar(int intentos)
{
    srand(time(0)); // Random seed
    int numero = rand() % 11; // Entero random entre 0 y 10
    int intento = 0; // Número ingresado por el usuario, inicializado en 0

    for (int i=0; i<intentos; i++)
    {
        cout << "Tienes " << intentos - i << " intentos." << endl;
        cout << "Adivina un número entre 0 y 10: ";
        cin >> intento;

        // Comparar el número del usuario con el número generado aleatoriamente:
        if (intento == numero)
        {
            cout << "Adivinaste!" << endl;
            break;
        }
        else
        {
            cout << "Fallaste" << endl;

            if (intento < numero)
            {
                cout << "El número que elegiste es menor al que buscas..." << endl;
            }
            else
            {
                cout << "El número que elegiste es mayor al que buscas..." << endl;
            }
        }
    } 
}

int main(void)
{
    // Empezar juego para adivinar números con 5 intentos:
    juego_adivinar(5);

    return 0;
}