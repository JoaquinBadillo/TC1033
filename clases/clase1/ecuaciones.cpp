#include <iostream>
#include <cmath>

using namespace std;

// Función que regresa el valor de sin²(1/x°)/x 
double ecuacion_1(double x)
{
    double x_rad = x * M_PI / 180;
    return pow(sin(1/x_rad),2) / x;
}

// Función que regresa el valor de ³√[sin(x°)]/4x + 5πx*tan²(x°)
double ecuacion_2(double x)
{
    double x_rad = x * M_PI / 180;
    return pow(sin(x_rad), (1/3)) / (4 * x) + (5 * M_PI * x) * tan(pow(x_rad,2));
}

int main(void)
{
    // Inicializar variable x
    double x = 0;

    // Pedir al usuario el valor de x
    cout << "Dame un valor para x: ";
    cin >> x;

    // Mostrar por pantalla el resultado de las ecuaciones (funciones de x):
    cout << "El resultado de la primera ecuacion es " << ecuacion_1(x) << endl;
    cout << "El resultado de la segunda ecuacion es " << ecuacion_2(x) << endl;

    return 0;
}