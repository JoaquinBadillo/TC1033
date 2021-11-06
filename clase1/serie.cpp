// Serie harmónica
#include <iostream>
#include <cmath>

using namespace std;

void serie_harmonica(int terminos)
{
    float suma = 0;

    for(int termino=1; termino < terminos + 1; termino++)
    {
        suma += 1.0/termino;
        cout << "1/" << termino << " ";
        if (termino < terminos)
        {
            cout << "+" << " ";
        }
    }

    cout << ": " << round(suma*10000.0)/10000.0 << endl;
}

int main(void)
{
    int terminos = 0;
    cout << "Dame cuántos terminos de la serie quieres: ";
    cin >> terminos;

    serie_harmonica(terminos);

    return 0;
}