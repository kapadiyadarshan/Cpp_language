/*
Sameer is too weak to find multiplication of any three
numbers. Write a C++ Program which helps Sameer to solve
his issue.
*/

#include<iostream>
using namespace std;

class A
{
    private :
        int x;
        int y;
        int z;

    public :
        A()
        {
            cout << "Enter X = ";
            cin  >> x;

            cout << "Enter Y = ";
            cin  >> y;

            cout << "Enter Z = ";
            cin  >> z;

            cout << x << "*" << y << "*" << z << " = " << x*y*z;
        }

};

int main()
{
    A o1;
    return 0;
}