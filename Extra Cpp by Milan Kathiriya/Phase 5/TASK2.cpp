/*
    Develop a solution for Akshay by which he can retrieve
    factorial of all numbers between given range of two
    numbers using a C++ user defined function (UDF).
*/

#include<iostream>
using namespace std;

class Fact
{
    private :
        int n1,n2,i,j;
        int fact;

    public :
        Fact()
        {
            cout << "Enter n1 = ";
            cin  >> n1;

            cout << "Enter n2 = ";
            cin  >> n2;

            cout << "\n-----------------------------------------\n";

            if(n1<n2)
            {
                for(i=n1; i<=n2; i++)
                {
                    fact = 1;

                    for(j=i; j>0; j--)
                    {
                        fact = fact * j;
                    }

                    cout << i << " Factorial Is = " << fact <<endl;
                }
            }
            else
            {
                for(i=n2; i<=n1; i++)
                {
                    fact = 1;

                    for(j=i; j>0; j--)
                    {
                        fact = fact * j;
                    }

                    cout << i << " Factorial Is = " << fact <<endl;   
                }
            }
        }
};

int main()
{
    Fact o1;
    return 0;
}