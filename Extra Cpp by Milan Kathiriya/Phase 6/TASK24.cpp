/*
Design a swapping program using only constructors for
helping Devansh to gain passing marks in examination.
*/

#include<iostream>
using namespace std;

class Swap
{
    private :
        int a;
        int b;

    public :
        Swap()
        {
            cout << "Enter Maths Marks = ";
            cin  >> a;

            cout << "Enter Science Marks = ";
            cin  >> b;

            a = a+b;
            b = a-b;
            a = a-b;

            cout << "Maths Marks = " << a <<endl;
            cout << "Science Marks = " << b <<endl;
        }
};

int main()
{
    Swap o1;
    return 0;
}