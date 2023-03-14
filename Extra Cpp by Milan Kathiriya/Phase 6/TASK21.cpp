/*
Build a C++ solution which returns array of all ASCII
values of alphabets skipping 3 characters. Use concept of
Constructors. After returning that array, find addition
of that values and decide whether it is a odd or even
number.
*/

#include<iostream>
using namespace std;

class Alphabet
{
    private :
        char i;

    public :
        Alphabet()
        {
            for(i='A'; i<='Z'; i++)
            {
                cout << i << " ASCII value is " << (int)i <<endl;
            }
        }
};

int main()
{
    Alphabet o1;

    return 0;
}