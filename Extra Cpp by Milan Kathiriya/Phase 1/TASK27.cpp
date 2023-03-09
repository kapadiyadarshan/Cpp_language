/*
Create a addition logic to find sum of all digits of
a given number to surpass a very challenging dream of
Tanmay. Write a C++ program to develop this system for
Tanmay.
*/

#include<iostream>
using namespace std;

class A
{
    public :
        int n;
        int sum=0;
        int ld;

        A()
        {
            cout << "Enter any number = ";
            cin  >> n;

            while(n!=0)
            {
                ld = n%10;
                n = n/10;

                sum = sum + ld;
            }

            cout << "Sum is "<< sum;
        }
};

int main()
{
    A o1;
    return 0;
}