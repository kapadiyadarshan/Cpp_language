/*
Sameer needs to master a technique to find if a given
number is Prime number or not for his best presentation
at the Teachers Day to impress his Math teacher. Help
sameer to Write a C++ Program with best technique.
*/

#include<iostream>
using namespace std;

class Prime
{
    private :
        int n;

    public :
        Prime()
        {
            int i,temp=0;

            cout << "Enter Number = ";
            cin  >> n;

            for(i=1; i<=n; i++)
            {
                if(n % i == 0)
                {
                    temp++;
                }
            }

            if(temp==2)
            {
                cout << n << " Is a Prime Number....";
            }
            else
            {
                cout << n << " Is Not a Prime Number....";
            }
        }
};

int main()
{
    Prime o1;
    return 0;
}