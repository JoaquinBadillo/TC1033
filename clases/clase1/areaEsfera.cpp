// Area y volumen de una esfera

#include <iostream>
#include <cmath>

using namespace std;

// Función que calcula el área superficial de una esfera dado el radio
float area_esfera(float radio)
{
    // A = 4πr²
    return 4.0 * M_PI * pow(radio,2); 
}

// Función que calcula el volumen de una esfera dado el radio
float volumen_esfera(float radio)
{
    // V = 4/3 πr³
    return 4.0/3.0 * M_PI * pow(radio, 3);
}

int main(void)
{
    // Inicializar variable del radio
    float radio = 0;

    // Pedir al usuario el valor del radio y guardarlo en la variable
    cout << "Calculo de area y volumen"<<endl;
    cout << "Dame el radio de la esfera: ";
    cin >> radio;

    // Guardar el area y volumen de la esfera en variables usando las funciones
    float area = area_esfera(radio);
    float volumen = volumen_esfera(radio);

    // Mostrar por pantalla los resultados
    cout << "Area: " << round(area*1000.0)/1000.0 << " Volumen: " << round(volumen*1000.0)/1000.0 << endl;

    return 0;
}
