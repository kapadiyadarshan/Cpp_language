/*
A fourth standard student forced by his teacher to
dentify if a given Character is Uppercase, Lowercase,
Digit or Special Character. Write a C++ Program to help
that student.
*/
#include<iostream>
using namespace std;

class A
{
    private :
        char c;
    
    public :
        A()
        {
            cout << "Enter Any Character = ";
            cin  >> c;

            if(c >= 'A' && c <= 'Z')
            {
                cout << "it's Upper Case.......";
            }
            else if(c >= 'a' && c <= 'z')
            {
                cout << "it's Lower Case.......";
            }
            else if(c >= '0' && c <= '9')
            {
                cout << "it's Digit.......";
            }
            else
            {
                cout << "it's Special Character.......";
            }
        }
};

int main()
{
    A o1;
    return 0;
}