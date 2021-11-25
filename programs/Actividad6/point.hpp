#include <iostream>
#include <cmath>
using namespace std;

class Point
{
private:
    double x;
    double y;

public:
    // Constructor parametrizado
    Point(double x_, double y_)
    {
        setX(x_);
        setY(y_);
    }

    // Constructor default
    Point(void)
    {
        x = 0.0;
        y = 0.0;
    }

    double getX(void)
    {
        return x;
    }

    double getY(void)
    {
        return y;
    }

    void setX(double x_)
    {
        x = x_;
    }

    void setY(double y_)
    {
        y = y_;
    }

    void print(void)
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    double distance(Point p)
    {
        return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
    }
};
