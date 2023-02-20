#include<iostream>
using namespace std;

//WAP to find all even elements from given 1D array.

int main()
{
    int n,i;
    cout << "Enter Array Size = ";
    cin  >> n;

    int A[n];

    for(i=0; i<n; i++)
    {
        cout << "A[" << i << "] = ";
        cin  >> A[i];   
    }

    cout << "-------------------------------------------------------------" <<endl ;

    cout << "even elements is here" <<endl;

    for(i=0; i<n; i++)
    {
        if(A[i] % 2 == 0)
        {
           cout << "A[" << i << "] = " << A[i] <<endl;     
        }
    }

    return 0;
}