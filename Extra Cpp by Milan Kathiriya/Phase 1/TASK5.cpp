/*
Two college collegues had argue with a ASCII value
conversion method. Write a C++ Program which provides a
solution for their issue.
*/

#include<iostream>
using namespace std;

class A
{
    private :
        char a;
    
    public :
        A()
        {
            cout << "Enter Any Character = ";
            cin  >> a;

            cout << "\nASCII code is " << (int)a;
        }
};

int main()
{
    A o1;
    return 0;
}