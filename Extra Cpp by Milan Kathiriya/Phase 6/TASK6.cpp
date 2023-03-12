/*
A 26 m long rope is stretched from the top of a 13 m
tree to the ground. Find the distance between the tree
and the end of the rope on the ground.

c = 26 meter
a = 13 meter
b = ?

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