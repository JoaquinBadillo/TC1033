// Adivinar un número
#include <iostream>
#include <cmath>

#include <iomanip>
#include <ctime>

using namespace std;

void juego_adivinar(int intentos)
{
    srand(time(0)); // Random seed
    int numero = rand() % 11; // Entero random entre 0 y 10
    int intento = 0; // Control del intento en el que vas

    for (int i=0; i<intentos; i++)
    {
        cout << "Tienes " << intentos - i << " intentos." << endl;
        cout << "Adivina un número entre 0 y 10: ";
        cin >> intento;
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
    juego_adivinar(5);

    return 0;
}