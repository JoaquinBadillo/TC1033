// Calculo de indice de masa corporal

#include <iostream>
#include <cmath>

using namespace std;

void bmi(float altura, float peso)
{
    float indice = peso / pow(altura, 2);
    cout << indice << endl;

    if (indice < 20)
    {
        cout << "Peso bajo" << endl;
    }
    else if (indice < 25)
    {
        cout << "Normal" << endl;
    }
    else if (indice < 30)
    {
        cout << "Sobre peso" << endl;
    }
    else if (indice < 40)
    {
        cout << "Obesidad" << endl;
    }
    else
    {
        cout << "Obesidad morbida" << endl;
    }
}

int main(void)
{
    float peso = 0;
    float altura = 0;

    cout << "Dame tu peso: ";
    cin >> peso;

    cout << "Dame tu altura: ";
    cin >> altura;

    bmi(altura, peso);

    return 0;
}