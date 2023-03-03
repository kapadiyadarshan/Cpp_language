/*
An innocent boy must have to solve that how to raise
any number(Base) to power N for proving his common
ability among all classmates. Write a C++ Program to
provide a solution for this boy.
*/

#include<iostream>
using namespace std;

class A
{
    private :
        int number;
        int power;

    public :
        A()
        {
            cout << "Enter Number = ";
            cin  >> number;

            cout << "Enter Power = ";
            cin  >> power;

            int i,x=1;
            for(i=1; i<=power; i++)
            {
                x=x*number;
            }

            cout << "\nAnswer = " << x;
        }
};

int main()
{
    A o1;
    return 0;
}