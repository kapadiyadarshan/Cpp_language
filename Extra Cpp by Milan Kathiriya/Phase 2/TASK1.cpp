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
        int n1,n2,i,j;

    public :
        A()
        {
            cout << "Enter n1 = ";
            cin  >> n1;

            cout << "Enter n2 = ";
            cin  >> n2;

            for(i=n1; i<=n2; i++)
            {
                for(j=1; j<=10; j++)
                {
                    cout << i << " * " << j << " = " << i*j <<endl;
                }
                cout << "------------------------------------------------\n";
            }
        }
};

int main()
{
    A o1;
    return 0;
}