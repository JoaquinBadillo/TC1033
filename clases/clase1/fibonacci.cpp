// Secuencia fibonnaci
// Código original de Python por Octavio Navarro
// Código adaptado a C++ por Joaquín Badillo
// Última modificación 6 de Novimebre de 2021

#include <iostream>
#include <cmath>

using namespace std;

// Función que muestra por pantalla la sucesión de fibonnaci con "terminos" elementos:
void fibonacci(int terminos)
{
    // Inicialización de variables
    int anterior = 0;
    int actual = 1;
    int contador = 1;

    // Empezamos mostrando 0
    cout << anterior << " ";

    while (contador < terminos)
    {
        // Mostramos el número de fibonacci en el que va el loop y generamos el siguiente
        cout << actual << " ";
        int siguiente = actual + anterior;
        anterior = actual;
        actual = siguiente;
        contador ++;
    }
    // Añadimos un salto de línea al final para que no se vea feo
    cout << endl;
}

int main(void)
{
    // Inicialización de la variable "terminos": 
    int terminos = 0;

    // Pedir al usuario el número de términos en la sucesión
    cout << "Dame cuántos términos quieres: ";
    cin >> terminos;

    // Mostrar por pantalla la sucesón de Fibonacci con los términos pedidos:
    fibonacci(terminos);

    return 0;
}