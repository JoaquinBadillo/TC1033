// Calculo de indice de masa corporal (BMI)

#include <iostream>
#include <cmath>

using namespace std;

// Función que calcula el BMI y muestra por pantalla lo que implica el resultado:
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
    // Inicialización de variables
    float peso = 0;
    float altura = 0;

    // Pedir al usuario por su peso y altura
    cout << "Dame tu peso: ";
    cin >> peso;
    cout << "Dame tu altura: ";
    cin >> altura;

    // Mostrar si su peso es normal, inferior o superior al adecuado para su altura:
    bmi(altura, peso);

    return 0;
}