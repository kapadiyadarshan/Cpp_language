#include<iostream>
using namespace std;

//WAP to find all leap years from 2020 to 3030 and store them into an array.

int main()
{
    int i,j=0;
    int A[1000];


    for(i=2020; i<=3030; i++)
    {
        if(i % 4 == 0)
        {
            cout << "A[" << j << "] = " << i << endl;
            j++;   
        }
    }
    
    return 0;
}