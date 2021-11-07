// Punto dentro o fuera de circunferencia
// Código original de Python por Octavio Navarro
// Código adaptado a C++ por Joaquín Badillo
// Última modificación 6 de Novimebre de 2021

#include <iostream>
#include <cmath>

using namespace std;


// Función para mostrar por pantalla si un punto está dentro, fuera o sobre una circunferencia
void dentro_fuera(float punto_x, float punto_y, float centro_x, float centro_y, float radio)
{
    // Distancia del punto dado al centro de la circunferencia:
    double distancia = pow((pow((punto_x - centro_x),2) + pow((punto_y - centro_y),2)), 0.5);

    /*  El radio es la distancia que tienen todos los puntos en una circunferencia al centro.
        Por este motivo comparamos la distancia del punto dado al centro con el radio:
    */
    if (distancia > radio)
    {
        cout << "Fuera de la circunferencia" << endl; 
    }
    else if (distancia < radio)
    {
        cout << "Dentro de la circunferencia" << endl;
    }
    else
    {
        cout << "Sobre la circunferencia" << endl;
    }
}

int main(void)
{
    // Inicialización de variables:
    float radio = 0;
    float centro_x = 0;
    float centro_y = 0;
    float punto_x = 0;
    float punto_y = 0;

    // Pedimos al usuario los valores de las variables:
    cout << "Dame el radio: ";
    cin >> radio;

    cout << "Dame la coordenada x del centro: ";
    cin >> centro_x;

    cout << "Dame la coordenada y del centro: ";
    cin >> centro_y;

    cout << "Dame la coordenada x del punto: ";
    cin >> punto_x;

    cout << "Dame la coordenada y del punto: ";
    cin >> punto_y;

    // Mostrar por pantalla si el punto está dentro, fuera o sobre la circunferencia
    dentro_fuera(punto_x, punto_y, centro_x, centro_y, radio);

    return 0;
}