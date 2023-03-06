/*
A math teacher wants to teach how to find a Simple
Interest. Write a C++ Program to provide a solution for
this.
*/

#include<iostream>
using namespace std;

class Interest
{
    private :
        int p;
        int i; 
        int t;
        int TotalInterest;

    public :
        Interest()
        {
            cout << "Enter Principal Amount = ";
            cin  >> p;

            cout << "Enter Interest Rate = ";
            cin  >> i;

            cout << "Enter Time = ";
            cin  >> t;

            TotalInterest = p*i*t/100;

            cout << "\nTotal Interest is = " << TotalInterest;
        }
};

int main()
{
    Interest o1;
    return 0;
}