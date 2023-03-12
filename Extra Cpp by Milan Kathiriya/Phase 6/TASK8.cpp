/*
A 15 m fire-fighter’s ladder is leaning against the
wall. If the ground distance between the foot of the
ladder and the wall is 7 m, what is the wall’s height?

c = 15 meter
a = 7 meter
b = ??

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

            cout << "Enter side C = ";
            cin  >> c;

            cout << "Enter side A = ";
            cin  >> a;

            temp =  (c*c) - (a*a);

            b = sqrt(temp);

            cout << "side B = " << b << " Meter";     
        }
};

int main()
{
    Triangle o1;
    return 0;
}