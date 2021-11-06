// Area y volumen de una esfera

#include <iostream>
#include <cmath>

using namespace std;

float area_esfera(float radio)
{
    return 4.0 * M_PI * pow(radio,2);
}

float volumen_esfera(float radio)
{
    return 4.0/3.0 * M_PI * pow(radio, 3);
}

int main(void)
{
    float radio = 0;
    cout << "Calculo de area y volumen"<<endl;
    cout << "Dame el radio de la esfera: ";
    cin >> radio;

    float area = area_esfera(radio);
    float volumen = volumen_esfera(radio);

    cout << "Area: " << round(area*1000.0)/1000.0 << " Volumen: " << round(volumen*1000.0)/1000.0 << endl;

    return 0;
}
