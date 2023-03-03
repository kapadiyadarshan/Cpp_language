/*
A sport coach needs to convert submitted participants’
inches into feet and inches for height measurement. Write
a C++ Program to provide a solution for this.
*/

#include<iostream>
using namespace std;

class A
{
    private :
        int inch;
        int feet=0;

    public :
        A()
        {
            cout << "Enter Inch = ";
            cin  >> this->inch;

            while(inch >= 12)
            {
                inch = inch-12;
                feet++;
            }

            cout << "Feet = " << feet <<endl;
            cout << "Inch = " << inch;
        }
};

int main()
{
    A o1;
    return 0;
}