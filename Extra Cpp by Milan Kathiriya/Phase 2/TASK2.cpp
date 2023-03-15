/*
A Math problem to find average of all even numbers
from n Natural numbers raise difficulty to all 5th
standard students. Write a C++ Program to help them.
*/

#include<iostream>
using namespace std;

class A
{
    private :
        int n;
        int sum=0;
        int avg;
        int counter=0;

    public:
        A()
        {
            cout << "Enter Number = ";
            cin  >> n;

            cout << "\n1 to " << n << " Even Number is " <<endl;

            int i;
            for(i=1; i<=n; i++)
            {
                if(i % 2 == 0)
                {
                    cout << i << "  ";
                    sum = sum+i;
                    counter++;
                }
            }

            cout << "\n\nAverage is = " << sum/counter;
        }
};

int main()
{
    A o1;
    return 0;
}