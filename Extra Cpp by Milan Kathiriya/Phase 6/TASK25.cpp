/*
Create a C++ Base class Shape with a constructor for
providing values for width and height. Then define two
derived classes Triangle and Rectangle, that calculate
the area of the shape area(). In the main, define two
objects: a triangle and a rectangle and then call the
area() function by this two objects.
*/

#include<iostream>
using namespace std;

class Shape
{
    protected :
        int width;
        int height;

        Shape()
        {
            cout << "Enter Width = ";
            cin  >> width;

            cout << "Enter Height = ";
            cin  >> height;
        }

        virtual void area() = 0;
};

class Triangele : public Shape
{
    public :
        void area()
        {
            cout << "Area of Triangle is " << (0.5*width*height) <<endl;
        }
};

class Rectangle : public Shape
{
    public :
        void area()
        {
            cout << "Area of Rectangle is " << (width*height);
        }
};

int main()
{
    Triangele o1;
    o1.area();

    Rectangle o2;
    o2.area();
    return 0;
}