// Suma de números mientras el número sea diferente de cero

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(void)
{
    int numero = 0;
    int suma = 0;
    do
    {
        cout << "Dame un numero (cero para terminar): ";
        cin >> numero;

        suma += numero; 
    } while (numero != 0);
    
    cout << "La suma es: " << suma << endl;

    return 0;
}