/*
Kashyap has difficulty to remember multiplication
tables. Write a C++ Program which generates
multiplication tables between n1 and n2 provided values.
*/

#include<iostream>
using namespace std;

class A
{
    private :
        int n1,n2;

    public :
        A()
        {
            cout << "Enter n1 = ";
            cin  >> n1;

            cout << "Enter n2 = ";
            cin  >> n2;

            cout << n1 << " and " << n2 << " Multiplication is " << n1*n2;
        }
};

int main()
{
    A o1;
    return 0;
}