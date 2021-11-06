// Secuencia fibonnaci

#include <iostream>
#include <cmath>

using namespace std;

void fibonacci(int terminos)
{
    int anterior = 0;
    int actual = 1;
    int contador = 1;

    cout << anterior << " ";

    while (contador < terminos)
    {
        cout << actual << " ";
        int siguiente = actual + anterior;
        anterior = actual;
        actual = siguiente;
        contador ++;
    }
    cout << endl;
}

int main(void)
{
    int terminos = 0;

    cout << "Dame cuántos términos quieres: ";
    cin >> terminos;

    fibonacci(terminos);
}