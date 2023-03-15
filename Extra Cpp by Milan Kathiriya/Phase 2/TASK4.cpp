/*
Write a C++ Program which finds the area of triangle
whose base is 56 units and height is 21 units. Also print
sum of all digits of that area of triangle.
*/

#include<iostream>
using namespace std;

class Triangle
{
    private :
        int base;
        int height;
        int area;
        int sum=0;

    public :
        Triangle()
        {
            cout << "Enter Base = ";
            cin  >> this->base;

            cout << "Enter Height = ";
            cin  >> this->height;

            area = base * height;

            cout << "Triangle area is = " << area <<endl;

            while(area != 0)
            {
                int temp;

                temp = area % 10;
                sum = sum + temp;

                area = area / 10;
            }
            cout << "Sum is " << sum;
        }
};

int main()
{
    Triangle o1;
    return 0;
}