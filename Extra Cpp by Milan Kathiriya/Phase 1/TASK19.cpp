/* 
Write a C++ program to Print Table of any Number less
than 10. A group of needy newbie math students will
appriciate your help for your help.
*/

#include<iostream>
using namespace std;

class Table
{
    private :
        int n;

    public :
        Table()
        {
            int i;

            cout << "Enter Number(1-10) = ";
            cin  >> n;

            for(i=1; i<=10; i++)
            {
                cout << n << " * " << i << " = " << n*i <<endl;
            }
        }
};

int main()
{
    Table o1;
    return 0;
}