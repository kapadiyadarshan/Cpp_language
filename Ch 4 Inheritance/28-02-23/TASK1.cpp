#include<iostream>
using namespace std;

/*
WAP to find sum of all three number’s cubes by
implementing single level inheritance: 
Class X->Class Y
- Class X has following members: a, b & c attributes in integer data type
- Class Y has following members: setData() and getData() methods
*/

class A
{
    public :
        int a,b,c;
};

class B : public A
{
    public :
        void setData()
        {
            cout << "Enter A = ";       cin >> a;
            cout << "Enter B = ";       cin >> b;
            cout << "Enter C = ";       cin >> c;
        }
        void getData()
        {
            cout << "Cubes of A " << a*a*a <<endl;
            cout << "Cubes of B " << b*b*b <<endl;
            cout << "Cubes of C " << c*c*c <<endl;

            cout << "sum of cubes are " << (a*a*a)+(b*b*b)+(c*c*c);
        }
};

int main()
{
    B o1;
    o1.setData();

    o1.getData();
    return 0;
}