/*
A Teacher give a punishment to all students to find
reverse numbers of given 3 random numbers by logically
under 15 minutes. Write a C++ Program to provide a
solution for this problem.
*/

#include<iostream>
using namespace std;

class Number
{
    private :
        int n;

    public :
        Number()
        {
            int remainder,reverese=0;

            cout << "Enter Number = ";
            cin  >> n;

            while(n != 0)
            {
                remainder = n%10;
                reverese = reverese*10+remainder;
                n=n/10;
            }

            cout << "Reverese Number is = " << reverese;
        }
};

int main()
{
    Number o1;
    return 0;
}