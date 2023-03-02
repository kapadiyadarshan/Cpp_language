#include<iostream>
using namespace std;

class A
{  
    public :
        int a;

        A()
        {
            cout << "Enter A = ";
            cin  >> a;
        }
};

class B : public A
{
    public :
        int b;

        B()
        {
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
        }

        void sum()
        {
            s = B::a+b+c+d;

            cout << "Sum is " << s;
        }
};

int main()
{
    D o1;

    o1.sum();
    return 0;
}