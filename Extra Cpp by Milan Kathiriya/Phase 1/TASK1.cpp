/*
Meena face an isuue to perform a mathematical
operation to find a cube of any number. Write a C++
Program which helps Meena to solve her issue.
*/

#include<iostream>
using namespace std;

class number
{
    public :
        int n;

        number()
        {
            cout << "Enter Number = ";
            cin  >> n;

            cout << n << " Number Cube Is " << n*n*n;
        }
};

int main()
{
    number o1;
    return 0;
}