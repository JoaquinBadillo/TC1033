// Punto dentro o fuera de circunferencia
#include <iostream>
#include <cmath>

using namespace std;

void dentro_fuera(float punto_x, float punto_y, float centro_x, float centro_y, float radio)
{
    double distancia = pow((pow((punto_x - centro_x),2) + pow((punto_y - centro_y),2)), 0.5);

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
    float radio = 0;
    float centro_x = 0;
    float centro_y = 0;
    float punto_x = 0;
    float punto_y = 0;

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

    dentro_fuera(punto_x, punto_y, centro_x, centro_y, radio);

    return 0;
}