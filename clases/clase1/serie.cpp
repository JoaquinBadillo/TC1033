// Serie harmónica
#include <iostream>
#include <cmath>

using namespace std;

// Función que muestra por pantalla la serie armónica desde 1 hasta "terminos"
void serie_harmonica(int terminos)
{
    // Variable de suma acumulada
    float suma = 0;

    // Sumamos 1/k para todos los enteros hasta "terminos" y mostramos por pantalla los sumandos
    for(int termino=1; termino < terminos + 1; termino++)
    {
        suma += 1.0/termino;
        cout << "1/" << termino << " ";
        if (termino < terminos)
        {
            cout << "+" << " ";
        }
    }

    // Mostramos por pantalla el resultado de la suma
    cout << ": " << round(suma*10000.0)/10000.0 << endl;
}

int main(void)
{
    // Inicialización de variable terminos
    int terminos = 0;

    // Pedimos al usuario la cantidad de términos de la sucesión harmónica que quiera sumar
    cout << "Dame cuántos terminos de la serie quieres: ";
    cin >> terminos;

    // Mostramos el resultado de dicha serie harmónica
    serie_harmonica(terminos);

    return 0;
}