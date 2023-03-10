#include<iostream>
using namespace std;

class A
{
    public :
        virtual void disp()             // Virtual Function
        {
            cout << "Hello...Class A...";
        }
};

class B : public A
{
    public :
        void disp()
        {
            cout << "Hello...Class B...";
        }
};

int main()
{
    A *o1;                              // pointer object

    A a1;
    B b1;

    o1 = &a1;

    o1->disp();

    return 0;
}
