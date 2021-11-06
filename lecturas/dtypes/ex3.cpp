#include <iostream> 
using namespace std; 
 
int main(void){ 
    cout << "Comparando datos con operadores relacionales y logicos\n"; 
    cout << "0 es falso y 1 es verdadero...\n"; 
    cout <<(5 == 5) << endl; 
    cout << (10 > 5) << endl; 
    cout << (5 != 5) << endl; 
    cout << ((5 >= 1) && (5 <= 10)) << endl; 
    cout << ((4 > 5) || ( 3 > 10)) << endl; 
    return 0; 
} 