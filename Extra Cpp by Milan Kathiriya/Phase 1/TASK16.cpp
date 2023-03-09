/*
Two friends are playing a game in which they have to
check whether a given number is Even or Odd. Help them to
Write a C++ Program for that.
*/

#include<iostream>
using namespace std;

class Number
{
    private :
        int n;

    public :
        Number()
        {
            cout << "Enter Number = ";
            cin  >> n;

            if(n%2 == 0)
            {
                cout << "It's Even Number....";
            }
            else
            {
                cout << "It's Odd Number....";
            }
        }
};

int main()
{
    Number o1;
    return 0;
}