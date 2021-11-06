// Cuenta todos los números enteros que estén en una lista

#include <iostream>
#include <cmath>
#include <vector>

#include <iomanip>
#include <ctime>

using namespace std;

int cuenta_pares(vector<int> numeros)
{
    int cuenta = 0;
    for (int i=0; i<numeros.size(); i++)
    {
        if(numeros[i] % 2 == 0)
        {
            cuenta++;
        }
    }

    return cuenta;
}

int cuenta_impares(vector<int> numeros)
{
    int cuenta = 0;
    for (int idx = 0; idx<numeros.size(); idx++)
    {
        if (numeros[idx] % 2 != 0)
        {
            cuenta++;
        }
    }

    return cuenta;
}

int main(void)
{
    int terminos = 0;
    vector<int> numeros;

    cout << "Cuántos numeros quieres que tenga la lista: ";
    cin >> terminos;
    
    srand(time(0));
    for (int id=0; id<terminos; id++)
    {
        numeros.push_back(1 + rand() % 20);
    }

    int pares = cuenta_pares(numeros);
    int impares = cuenta_impares(numeros);

    // Mostrar el vector con formato de lista de Python:
    cout << "Tu lista es: " << "[";
    
    for (int i=0; i<terminos-1; i++)
    {
        cout << numeros[i] << ", ";
    }

    cout << numeros[terminos-1] << "]" << endl;

    // Mostrar por pantalla las cuentas:
    cout << "Tu lista tiene " << pares << " numeros pares" << endl;
    cout << "Tu lista tiene " << impares << " numeros impares" << endl;

    return 0;
}