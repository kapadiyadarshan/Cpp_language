/*
WAP to perform all basic arithmetic operations such
like +, -, *, and / operations by implementing method
overloading using total 2 classes.
- use only one method named calculate() in child
class
- if you pass 2 arguments, perform division
- if you pass 3 arguments, perform subtraction
- if you pass 4 arguments, perform multiplication
- if you pass 5 arguments, perform addition
*/

#include<iostream>
using namespace std;

class A
{
    public :
        void calculate(float a,float b);
        void calculate(float a,float b,float c);
        void calculate(float a,float b,float c,float d);
        void calculate(float a,float b,float c,float d,float e);
};

class B : public A
{
    public :
        void calculate(float a,float b)
        {
            cout << "Division is = " << a/b  <<endl;
        }

        void calculate(float a,float b,float c)
        {
            cout << "Subtraction is =  " << a-b-c <<endl;
        }

        void calculate(float a,float b,float c,float d)
        {
            cout << "Multiplication is = " << a*b*c*d <<endl;
        }

        void calculate(float a,float b,float c,float d,float e)
        {
            cout << "Addition is = " << a+b+c+d+e <<endl;
        }
};

int main()
{
    B o1;
    float a,b,c,d,e;

    cout << "Enter A = ";
    cin  >> a;

    cout << "Enter B = ";
    cin  >> b;

    cout << "Enter C = ";
    cin  >> c;

    cout << "Enter D = ";
    cin  >> d;

    cout << "Enter E = ";
    cin  >> e;

    o1.calculate(a,b);
    o1.calculate(a,b,c);
    o1.calculate(a,b,c,d);
    o1.calculate(a,b,c,d,e);
    
    return 0;
}