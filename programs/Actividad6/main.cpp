#include <iostream>

#include "triangle.hpp"

int main(void)
{
    // Probar constructor por defecto, método de perímetro y método de área
    Triangle T1 = Triangle();
    cout << "Triangulo por defecto:" << endl;
    cout << "Perimetro: " << T1.perimeter() << " u" << endl;
    cout << "Area: " << T1.area() << " u²" << endl;
    cout << endl;

    // Probar constructor parametrizado
    Triangle T2 = Triangle(Point(40,40), Point(50, 10), Point(20, 30));
    cout << "Triangulo con vértices esecíficos:" << endl;
    cout << "Perimetro: " << T2.perimeter() << " u" << endl;
    cout << "Area: " << T2.area() << " u²" << endl;

    return 0;
}