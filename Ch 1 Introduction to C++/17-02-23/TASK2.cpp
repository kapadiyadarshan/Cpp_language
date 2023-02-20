#include<iostream>
using namespace std;

// WAP to convert given string into toggle case.

int main()
{
    char A[200];
    cout << "Enter Any String = ";
    gets(A);

    int i;
    for(i=0; i<200; i++)
    {
        if(A[i] >= 'A' && A[i] <= 'Z')
        {
            A[i]=A[i]+32;
        }
        else if(A[i] >= 'a' && A[i] <= 'z')
        {
            A[i]=A[i]-32;
        }
    }

    cout <<endl << "Toggle case coverted string" <<endl;
    puts(A);

    return 0;
}