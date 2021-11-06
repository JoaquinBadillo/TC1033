// Determina si un numero es primo o no
#include <iostream>
#include <cmath>

using namespace std;


bool primo(int numero)
{
    if (numero <=1)
    {
        return false;
    }

    int contador = 2;

    while (contador < numero)
    {
        if (numero % contador == 0)
        {
            return false;
        }
        contador++;
    }
    return true;
}

int main(void)
{
    int numero = 0;

    cout << "Dame un número: ";
    cin >> numero;

    bool es_primo = primo(numero);

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