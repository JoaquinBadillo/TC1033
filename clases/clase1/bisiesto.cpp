// Calculo de año bisiesto

#include <iostream>
#include <cmath>

using namespace std;

// Función que muestra por pantalla si un año fue bisiesto o no.
void bisiesto(int year)
{
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        cout << "Año bisiesto" << endl;
    }
    else
    {
        cout << "Año normal" << endl;
    }
}

int main(void)
{
    // Inicializar variable del año
    int year = 0;

    // Pedir al usuario por un año y guardarlo en la varaible
    cout << "Dame un año: ";
    cin >> year;

    // Mostrar por pantalla si fue un año bisiesto o no.
    bisiesto(year);
    
    return 0;
}