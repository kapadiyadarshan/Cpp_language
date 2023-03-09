/*
Priya wants to teach his newly enrolled boy that how
to find number of Digits in any number. Write a C++
Program to provide a solution for this problem.
*/

#include<iostream>
using namespace std;

class A
{
    private :
        int n;

    public :
        A()
        {   
            int counter=0;

            cout << "Enter number = ";
            cin  >> n;

            while(n != 0)
            {
                n = n/10;
                counter++;
            }

            cout << "Number is " << counter << " Digits";
        }
};

int main()
{
    A o1;
    return 0;
}