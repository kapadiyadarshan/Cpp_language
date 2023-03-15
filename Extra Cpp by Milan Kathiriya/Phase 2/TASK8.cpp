/*
    A Computer Teacher wants to teach a 10th standard
    class taht how a computer converts any decimal value into
    binary value. Help that teacher by developing C++ program
    for this urpose.
*/

#include<iostream>
using namespace std;

class Binary
{
    private :
        int n;
        int binaryNum[32];
        int i=0,j=0;

    public :
        Binary()
        {
            cout << "Enter Number = ";
            cin  >> n;

            while(n > 0)
            {
                binaryNum[i] = n%2;
                n = n/2;
                i++;
            }

            cout << "Binary Number = ";
            for(j=i-1; j>=0; j--)
            {
                cout << binaryNum[j];
            }
        }
};

int main()
{
    Binary o1;
    return 0;
}