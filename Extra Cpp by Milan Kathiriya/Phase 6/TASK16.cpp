/*
Find Volume of a Box using Parameterized Constructor
and figure out if that is odd or even number.
*/

#include<iostream>
using namespace std;

class Box
{
    public :
        int volume;

        Box(int h, int w, int l)        // Parameterized constructor
        {
            volume = h*w*l;

            cout << "Box Volume is = " << volume <<endl;

            if(volume % 2 == 0)
            {
                cout << "Volume number is Even....";
            }
            else
            {
                cout << "Volume number is Odd....";
            }
        }
};

int main()
{
    int height;
    int width;
    int length;

    cout << "Enter Box height = ";
    cin  >> height;

    cout << "Enter Box Width = ";
    cin  >> width;

    cout << "Enter Box length = ";
    cin  >> length;

    Box o1(height, width, length);

    return 0;
}