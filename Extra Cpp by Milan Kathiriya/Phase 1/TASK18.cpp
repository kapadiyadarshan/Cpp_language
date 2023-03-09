/*
Tushar is trying very hard to teach his classmate
Harsh that how to find Factorial of a Number. Write a C++
Program for Tushar with best possibe technique.
*/

#include<iostream>
using namespace std;

class Factorial
{
    private :
        int n;

    public :
        Factorial()
        {
            int fact=1,i;

            cout << "Enter Number = ";
            cin  >> n;

            for(i=n; i>1; i--)
            {
                fact = fact*i;
            }

            cout << "Factorial is " << fact;
        }
};

int main()
{
    Factorial o1;
    return 0;
}
