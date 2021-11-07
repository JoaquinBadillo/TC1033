// Cuenta todos los números enteros que estén en una lista
// Código original de Python por Octavio Navarro
// Código adaptado a C++ por Joaquín Badillo
// Última modificación 6 de Novimebre de 2021

#include <iostream>
#include <cmath>
#include <vector>

#include <iomanip>
#include <ctime>

using namespace std;

// Función que regresa cuántos números pares hay en un vector:
int cuenta_pares(vector<int> numeros)
{
    // Iniciamos una cuenta de números pares en 0
    int cuenta = 0;

    // Iteramos en el vector y si encontramos un núemero par incrementamos la cuenta
    for (int i=0; i<numeros.size(); i++)
    {
        if(numeros[i] % 2 == 0)
        {
            cuenta++;
        }
    }
    // Regresamos la cuenta de números pares.
    return cuenta; 
}

// Función que regresa cuántos números impares hay en un vector:
int cuenta_impares(vector<int> numeros)
{
    // Iniciamos una cuenta de números impares en 0
    int cuenta = 0;

    // Iteramos en el vector y si encontramos un núemero impar incrementamos la cuenta
    for (int idx = 0; idx<numeros.size(); idx++)
    {
        if (numeros[idx] % 2 != 0)
        {
            cuenta++;
        }
    }

    // Regresamos la cuenta de números impares
    return cuenta;
}

int main(void)
{
    // Inicialización de variables
    int terminos = 0;
    vector<int> numeros; // Vector vacío

    // Pedimos al usuario por la cantidad de números en su lista (vector)
    cout << "Cuántos numeros quieres que tenga la lista: ";
    cin >> terminos;

    // Añadimos tantos números aleatorios entre 1 y 20 como pidió el usuario:
    srand(time(0));
    for (int id=0; id<terminos; id++)
    {
        numeros.push_back(1 + rand() % 20);
    }

    // Guardamos la cuenta de números pares e impares de la lista en variables
    int pares = cuenta_pares(numeros);
    int impares = cuenta_impares(numeros);

    // Mostramos el vector con formato de lista de Python:
    cout << "Tu lista es: " << "[";
    for (int i=0; i<terminos-1; i++)
    {
        cout << numeros[i] << ", ";
    }
    cout << numeros[terminos-1] << "]" << endl;

    // Mostramos por pantalla las cuentas:
    cout << "Tu lista tiene " << pares << " numeros pares" << endl;
    cout << "Tu lista tiene " << impares << " numeros impares" << endl;

    return 0;
}