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
        if (x_ >= 0 && x_ <= 100)
            x = x_;
        else
            x = 0;
    }

    void setY(double y_)
    {
        if (y_ >= 0 && y_ <= 100)
            y = y_;
        else
            y = 0;
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
