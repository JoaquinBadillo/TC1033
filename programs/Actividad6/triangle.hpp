#include <cmath>

#include "point.hpp"

using namespace std;

class Triangle
{
    private:
        Point vertex1;
        Point vertex2;
        Point vertex3;
    
    public:
        Triangle(Point vertex1_, Point vertex2_, Point vertex3_)
        {
            vertex1 = vertex1_;
            vertex2 = vertex2_;
            vertex3 = vertex3_;
        }

        Triangle()
        {
            vertex1 = Point(0,0);
            vertex2 = Point(50,30);
            vertex3 = Point(25,10); 
        }

        double perimeter()
        {
            double d1 = vertex1.distance(vertex2);
            double d2 = vertex2.distance(vertex3);
            double d3 = vertex3.distance(vertex1);

            return d1 + d2 + d3;
        }

        double area()
        {
            double a = vertex1.distance(vertex3);
            double b = vertex2.distance(vertex3);

            // Producto interno de los vectores de diferencia
            double vx = (vertex1.getX() - vertex3.getX()) * (vertex2.getX() - vertex3.getX());
            double vy = (vertex1.getY() - vertex3.getY()) * (vertex2.getY() - vertex3.getY());

            double theta = acos((vx + vy)/(a*b));
            
            return 0.5*a*b*sin(theta);
        }

        void printVertices()
        {
            cout << "V1:";
            vertex1.print();

            cout << "V2:";
            vertex2.print();

            cout << "V3:";
            vertex3.print();
        }
};