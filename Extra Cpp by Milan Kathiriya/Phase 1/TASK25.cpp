/*
By using an easy technique, Write a C++ program to
Find Largest Number among four numbers to help Prisha
boost-up her confidence in logical building process.
*/

#include<iostream>
using namespace std;

class Largest
{
    private :
        int n1,n2,n3,n4;

    public :
        Largest()
        {
            cout << "Enter n1 = ";
            cin  >> n1;

            cout << "Enter n2 = ";
            cin  >> n2;

            cout << "Enter n3 = ";
            cin  >> n3;

            cout << "Enter n4 = ";
            cin  >> n4;

            if(n1>n2 && n1>n3 && n1>n4)
            {
                cout << "n1 is Largest Number.... ";
            }
            else if(n2>n1 && n2>n3 && n2>n4)
            {
                cout << "n2 is Largest Number.... ";
            }
            else if(n3>n1 && n3>n2 && n3>n4)
            {
                cout << "n3 is Largest Number.... ";
            }
            else
            {
                cout << "n4 is Largest Number.... ";
            }
        }
};

int main()
{
    Largest o1;
    return 0;
}