/*
Two classmates wants to exchange their seating with
each other. But the problem is that there are only two
chairs in the small classroom which already aquires by
them. Write a C++ Program which provides a solution for
this particular problem.
*/

#include<iostream>
using namespace std;

class A
{
    private :
        int a;
        int b;

    public :
        A()
        {
            cout << "Enter A = ";
            cin  >> a;

            cout << "Enter B = ";
            cin  >> b;

            a=a+b;
            b=a-b;
            a=a-b;

            cout << "\nSwapping Values\n";

            cout << "A = " << a <<endl;
            cout << "B = " << b;
        }
};

int main()
{
    A o1;
    return 0;
}