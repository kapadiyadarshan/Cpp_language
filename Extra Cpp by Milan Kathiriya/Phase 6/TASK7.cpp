/*
Build a C++ system which helps a Mathematician to
figure out the type of a Triangle. Bases on Pythagoras’
theorem, find out if a triangle is: obtuse, right or
acute.
*/

#include<iostream>
#include<math.h>
using namespace std;

class Triangle
{
    private :
        float a;
        float b;
        float c;

    public :
        Triangle()
        {
            int temp;

            cout << "Enter side a = ";
            cin  >> a;

            cout << "Enter side b = ";
            cin  >> b;

            cout << "Enter side c = ";
            cin  >> c;

            if((c*c) == (a*a)+(b*b))
            {
                cout << "Right Angle Triangle\n";
            }
            else if((c*c) > (a*a)+(b*b))
            {
                cout << "Obtuse Angle Triangle\n";
            }
            else if((c*c) < (a*a)+(b*b))
            {
                cout << "Acute Angle Triangle\n";
            }
        }
};

int main()
{
    Triangle o1;
    return 0;
}