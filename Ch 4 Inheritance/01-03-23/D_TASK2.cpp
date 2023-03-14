#include<iostream>
using namespace std;

/*
WAP to perform four different number’s sum by
inheriting constructors in hybrid inheritance.
*/

class A
{  
    public :
        int a;
};

class B : public A
{
    public :
        int b;

        B()
        {
            cout << "Enter A = ";
            cin  >> a;

            cout << "Enter B = ";
            cin  >> b;
        }
};

class C : public A
{
    public :
        int c;

        C()
        {
            cout << "Enter C = ";
            cin  >> c;
        }
};

class D : public B, public C
{
    public :
        int d,s;

        D()
        {
            cout << "Enter D = ";
            cin  >> d;

            s = B::a+b+c+d;

            cout << "Sum is " << s;
        }

};

int main()
{
    D o1;
    return 0;
}