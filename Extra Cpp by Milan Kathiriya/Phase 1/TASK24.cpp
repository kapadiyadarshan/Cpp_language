/*
By writing a logic for checking if a given string is
Palindrom or Not, Apexa will be qualified for an entrance
exam. Write a C++ Program for Apexa to qualify.
*/

#include<iostream>
#include<string.h>
using namespace std;

class Palindrom
{
    private :
        char A[100];
        char B[100];

    public :
        Palindrom() 
        {
            cout << "Enter String = ";      fflush(stdin);
            gets(A);

            strcpy(B,A);

            strrev(B);

            if(strcmp(B,A)==0)
            {
                cout << "String is palindrom......";
            }
            else
            {
                cout << "String is not palindrom.....";
            }
        }
};

int main()
{
    Palindrom o1;
    return 0;
}