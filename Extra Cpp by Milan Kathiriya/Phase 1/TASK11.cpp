/*
Raman have an idea to impress his Computer Teacher by
solving Square Root of a number without using any
programming library. Write a C++ Program to help Raman.
*/

#include<iostream>
using namespace std;

class A
{
    private :
        int number;
        int square_root;
        int i;

    public :
        A()
        {
            cout << "Enter Number = ";
            cin  >> number;

            if(number==0 || number==1)
            {
                square_root = number;
            }
            else
            {
                square_root = 1;
                i = 1;

                while(square_root <= number)
                {
                    i++;
                    square_root = i*i;
                }

                square_root = i-1;
            }
            
            cout << "Square root is = " <<square_root;
        }
};

int main()
{
    A o1;
    return 0;
}