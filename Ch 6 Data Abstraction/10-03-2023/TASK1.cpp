/*
    WAP to perform some basic mathematical operations
    using Abstract class such like:
    - area of circle
    - area of triangle
    - area of rectangle
    - use one single pure virtual function named
    calculate() to perform all above operations.
*/

#include<iostream>
using namespace std;

class A
{
    protected :
        float radius;
        float base;
        float height;
        float length;
        float width;

        virtual void calculate() = 0;
};

class B : protected A
{
    public :
        void calculate()
        {
            cout << "Enter Circle Parameters\n\n";

            cout << "Enter radius = ";
            cin  >> radius;

            cout << "\n Area of Circle = " << 3.14*radius*radius;

            cout << "\n\n-----------------------------------------------\n\n";

            cout << "Enter Triangle Parameters\n\n";

            cout << "Enter Base = ";
            cin  >> base;

            cout << "Enter Height = ";
            cin  >> height;

            cout << "\n Area of Triangle = " << 0.5*base*height;

            cout << "\n\n-----------------------------------------------\n\n";

            cout << "Enter Rectangle Parameters\n\n";

            cout << "Enter Length = ";
            cin  >> length;

            cout << "Enter Width = ";
            cin  >> width;

            cout << "\n Area of Rectangle = " << length*width;
        }
};

int main()
{
    B o1;

    o1.calculate();
    return 0;
}