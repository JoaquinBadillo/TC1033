#include <iostream>
#include "point.hpp"

using namespace std;

int main(void)
{
    Point p1(5.0, 3.0);
    Point p2(2.0, 0);
    
    cout << "p1: ";
    p1.print();
    cout << endl;

    cout << "p2: ";
    p2.print();
    cout << endl;

    cout << "d = " << p1.distance(p2) << endl;
    return 0;
}