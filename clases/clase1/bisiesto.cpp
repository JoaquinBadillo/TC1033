// Calculo de año bisiesto

#include <iostream>
#include <cmath>

using namespace std;

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
    int year = 0;
    cout << "Dame un año: ";
    cin >> year;

    bisiesto(year);
    return 0;
}