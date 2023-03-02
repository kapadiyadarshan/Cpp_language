/*
A student in a fifth class encounters a very easy math
problem to find quotient and remainder. Write a C++
Program which provides a solution for this particular
problem.
*/

#include<iostream>
using namespace std;

class A
{
    private :
        int Dividend;
        int Divisor;
        int Quotient;
        int Remainder;

    public :
        A()
        {
            cout << "Enter Dividend = ";
            cin  >> Dividend;

            cout << "Enter Divisor = ";
            cin  >> Divisor;

            Quotient = Dividend / Divisor;
            Remainder = Dividend % Divisor;

            cout << "Quotient = " << Quotient <<endl;
            cout << "Remainder = " << Remainder;
        }
};

int main()
{
    A o1;
    return 0;
}