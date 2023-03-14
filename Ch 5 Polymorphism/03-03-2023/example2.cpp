#include<iostream>
using namespace std;

// Method Overriding 

class A
{
    public :
        void myAccess()
        {
            cout << "Hello Class A...";
        }
};

class B : public A
{
    public :
        void myAccess()
        {
            cout << "Hello Class B...";
        }
};

class C : public B
{
    public :
        void myAccess()
        {
            cout << "Hello Class C...";
        }
};

int main()
{
    C o1;

    o1.A::myAccess();
    return 0;
}