// Regresa el promedio de una lista de números
#include <iostream>
#include <cmath>

#include <iomanip> // Random
#include <vector> // Vector (array que puede cambiar de tamaño)
#include <ctime> // Voy a usar el tiempo para generar un random seed

using namespace std;

float promedio(vector<float> numeros)
{
    float promedio = 0;

    // Suma todos los numeros en el vector
    for (int indice=0; indice<numeros.size(); indice++)
    {
        promedio += numeros[indice];
    }

    promedio /= numeros.size();

    return promedio;
}

int main(void)
{
    srand(time(0)); // random seed

    // Inicialización de variables:
    int terminos = 0;
    vector<float> numeros;

    cout << "Cuántos numeros quieres que tenga la lista: ";
    cin  >> terminos;
    
    // Crear vector de números random con tantos términos como quiera el usuario
    for (int i=0; i<terminos; i++)
    {
        // Añadir número random entre 1 y 100 al final del vector
        numeros.push_back(1 + rand() % 100); 
    }

    // Mostrar en pantalla el vector (con formato de lista de Python):
    cout << "Tu lista es: " << "[";
    for (int i=0; i<terminos-1; i++)
    {
        cout << numeros[i] << ", ";
    }
    cout << numeros[terminos-1] << "]" << endl;

    // Mostrar en pantalla el promedio
    cout << "El promedio de tu lista es: " << promedio(numeros) << endl;

    return 0;
}