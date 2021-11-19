// Operadores
#include <iostream> 
#include <cmath> 
using namespace std; 

int main(void){ 
    cout<<"Probando operadores aritmeticos en C++\n"; 
    cout << "Comprobando prescedencia de operadores: "<<1+2*3-4 << endl; 
    cout << (1+2)*(3-4) << endl; 
    cout << pow(2, 5) << endl; 
    cout << float(16)/3 << endl; 
    cout << float(16/3) << endl; 
    cout << "Esto es una division entera, OJO "<<16/3 << endl; 
    cout << "El operador modulo "<<7%3 << endl; 
    cout << 1/2 << endl; 
    cout << 3%6 << endl;
} 