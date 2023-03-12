/*
The two short sides of a right triangle are 6 cm and
13 cm. Find the length of the third side using Pythagoras
Theorem with help of C++.
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

            temp = (a*a)+(b*b);

            c = sqrt(temp);

            cout << "side c = " << c << " cm";       
        }
};

int main()
{
    Triangle o1;
    return 0;
}