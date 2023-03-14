/*
Jemin wants to create an automate system which
compare two given strings and it returns 1 if both
strings are same and 0 otherwise. Create a C++ system for
helping Jemin using overloading concept.
*/

#include<iostream>
#include<string.h>
using namespace std;

class A
{
    private :
        char p[100];
        char q[100];

    public :
        A()
        {
            cout << "Enter string 1 = ";        fflush(stdin);
            gets(p);

            cout << "Enter string 2 = ";        fflush(stdin);
            gets(q);

            if(strcmp(p,q)==0)
            {
                cout << "1....";
            }
            else
            {
                cout << "0....";
            }
        }
};

int main()
{
    A o1;
    return 0;
}